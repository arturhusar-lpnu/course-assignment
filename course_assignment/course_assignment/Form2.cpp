#include "AddTrainForm.h"
using namespace courseassignment;
std::vector<Train*> trains;
std::vector<Train*> addedTrains;


System::Void AddTrainForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	number = trainNumberTextBox->Text;
	start = startingStationTextBox->Text;
	destination = destinationTextBox->Text;
	List<String^>^ interStations = SplitStations(interStationsTextBox->Text);
	std::vector<std::string> stations;
	for each (String ^ lines in interStations)
	{
		stations.push_back(ConvertToString(lines));
	}
	departureTime = depHoursTextBox->Text + ":" + depMinutesTextBox->Text;
	arrivalTime = arrvHoursTextBox->Text + ":" + arrvMinutesTextBox->Text;
	length = Convert::ToDouble(lengthTextBox->Text);

	Train* train = new Train(Convert::ToInt16(number),
		ConvertToString(start), ConvertToString(destination), stations,
		ConvertToString(departureTime), ConvertToString(arrivalTime), length);
	addedTrains.push_back(train);
}


System::Void AddTrainForm::bttnApply_Click(System::Object^ sender, System::EventArgs^ e)
{
	for each (auto added in addedTrains)
	{
		trains.push_back(added);
		addedCount++;
	}
	//trainCount += addedCount;
	this->Hide();
	mainForm->UpdateData();
	mainForm->Show();
}
System::Void AddTrainForm::bttnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	mainForm->Show();
}