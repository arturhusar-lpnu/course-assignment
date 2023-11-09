#pragma once
#include "CourseForm.h"


namespace courseassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		EditForm(CourseForm^ form)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mainForm = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: 
	System::Windows::Forms::TextBox^ arrvMinutesTextBox;
	System::Windows::Forms::TextBox^ depMinutesTextBox;
	System::Windows::Forms::TextBox^ lengthTextBox;
	System::Windows::Forms::TextBox^ arrvHoursTextBox;
	System::Windows::Forms::TextBox^ depHoursTextBox;
	System::Windows::Forms::TextBox^ interStationsTextBox;
	System::Windows::Forms::TextBox^ destinationTextBox;
	System::Windows::Forms::TextBox^ startingStationTextBox;
	System::Windows::Forms::TextBox^ trainNumberTextBox;
	private: System::Windows::Forms::Label^ lengthLabel;
	private: System::Windows::Forms::Label^ arrivalLabel;
	private: System::Windows::Forms::Label^ departureLabel;
	private: System::Windows::Forms::Label^ interStationsLabel;
	private: System::Windows::Forms::Label^ labelDeparture;
	private: System::Windows::Forms::Label^ startLabel;
	private: System::Windows::Forms::Label^ numberLabel;
	private: System::Windows::Forms::Button^ bttnApply;
	private: System::Windows::Forms::Button^ bttnCancel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		CourseForm^ mainForm = nullptr;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->arrvMinutesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->depMinutesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lengthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arrvHoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->depHoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->interStationsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->destinationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->startingStationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->trainNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lengthLabel = (gcnew System::Windows::Forms::Label());
			this->arrivalLabel = (gcnew System::Windows::Forms::Label());
			this->departureLabel = (gcnew System::Windows::Forms::Label());
			this->interStationsLabel = (gcnew System::Windows::Forms::Label());
			this->labelDeparture = (gcnew System::Windows::Forms::Label());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			this->numberLabel = (gcnew System::Windows::Forms::Label());
			this->bttnApply = (gcnew System::Windows::Forms::Button());
			this->bttnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(276, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 41;
			this->label5->Text = L"km";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(276, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"minutes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(276, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 39;
			this->label2->Text = L"minutes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"hours";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(199, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"hours";
			// 
			// arrvMinutesTextBox
			// 
			this->arrvMinutesTextBox->Location = System::Drawing::Point(238, 220);
			this->arrvMinutesTextBox->Name = L"arrvMinutesTextBox";
			this->arrvMinutesTextBox->Size = System::Drawing::Size(32, 20);
			this->arrvMinutesTextBox->TabIndex = 36;
			// 
			// depMinutesTextBox
			// 
			this->depMinutesTextBox->Location = System::Drawing::Point(238, 190);
			this->depMinutesTextBox->Name = L"depMinutesTextBox";
			this->depMinutesTextBox->Size = System::Drawing::Size(32, 20);
			this->depMinutesTextBox->TabIndex = 35;
			// 
			// lengthTextBox
			// 
			this->lengthTextBox->Location = System::Drawing::Point(162, 246);
			this->lengthTextBox->Name = L"lengthTextBox";
			this->lengthTextBox->Size = System::Drawing::Size(100, 20);
			this->lengthTextBox->TabIndex = 34;
			// 
			// arrvHoursTextBox
			// 
			this->arrvHoursTextBox->Location = System::Drawing::Point(162, 220);
			this->arrvHoursTextBox->Name = L"arrvHoursTextBox";
			this->arrvHoursTextBox->Size = System::Drawing::Size(31, 20);
			this->arrvHoursTextBox->TabIndex = 33;
			// 
			// depHoursTextBox
			// 
			this->depHoursTextBox->Location = System::Drawing::Point(162, 190);
			this->depHoursTextBox->Name = L"depHoursTextBox";
			this->depHoursTextBox->Size = System::Drawing::Size(31, 20);
			this->depHoursTextBox->TabIndex = 32;
			// 
			// interStationsTextBox
			// 
			this->interStationsTextBox->Location = System::Drawing::Point(162, 154);
			this->interStationsTextBox->Name = L"interStationsTextBox";
			this->interStationsTextBox->Size = System::Drawing::Size(100, 20);
			this->interStationsTextBox->TabIndex = 31;
			// 
			// destinationTextBox
			// 
			this->destinationTextBox->Location = System::Drawing::Point(162, 122);
			this->destinationTextBox->Name = L"destinationTextBox";
			this->destinationTextBox->Size = System::Drawing::Size(70, 20);
			this->destinationTextBox->TabIndex = 30;
			// 
			// startingStationTextBox
			// 
			this->startingStationTextBox->Location = System::Drawing::Point(162, 86);
			this->startingStationTextBox->Name = L"startingStationTextBox";
			this->startingStationTextBox->Size = System::Drawing::Size(70, 20);
			this->startingStationTextBox->TabIndex = 29;
			// 
			// trainNumberTextBox
			// 
			this->trainNumberTextBox->Location = System::Drawing::Point(162, 50);
			this->trainNumberTextBox->Name = L"trainNumberTextBox";
			this->trainNumberTextBox->Size = System::Drawing::Size(70, 20);
			this->trainNumberTextBox->TabIndex = 28;
			// 
			// lengthLabel
			// 
			this->lengthLabel->AutoSize = true;
			this->lengthLabel->Location = System::Drawing::Point(39, 246);
			this->lengthLabel->Name = L"lengthLabel";
			this->lengthLabel->Size = System::Drawing::Size(40, 13);
			this->lengthLabel->TabIndex = 27;
			this->lengthLabel->Text = L"Length";
			// 
			// arrivalLabel
			// 
			this->arrivalLabel->AutoSize = true;
			this->arrivalLabel->Location = System::Drawing::Point(39, 220);
			this->arrivalLabel->Name = L"arrivalLabel";
			this->arrivalLabel->Size = System::Drawing::Size(36, 13);
			this->arrivalLabel->TabIndex = 26;
			this->arrivalLabel->Text = L"Arrival";
			// 
			// departureLabel
			// 
			this->departureLabel->AutoSize = true;
			this->departureLabel->Location = System::Drawing::Point(39, 190);
			this->departureLabel->Name = L"departureLabel";
			this->departureLabel->Size = System::Drawing::Size(54, 13);
			this->departureLabel->TabIndex = 25;
			this->departureLabel->Text = L"Departure";
			// 
			// interStationsLabel
			// 
			this->interStationsLabel->AutoSize = true;
			this->interStationsLabel->Location = System::Drawing::Point(39, 154);
			this->interStationsLabel->Name = L"interStationsLabel";
			this->interStationsLabel->Size = System::Drawing::Size(106, 13);
			this->interStationsLabel->TabIndex = 24;
			this->interStationsLabel->Text = L"Intermediate Stations";
			// 
			// labelDeparture
			// 
			this->labelDeparture->AutoSize = true;
			this->labelDeparture->Location = System::Drawing::Point(39, 122);
			this->labelDeparture->Name = L"labelDeparture";
			this->labelDeparture->Size = System::Drawing::Size(60, 13);
			this->labelDeparture->TabIndex = 23;
			this->labelDeparture->Text = L"Destination";
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->Location = System::Drawing::Point(39, 89);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(79, 13);
			this->startLabel->TabIndex = 22;
			this->startLabel->Text = L"Starting Station";
			// 
			// numberLabel
			// 
			this->numberLabel->AutoSize = true;
			this->numberLabel->Location = System::Drawing::Point(39, 53);
			this->numberLabel->Name = L"numberLabel";
			this->numberLabel->Size = System::Drawing::Size(69, 13);
			this->numberLabel->TabIndex = 21;
			this->numberLabel->Text = L"Train number";
			// 
			// bttnApply
			// 
			this->bttnApply->Location = System::Drawing::Point(375, 278);
			this->bttnApply->Name = L"bttnApply";
			this->bttnApply->Size = System::Drawing::Size(75, 23);
			this->bttnApply->TabIndex = 42;
			this->bttnApply->Text = L"Apply";
			this->bttnApply->UseVisualStyleBackColor = true;
			this->bttnApply->Click += gcnew System::EventHandler(this, &EditForm::bttnApply_Click);
			// 
			// bttnCancel
			// 
			this->bttnCancel->Location = System::Drawing::Point(456, 278);
			this->bttnCancel->Name = L"bttnCancel";
			this->bttnCancel->Size = System::Drawing::Size(75, 23);
			this->bttnCancel->TabIndex = 43;
			this->bttnCancel->Text = L"Cancel";
			this->bttnCancel->UseVisualStyleBackColor = true;
			this->bttnCancel->Click += gcnew System::EventHandler(this, &EditForm::bttnCancel_Click);
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 313);
			this->Controls->Add(this->bttnCancel);
			this->Controls->Add(this->bttnApply);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->arrvMinutesTextBox);
			this->Controls->Add(this->depMinutesTextBox);
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
			this->Name = L"EditForm";
			this->Text = L"EditForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnApply_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bttnCancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
