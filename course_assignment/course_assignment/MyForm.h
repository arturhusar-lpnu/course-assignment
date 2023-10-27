#pragma once

namespace courseassignment {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ trainTable;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->trainTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->trainTable->SuspendLayout();
			this->SuspendLayout();
			// 
			// trainTable
			// 
			this->trainTable->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->trainTable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->trainTable->ColumnCount = 7;
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 128)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 108)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->trainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->trainTable->Controls->Add(this->label1, 0, 0);
			this->trainTable->Controls->Add(this->label2, 1, 0);
			this->trainTable->Controls->Add(this->label3, 2, 0);
			this->trainTable->Controls->Add(this->label4, 3, 0);
			this->trainTable->Controls->Add(this->label6, 5, 0);
			this->trainTable->Controls->Add(this->label7, 6, 0);
			this->trainTable->Controls->Add(this->label5, 4, 0);
			this->trainTable->ForeColor = System::Drawing::SystemColors::ControlText;
			this->trainTable->Location = System::Drawing::Point(55, 49);
			this->trainTable->Name = L"trainTable";
			this->trainTable->RowCount = 1;
			this->trainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->trainTable->Size = System::Drawing::Size(673, 60);
			this->trainTable->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(4, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Location = System::Drawing::Point(87, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 58);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Starting station";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Location = System::Drawing::Point(170, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 58);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Final station";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Location = System::Drawing::Point(253, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 58);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Intermediate stations";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Cursor = System::Windows::Forms::Cursors::Default;
			this->label5->Location = System::Drawing::Point(382, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 58);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Departure Time";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Cursor = System::Windows::Forms::Cursors::Default;
			this->label6->Location = System::Drawing::Point(491, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 58);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Arrival Time";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Cursor = System::Windows::Forms::Cursors::Default;
			this->label7->Location = System::Drawing::Point(574, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 58);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Distance";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 502);
			this->Controls->Add(this->trainTable);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->trainTable->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

	public ref class Train
	{
	private:
		String^ number;
		double avgSpeed;
		String^ startingStation;
		String^ destinationStation;
		array<String^>^ intermediateStations;
		String^ departureTime;
		String^ arrivalTime;
		double distance;
	public:
		
		Train(String^ trainNumber, double averageSpeed, String^ start,
			String^ finish, array<String^>^ stations, String^ depTrime, 
			String^ arrvtime, double length)
			: number(trainNumber), avgSpeed(averageSpeed), 
			startingStation(start), destinationStation(finish),
			intermediateStations(stations), departureTime(depTrime), 
			arrivalTime(arrvtime), distance(length) {};
		
		Train() : number(" "), avgSpeed(0.0), startingStation(" "), destinationStation(" "),
			intermediateStations(nullptr), departureTime(" "), arrivalTime(" "), distance(0.0) {};
		Train(const Train^ otherTrain) : number(otherTrain->number), 
			avgSpeed(otherTrain->avgSpeed), 
			startingStation(otherTrain->startingStation),
			destinationStation(otherTrain->destinationStation),
			intermediateStations(otherTrain->intermediateStations),
			departureTime(otherTrain->departureTime), 
			arrivalTime(otherTrain->arrivalTime), 
			distance(otherTrain->distance) {};
		
		
		/*static TextWriter^ operator<<(TextWriter^ writer, const Train^ train)
		{

			return writer;
		}*/
	};
}
