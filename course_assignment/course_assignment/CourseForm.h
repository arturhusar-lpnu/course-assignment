#pragma once

namespace courseassignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CourseForm
	/// </summary>
	public ref class CourseForm : public System::Windows::Forms::Form
	{
	public:
		CourseForm(void)
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
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CourseForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->homePage = (gcnew System::Windows::Forms::TabPage());
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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->homePage->SuspendLayout();
			this->trainPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->settingPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->homePage);
			this->tabControl1->Controls->Add(this->trainPage);
			this->tabControl1->Controls->Add(this->settingPage);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
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
			this->homePage->Controls->Add(this->dataGridView2);
			this->homePage->ImageKey = L"home.png";
			this->homePage->Location = System::Drawing::Point(4, 39);
			this->homePage->Name = L"homePage";
			this->homePage->Padding = System::Windows::Forms::Padding(3);
			this->homePage->Size = System::Drawing::Size(1123, 531);
			this->homePage->TabIndex = 2;
			this->homePage->Text = L"Home Page";
			this->homePage->UseVisualStyleBackColor = true;
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
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DarkOrchid;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
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
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::DarkOrchid;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::Black;
			this->dataGridView2->Location = System::Drawing::Point(8, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(743, 266);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Number";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Starting station";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Destination station";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Intermediate stations";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Departure Time";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Arrival Time";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Distance";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
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
			this->trainPage->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->settingPage->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};

}
	

