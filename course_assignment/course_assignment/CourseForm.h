#pragma once
#include "Train.h"
extern std::vector<Train*> trains;

namespace courseassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Globalization;
	using namespace System::Collections::Generic;
	std::string ConvertToString(String^ str);
	//std::tm ConvertTime(String^ str);
	List<String^>^ SplitStations(String^ stations);


	enum TrainData
	{
		Number = 0,
		Starting,
		Destination,
		Intermediate,
		Departure,
		Arrival,
		Distance = 6
	};
	/// <summary>
	/// Summary for CourseForm
	/// </summary>
	public ref class CourseForm : public System::Windows::Forms::Form
	{
	public:
		static CourseForm^ instance;
		CourseForm(void)
		{
			InitializeComponent();
			instance = this;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ trainPage;
	private: System::Windows::Forms::TabPage^ settingPage;
	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ trainNumberColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ startingStationColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destinationStationColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ intermediateStationsColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ departureTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ arrivalTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ distanceColumn;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ numberColumnHeader;
	private: System::Windows::Forms::ColumnHeader^ startStationColumnHeader;
	private: System::Windows::Forms::Button^ SortButton;

	private: System::Windows::Forms::Button^ loadButton;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TabPage^ homePage;









	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	public: System::Windows::Forms::DataGridView^ dataGridViewSource;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::Button^ btnLoad;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::RadioButton^ rbTask1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbTask2;
	private: System::Windows::Forms::RadioButton^ rbTask6;

	private: System::Windows::Forms::RadioButton^ rbTask5;

	private: System::Windows::Forms::RadioButton^ rbTask4;

	private: System::Windows::Forms::RadioButton^ rbTask3;
	private: System::Windows::Forms::Button^ btnRunTask;
	private: System::Windows::Forms::Button^ editTableButton;
	private: System::Windows::Forms::Button^ addButton;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CourseForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->homePage = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewSource = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->editTableButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRunTask = (gcnew System::Windows::Forms::Button());
			this->rbTask6 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTask5 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTask4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTask3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTask2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbTask1 = (gcnew System::Windows::Forms::RadioButton());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->trainPage = (gcnew System::Windows::Forms::TabPage());
			this->SortButton = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->trainNumberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->startingStationColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destinationStationColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->intermediateStationsColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->departureTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arrivalTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->distanceColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->settingPage = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->numberColumnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->startStationColumnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->homePage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->trainPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->settingPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->homePage);
			this->tabControl1->Controls->Add(this->trainPage);
			this->tabControl1->Controls->Add(this->settingPage);
			this->tabControl1->ImageList = this->imageList1;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1131, 574);
			this->tabControl1->TabIndex = 0;
			// 
			// homePage
			// 
			this->homePage->Controls->Add(this->splitContainer1);
			this->homePage->ImageKey = L"home.png";
			this->homePage->Location = System::Drawing::Point(4, 39);
			this->homePage->Name = L"homePage";
			this->homePage->Padding = System::Windows::Forms::Padding(3);
			this->homePage->Size = System::Drawing::Size(1123, 531);
			this->homePage->TabIndex = 2;
			this->homePage->Text = L"Home Page";
			this->homePage->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(3, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Yellow;
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView3);
			this->splitContainer1->Panel1->Controls->Add(this->dataGridViewSource);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::RosyBrown;
			this->splitContainer1->Panel2->Controls->Add(this->editTableButton);
			this->splitContainer1->Panel2->Controls->Add(this->addButton);
			this->splitContainer1->Panel2->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel2->Controls->Add(this->btnClear);
			this->splitContainer1->Panel2->Controls->Add(this->btnSave);
			this->splitContainer1->Panel2->Controls->Add(this->btnLoad);
			this->splitContainer1->Size = System::Drawing::Size(1117, 523);
			this->splitContainer1->SplitterDistance = 875;
			this->splitContainer1->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::DarkOrchid;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14
			});
			this->dataGridView3->EnableHeadersVisualStyles = false;
			this->dataGridView3->GridColor = System::Drawing::Color::Black;
			this->dataGridView3->Location = System::Drawing::Point(5, 263);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(867, 257);
			this->dataGridView3->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Number";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Starting station";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Destination station";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Intermediate stations";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Departure Time";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Arrival Time";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Distance";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// dataGridViewSource
			// 
			this->dataGridViewSource->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewSource->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewSource->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DarkOrchid;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewSource->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewSource->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSource->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dataGridViewSource->EnableHeadersVisualStyles = false;
			this->dataGridViewSource->GridColor = System::Drawing::Color::Black;
			this->dataGridViewSource->Location = System::Drawing::Point(5, 6);
			this->dataGridViewSource->Name = L"dataGridViewSource";
			this->dataGridViewSource->ReadOnly = true;
			this->dataGridViewSource->Size = System::Drawing::Size(867, 251);
			this->dataGridViewSource->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Number";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Starting station";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Destination station";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Intermediate stations";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Departure Time";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Arrival Time";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Distance";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// editTableButton
			// 
			this->editTableButton->Location = System::Drawing::Point(44, 444);
			this->editTableButton->Name = L"editTableButton";
			this->editTableButton->Size = System::Drawing::Size(153, 25);
			this->editTableButton->TabIndex = 9;
			this->editTableButton->Text = L"edit";
			this->editTableButton->UseVisualStyleBackColor = true;
			this->editTableButton->Click += gcnew System::EventHandler(this, &CourseForm::editTableButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(44, 399);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(153, 27);
			this->addButton->TabIndex = 8;
			this->addButton->Text = L"Add new train";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &CourseForm::addButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnRunTask);
			this->groupBox1->Controls->Add(this->rbTask6);
			this->groupBox1->Controls->Add(this->rbTask5);
			this->groupBox1->Controls->Add(this->rbTask4);
			this->groupBox1->Controls->Add(this->rbTask3);
			this->groupBox1->Controls->Add(this->rbTask2);
			this->groupBox1->Controls->Add(this->rbTask1);
			this->groupBox1->Location = System::Drawing::Point(21, 148);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 245);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choose task to run";
			// 
			// btnRunTask
			// 
			this->btnRunTask->Location = System::Drawing::Point(23, 191);
			this->btnRunTask->Name = L"btnRunTask";
			this->btnRunTask->Size = System::Drawing::Size(153, 35);
			this->btnRunTask->TabIndex = 12;
			this->btnRunTask->Text = L"Run selected task";
			this->btnRunTask->UseVisualStyleBackColor = true;
			this->btnRunTask->Click += gcnew System::EventHandler(this, &CourseForm::btnRunTask_Click);
			// 
			// rbTask6
			// 
			this->rbTask6->AutoSize = true;
			this->rbTask6->Location = System::Drawing::Point(26, 154);
			this->rbTask6->Name = L"rbTask6";
			this->rbTask6->Size = System::Drawing::Size(58, 17);
			this->rbTask6->TabIndex = 11;
			this->rbTask6->TabStop = true;
			this->rbTask6->Text = L"Task 6";
			this->rbTask6->UseVisualStyleBackColor = true;
			// 
			// rbTask5
			// 
			this->rbTask5->AutoSize = true;
			this->rbTask5->Location = System::Drawing::Point(26, 131);
			this->rbTask5->Name = L"rbTask5";
			this->rbTask5->Size = System::Drawing::Size(58, 17);
			this->rbTask5->TabIndex = 10;
			this->rbTask5->TabStop = true;
			this->rbTask5->Text = L"Task 5";
			this->rbTask5->UseVisualStyleBackColor = true;
			// 
			// rbTask4
			// 
			this->rbTask4->AutoSize = true;
			this->rbTask4->Location = System::Drawing::Point(26, 108);
			this->rbTask4->Name = L"rbTask4";
			this->rbTask4->Size = System::Drawing::Size(58, 17);
			this->rbTask4->TabIndex = 9;
			this->rbTask4->TabStop = true;
			this->rbTask4->Text = L"Task 4";
			this->rbTask4->UseVisualStyleBackColor = true;
			// 
			// rbTask3
			// 
			this->rbTask3->AutoSize = true;
			this->rbTask3->Location = System::Drawing::Point(26, 85);
			this->rbTask3->Name = L"rbTask3";
			this->rbTask3->Size = System::Drawing::Size(58, 17);
			this->rbTask3->TabIndex = 8;
			this->rbTask3->TabStop = true;
			this->rbTask3->Text = L"Task 3";
			this->rbTask3->UseVisualStyleBackColor = true;
			// 
			// rbTask2
			// 
			this->rbTask2->AutoSize = true;
			this->rbTask2->Location = System::Drawing::Point(26, 62);
			this->rbTask2->Name = L"rbTask2";
			this->rbTask2->Size = System::Drawing::Size(58, 17);
			this->rbTask2->TabIndex = 7;
			this->rbTask2->TabStop = true;
			this->rbTask2->Text = L"Task 2";
			this->rbTask2->UseVisualStyleBackColor = true;
			// 
			// rbTask1
			// 
			this->rbTask1->AutoSize = true;
			this->rbTask1->Location = System::Drawing::Point(26, 39);
			this->rbTask1->Name = L"rbTask1";
			this->rbTask1->Size = System::Drawing::Size(58, 17);
			this->rbTask1->TabIndex = 6;
			this->rbTask1->TabStop = true;
			this->rbTask1->Text = L"Task 1";
			this->rbTask1->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(21, 18);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(88, 42);
			this->btnClear->TabIndex = 5;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &CourseForm::btnClear_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(124, 66);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(88, 36);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &CourseForm::btnSave_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(21, 66);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(88, 36);
			this->btnLoad->TabIndex = 3;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &CourseForm::btnLoad_Click);
			// 
			// trainPage
			// 
			this->trainPage->Controls->Add(this->SortButton);
			this->trainPage->Controls->Add(this->loadButton);
			this->trainPage->Controls->Add(this->dataGridView1);
			this->trainPage->ImageKey = L"t_schedule.png";
			this->trainPage->Location = System::Drawing::Point(4, 39);
			this->trainPage->Name = L"trainPage";
			this->trainPage->Padding = System::Windows::Forms::Padding(3);
			this->trainPage->Size = System::Drawing::Size(1123, 531);
			this->trainPage->TabIndex = 0;
			this->trainPage->Text = L"Schedule";
			this->trainPage->UseVisualStyleBackColor = true;
			// 
			// SortButton
			// 
			this->SortButton->Location = System::Drawing::Point(961, 480);
			this->SortButton->Name = L"SortButton";
			this->SortButton->Size = System::Drawing::Size(75, 23);
			this->SortButton->TabIndex = 2;
			this->SortButton->Text = L"Sort";
			this->SortButton->UseVisualStyleBackColor = true;
			// 
			// loadButton
			// 
			this->loadButton->Location = System::Drawing::Point(1042, 480);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(75, 23);
			this->loadButton->TabIndex = 1;
			this->loadButton->Text = L"Load";
			this->loadButton->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DarkOrchid;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->trainNumberColumn,
					this->startingStationColumn, this->destinationStationColumn, this->intermediateStationsColumn, this->departureTimeColumn, this->arrivalTimeColumn,
					this->distanceColumn
			});
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(743, 266);
			this->dataGridView1->TabIndex = 0;
			// 
			// trainNumberColumn
			// 
			this->trainNumberColumn->HeaderText = L"Number";
			this->trainNumberColumn->Name = L"trainNumberColumn";
			// 
			// startingStationColumn
			// 
			this->startingStationColumn->HeaderText = L"Starting station";
			this->startingStationColumn->Name = L"startingStationColumn";
			// 
			// destinationStationColumn
			// 
			this->destinationStationColumn->HeaderText = L"Destination station";
			this->destinationStationColumn->Name = L"destinationStationColumn";
			// 
			// intermediateStationsColumn
			// 
			this->intermediateStationsColumn->HeaderText = L"Intermediate stations";
			this->intermediateStationsColumn->Name = L"intermediateStationsColumn";
			// 
			// departureTimeColumn
			// 
			this->departureTimeColumn->HeaderText = L"Departure Time";
			this->departureTimeColumn->Name = L"departureTimeColumn";
			// 
			// arrivalTimeColumn
			// 
			this->arrivalTimeColumn->HeaderText = L"Arrival Time";
			this->arrivalTimeColumn->Name = L"arrivalTimeColumn";
			// 
			// distanceColumn
			// 
			this->distanceColumn->HeaderText = L"Distance";
			this->distanceColumn->Name = L"distanceColumn";
			// 
			// settingPage
			// 
			this->settingPage->Controls->Add(this->listView1);
			this->settingPage->ImageKey = L"sett.png";
			this->settingPage->Location = System::Drawing::Point(4, 39);
			this->settingPage->Name = L"settingPage";
			this->settingPage->Padding = System::Windows::Forms::Padding(3);
			this->settingPage->Size = System::Drawing::Size(1123, 531);
			this->settingPage->TabIndex = 1;
			this->settingPage->Text = L"Settings";
			this->settingPage->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->numberColumnHeader,
					this->startStationColumnHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(10, 6);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(760, 147);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// numberColumnHeader
			// 
			this->numberColumnHeader->Text = L"Number";
			// 
			// startStationColumnHeader
			// 
			this->startStationColumnHeader->Text = L"Starting Station";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"home.png");
			this->imageList1->Images->SetKeyName(1, L"sett.png");
			this->imageList1->Images->SetKeyName(2, L"user.png");
			this->imageList1->Images->SetKeyName(3, L"t_schedule.png");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			// 
			// CourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1131, 574);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CourseForm";
			this->Text = L"CourseForm";
			this->tabControl1->ResumeLayout(false);
			this->homePage->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSource))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->trainPage->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->settingPage->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private:
	System::Void btnLoad_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btnRunTask_Click(System::Object^ sender, System::EventArgs^ e); 
	void ReadData();
	System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e);
public: void UpdateData();
private: System::Void editTableButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
