#include "Train.h"
#include "AddTrainForm.h"
#include "EditForm.h"
#include "CourseForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace courseassignment;

void CourseForm::addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddTrainForm^ form = gcnew AddTrainForm(instance);
	ReadData();
	form->Show();
	this->Hide();
}

String^ convertString(std::string str)
{
	return msclr::interop::marshal_as<System::String^>(str);
}

String^ convertStringVector(std::vector<std::string> strings, std::string delimiter)
{
	std::string joinedString = "";
	for (const std::string& str : strings) {
		joinedString += str + delimiter;
	}


	return msclr::interop::marshal_as<System::String^>(joinedString);
}

String^ convertTm(std::tm timeInfo) {
	char buffer[80];
	std::strftime(buffer, sizeof(buffer), "%H:%M", &timeInfo);

	return msclr::interop::marshal_as<System::String^>(buffer);
}

void CourseForm::UpdateData()
{
	dataGridViewSource->Rows->Clear();
	for (int i = 0; i < trains.size(); i++)
	{
		DataGridViewRow^ row = gcnew DataGridViewRow();
		row->CreateCells(dataGridViewSource);
		row->Cells[Number]->Value = trains[i]->getNumber().ToString();
		row->Cells[Starting]->Value = convertString(trains[i]->getStartStation());
		row->Cells[Destination]->Value = convertString(trains[i]->getEndStation());
		row->Cells[Intermediate]->Value = convertStringVector(trains[i]->getStations(), " -> ");
		row->Cells[Departure]->Value = convertString(trains[i]->getDepartureTime());
		row->Cells[Arrival]->Value = convertString(trains[i]->getArrivalTime());
		row->Cells[Distance]->Value = trains[i]->getDistance().ToString();
		dataGridViewSource->Rows->Add(row);
	}
}

System::Void CourseForm::editTableButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = dataGridViewSource->SelectedRows[0]->Index;
	Train* editTrain = new Train();

	editTrain = trains[index];

	EditForm^ form = gcnew EditForm(instance);

	this->Hide();
	form->trainNumberTextBox->Text = editTrain->getNumber().ToString();
	form->startingStationTextBox->Text = convertString(editTrain->getStartStation());
	form->destinationTextBox->Text = convertString(editTrain->getEndStation());
	form->interStationsTextBox->Text = convertStringVector(editTrain->getStations(), " -> ");

	array<System::String^>^ parts = convertString(editTrain->getDepartureTime())->Split(':');

	form->depHoursTextBox->Text = parts[0];
	form->depMinutesTextBox->Text = parts[1];


	parts = convertString(editTrain->getArrivalTime())->Split(':');
	form->arrvHoursTextBox->Text = parts[0];
	form->arrvMinutesTextBox->Text = parts[1];

	form->lengthTextBox->Text = editTrain->getDistance().ToString();

	form->Show();
}


std::string courseassignment::ConvertToString(String^ str)
{
	std::string native = msclr::interop::marshal_as<std::string>(str);

	return native;
}

//std::string courseassignment::ConvertTime(String^ str)
//{
//	if (DateTime::TryParseExact(str, "HH:mm", CultureInfo::InvariantCulture, DateTimeStyles::None, dt))
//	{
//		std::tm tm_time = {};
//		tm_time.tm_hour = dt.Hour;
//		tm_time.tm_min = dt.Minute;
//		return tm_time;
//	}
//	else
//	{
//		throw;
//	}
//}

List<String^>^ courseassignment::SplitStations(String^ stations)
{
	List<String^>^ stationList = gcnew List<String^>;
	array<Char>^ delimiterChars = { '-' , '>' };

	array<String^>^ stationsArray = stations->Split(delimiterChars, StringSplitOptions::RemoveEmptyEntries);

	for each (String ^ station in stationsArray) {
		stationList->Add(station->Trim()); // Trim any extra spaces
	}

	return stationList;
}


System::Void CourseForm::btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewSource->Rows->Clear();
}

System::Void CourseForm::btnLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		array<String^>^ lines = File::ReadAllLines(openFileDialog1->FileName);
		for each (String ^ str in lines)
		{
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridViewSource);
			for (int i = 0; i < str->Split(L';')->Length - 1; i++)
				row->Cells[i]->Value = str->Split(L';')[i];
			dataGridViewSource->Rows->Add(row);
		}

	}
}


System::Void CourseForm::btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{

		StreamWriter^ file = File::CreateText(saveFileDialog1->FileName);
		int rows = dataGridViewSource->RowCount, cols = dataGridViewSource->ColumnCount;

		/*String^ msg = "";
		msg = String::Concat("Rowcount: ", rows, ", Colcount: ", cols);
		String^ caption = "No Server Name Specified";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;
		// Displays the MessageBox.
		result = MessageBox::Show(this, msg, caption, buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Closes the parent form.
			//this->Close();
		}*/

		int i, j;
		for (i = 0; i < rows - 1; i++) {

			for (j = 0; j < cols; j++)
			{
				file->Write(dataGridViewSource->Rows[i]->Cells[j]->Value);
				file->Write(";");
			};
			file->WriteLine("");
		}
		file->Close();
	}
}

System::Void CourseForm::btnRunTask_Click(System::Object ^ sender, System::EventArgs ^ e) {
	String^ checkedTask;
	if (rbTask1->Checked) {
		checkedTask = rbTask1->Text;
	}
	else if (rbTask2->Checked) {
		checkedTask = rbTask2->Text;
	}
	else if (rbTask3->Checked) {
		checkedTask = rbTask3->Text;
	}
	else if (rbTask4->Checked) {
		checkedTask = rbTask4->Text;
	}
	else if (rbTask5->Checked) {
		checkedTask = rbTask5->Text;
	}
	else if (rbTask6->Checked) {
		checkedTask = rbTask6->Text;
	}
	
	
	String^ msg = "";
	msg = String::Concat(checkedTask, " finished successfully.");
	String^ caption = "No Server Name Specified";
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	System::Windows::Forms::DialogResult result;
	// Displays the MessageBox.
	result = MessageBox::Show(this, msg, caption, buttons);
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		// Closes the parent form.
		//this->Close();
	}
}

void CourseForm::ReadData()
{
	trains.clear();
	int trainNumber;
	std::string  start, finish, depTime, arrvTime;
	std::vector<std::string> stations;
	List<String^>^ interStations;
	double length;
	for (int i = 0; i < dataGridViewSource->RowCount-1; i++)
	{
		trainNumber = Convert::ToInt16(dataGridViewSource->Rows[i]->Cells[TrainData::Number]->Value->ToString());
		start = ConvertToString(dataGridViewSource->Rows[i]->Cells[TrainData::Starting]->Value->ToString());
		finish = ConvertToString(dataGridViewSource->Rows[i]->Cells[TrainData::Destination]->Value->ToString());
		interStations = SplitStations(dataGridViewSource->Rows[i]->Cells[TrainData::Intermediate]->Value->ToString());
		for each (String ^ lines in interStations)
		{
			stations.push_back(ConvertToString(lines));
		}
		depTime = ConvertToString(dataGridViewSource->Rows[i]->Cells[TrainData::Departure]->Value->ToString());
		arrvTime = ConvertToString(dataGridViewSource->Rows[i]->Cells[TrainData::Arrival]->Value->ToString());
		length = Convert::ToDouble(dataGridViewSource->Rows[i]->Cells[TrainData::Distance]->Value->ToString());
		trains.push_back(new Train(trainNumber, start, finish, stations, depTime, arrvTime, length));
	}
}

[STAThreadAttribute]
int main(array<String^>^ argv)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	CourseForm form;
	Application::Run(% form);
}