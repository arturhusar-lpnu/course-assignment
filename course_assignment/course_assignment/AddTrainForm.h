#pragma once
#include "CourseForm.h"
extern std::vector<Train*> addedTrains;

namespace courseassignment {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class AddTrainForm : public System::Windows::Forms::Form
	{
	public:
		AddTrainForm(CourseForm^ formInstance)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mainForm = formInstance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddTrainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ numberLabel;
	private: System::Windows::Forms::Label^ startLabel;
	private: System::Windows::Forms::Label^ labelDeparture;
	protected:


	private: System::Windows::Forms::Label^ interStationsLabel;

	private: System::Windows::Forms::Label^ departureLabel;
	private: System::Windows::Forms::Label^ arrivalLabel;
	private: System::Windows::Forms::Label^ lengthLabel;
	private: System::Windows::Forms::TextBox^ trainNumberTextBox;
	private: System::Windows::Forms::TextBox^ startingStationTextBox;
	private: System::Windows::Forms::TextBox^ destinationTextBox;
	private: System::Windows::Forms::TextBox^ interStationsTextBox;
	private: System::Windows::Forms::TextBox^ depHoursTextBox;
	private: System::Windows::Forms::TextBox^ arrvHoursTextBox;
	private: System::Windows::Forms::TextBox^ lengthTextBox;
	private: System::Windows::Forms::Button^ bttnAddTrain;
	private: System::Windows::Forms::Button^ bttnApply;









