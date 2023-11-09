#include "EditForm.h"


using namespace courseassignment;
System::Void EditForm::bttnApply_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = mainForm->dataGridViewSource->CurrentRow->Index;
	std::vector<std::string> stations;
	List<String^>^ interStations;
	interStations = SplitStations(interStationsTextBox->Text);
	for each (String ^ lines in interStations)
	{
		stations.push_back(ConvertToString(lines));
	}

	trains[index]->setNumber(Convert::ToInt16(trainNumberInput->Value));
	trains[index]->setStartStation(ConvertToString(startingStationTextBox->Text));
	trains[index]->setEndStation(ConvertToString(destinationTextBox->Text));
	trains[index]->setStations(stations);
	trains[index]->setDepartureTime(ConvertToString(depHoursTextBox->Text + ":" + depMinutesTextBox->Text));
	trains[index]->setArrivalTime(ConvertToString(arrvHoursTextBox->Text + ":" + arrvMinutesTextBox->Text));
	trains[index]->setDistance(Convert::ToDouble(lengthTextBox->Text));

	mainForm->UpdateData();
	this->Hide();
	mainForm->Show();
}

System::Void EditForm::bttnCancel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	mainForm->Show();
}