	private: System::Windows::Forms::TextBox^ depMinutesTextBox;
	private: System::Windows::Forms::TextBox^ arrvMinutesTextBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ bttnCancel;
	private: CourseForm^ mainForm;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numberLabel = (gcnew System::Windows::Forms::Label());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			this->labelDeparture = (gcnew System::Windows::Forms::Label());
			this->interStationsLabel = (gcnew System::Windows::Forms::Label());
			this->departureLabel = (gcnew System::Windows::Forms::Label());
			this->arrivalLabel = (gcnew System::Windows::Forms::Label());
			this->lengthLabel = (gcnew System::Windows::Forms::Label());
			this->trainNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->startingStationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->destinationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->interStationsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->depHoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arrvHoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lengthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bttnAddTrain = (gcnew System::Windows::Forms::Button());
			this->bttnApply = (gcnew System::Windows::Forms::Button());
			this->depMinutesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arrvMinutesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// numberLabel
			// 
			this->numberLabel->AutoSize = true;
			this->numberLabel->Location = System::Drawing::Point(27, 47);
			this->numberLabel->Name = L"numberLabel";
			this->numberLabel->Size = System::Drawing::Size(69, 13);
			this->numberLabel->TabIndex = 0;
			this->numberLabel->Text = L"Train number";
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->Location = System::Drawing::Point(27, 83);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(79, 13);
			this->startLabel->TabIndex = 1;
			this->startLabel->Text = L"Starting Station";
			this->startLabel->Click += gcnew System::EventHandler(this, &AddTrainForm::label1_Click);
			// 
			// labelDeparture
			// 
			this->labelDeparture->AutoSize = true;
			this->labelDeparture->Location = System::Drawing::Point(27, 116);
			this->labelDeparture->Name = L"labelDeparture";
			this->labelDeparture->Size = System::Drawing::Size(60, 13);
			this->labelDeparture->TabIndex = 2;
			this->labelDeparture->Text = L"Destination";
			// 
			// interStationsLabel
			// 
			this->interStationsLabel->AutoSize = true;
			this->interStationsLabel->Location = System::Drawing::Point(27, 148);
			this->interStationsLabel->Name = L"interStationsLabel";
			this->interStationsLabel->Size = System::Drawing::Size(106, 13);
			this->interStationsLabel->TabIndex = 3;
			this->interStationsLabel->Text = L"Intermediate Stations";
			// 
			// departureLabel
			// 
			this->departureLabel->AutoSize = true;
			this->departureLabel->Location = System::Drawing::Point(27, 184);
			this->departureLabel->Name = L"departureLabel";
			this->departureLabel->Size = System::Drawing::Size(54, 13);
			this->departureLabel->TabIndex = 4;
			this->departureLabel->Text = L"Departure";
			// 
			// arrivalLabel
			// 
			this->arrivalLabel->AutoSize = true;
			this->arrivalLabel->Location = System::Drawing::Point(27, 214);
			this->arrivalLabel->Name = L"arrivalLabel";
			this->arrivalLabel->Size = System::Drawing::Size(36, 13);
			this->arrivalLabel->TabIndex = 5;
			this->arrivalLabel->Text = L"Arrival";
			// 
			// lengthLabel
			// 
			this->lengthLabel->AutoSize = true;
			this->lengthLabel->Location = System::Drawing::Point(27, 240);
			this->lengthLabel->Name = L"lengthLabel";
			this->lengthLabel->Size = System::Drawing::Size(40, 13);
			this->lengthLabel->TabIndex = 6;
			this->lengthLabel->Text = L"Length";
			// 
			// trainNumberTextBox
			// 
			this->trainNumberTextBox->Location = System::Drawing::Point(150, 44);
			this->trainNumberTextBox->Name = L"trainNumberTextBox";
			this->trainNumberTextBox->Size = System::Drawing::Size(70, 20);
			this->trainNumberTextBox->TabIndex = 7;
			// 
			// startingStationTextBox
			// 
			this->startingStationTextBox->Location = System::Drawing::Point(150, 80);
			this->startingStationTextBox->Name = L"startingStationTextBox";
			this->startingStationTextBox->Size = System::Drawing::Size(70, 20);
			this->startingStationTextBox->TabIndex = 8;
			// 
			// destinationTextBox
			// 
			this->destinationTextBox->Location = System::Drawing::Point(150, 116);
			this->destinationTextBox->Name = L"destinationTextBox";
			this->destinationTextBox->Size = System::Drawing::Size(70, 20);
			this->destinationTextBox->TabIndex = 9;
			// 
			// interStationsTextBox
			// 
			this->interStationsTextBox->Location = System::Drawing::Point(150, 148);
			this->interStationsTextBox->Name = L"interStationsTextBox";
			this->interStationsTextBox->Size = System::Drawing::Size(100, 20);
			this->interStationsTextBox->TabIndex = 10;
			// 
			// depHoursTextBox
			// 
			this->depHoursTextBox->Location = System::Drawing::Point(150, 184);
			this->depHoursTextBox->Name = L"depHoursTextBox";
			this->depHoursTextBox->Size = System::Drawing::Size(31, 20);
			this->depHoursTextBox->TabIndex = 11;
			// 
			// arrvHoursTextBox
			// 
			this->arrvHoursTextBox->Location = System::Drawing::Point(150, 214);
			this->arrvHoursTextBox->Name = L"arrvHoursTextBox";
			this->arrvHoursTextBox->Size = System::Drawing::Size(31, 20);
			this->arrvHoursTextBox->TabIndex = 12;
			// 
			// lengthTextBox
			// 
			this->lengthTextBox->Location = System::Drawing::Point(150, 240);
			this->lengthTextBox->Name = L"lengthTextBox";
			this->lengthTextBox->Size = System::Drawing::Size(100, 20);
			this->lengthTextBox->TabIndex = 13;
			// 
			// bttnAddTrain
			// 
			this->bttnAddTrain->Location = System::Drawing::Point(309, 375);
			this->bttnAddTrain->Name = L"bttnAddTrain";
			this->bttnAddTrain->Size = System::Drawing::Size(75, 23);
			this->bttnAddTrain->TabIndex = 14;
			this->bttnAddTrain->Text = L"Add";
			this->bttnAddTrain->UseVisualStyleBackColor = true;
			this->bttnAddTrain->Click += gcnew System::EventHandler(this, &AddTrainForm::button1_Click);
			// 
			// bttnApply
			// 
			this->bttnApply->Location = System::Drawing::Point(390, 375);
			this->bttnApply->Name = L"bttnApply";
			this->bttnApply->Size = System::Drawing::Size(75, 23);
			this->bttnApply->TabIndex = 15;
			this->bttnApply->Text = L"Apply";
			this->bttnApply->UseVisualStyleBackColor = true;
			this->bttnApply->Click += gcnew System::EventHandler(this, &AddTrainForm::bttnApply_Click);
			// 
			// depMinutesTextBox
			// 
			this->depMinutesTextBox->Location = System::Drawing::Point(226, 184);
			this->depMinutesTextBox->Name = L"depMinutesTextBox";
			this->depMinutesTextBox->Size = System::Drawing::Size(32, 20);
			this->depMinutesTextBox->TabIndex = 16;
			// 
			// arrvMinutesTextBox
			// 
			this->arrvMinutesTextBox->Location = System::Drawing::Point(226, 214);
			this->arrvMinutesTextBox->Name = L"arrvMinutesTextBox";
			this->arrvMinutesTextBox->Size = System::Drawing::Size(32, 20);
			this->arrvMinutesTextBox->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(187, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"hours";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(264, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"minutes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(187, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"hours";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(264, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"minutes";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(264, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"km";
			// 
			// bttnCancel
			// 
			this->bttnCancel->Location = System::Drawing::Point(471, 375);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(75, 23);
			this->bttnCancel->TabIndex = 21;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = true;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &AddTrainForm::bttnCancel_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 410);
			this->Controls->Add(this->bttnCancel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->arrvMinutesTextBox);
			this->Controls->Add(this->depMinutesTextBox);
			this->Controls->Add(this->bttnApply);
			this->Controls->Add(this->bttnAddTrain);
			this->Controls->Add(this->lengthTextBox);
			this->Controls->Add(this->arrvHoursTextBox);
			this->Controls->Add(this->depHoursTextBox);
			this->Controls->Add(this->interStationsTextBox);
			this->Controls->Add(this->destinationTextBox);
			this->Controls->Add(this->startingStationTextBox);
			this->Controls->Add(this->trainNumberTextBox);
			this->Controls->Add(this->lengthLabel);
			this->Controls->Add(this->arrivalLabel);
			this->Controls->Add(this->departureLabel);
			this->Controls->Add(this->interStationsLabel);
			this->Controls->Add(this->labelDeparture);
			this->Controls->Add(this->startLabel);
			this->Controls->Add(this->numberLabel);
			this->Name = L"AddTrainForm";
			this->Text = L"Add Train";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	String^ number;
	String^ start;
	String^ destination;
	String^ departureTime;
	String^ arrivalTime;
	double length;
	int addedCount = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bttnApply_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
