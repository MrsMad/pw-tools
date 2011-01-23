#pragma once

#include "..\COMMON\boutique.h"

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;

/// <summary>
/// Summary for MainWindow
///
/// WARNING: If you change the name of this class, you will need to change the
///          'Resource File Name' property for the managed resource compiler tool
///          associated with all .resx files this class depends on.  Otherwise,
///          the designers will not be able to interact properly with localized
///          resources associated with this form.
/// </summary>
public ref class MainWindow : public System::Windows::Forms::Form
{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			initialize();
			movingIndex = new int;
			this->Icon = (Drawing::Icon^)((gcnew Resources::ResourceManager("sTools.icons", Reflection::Assembly::GetExecutingAssembly()))->GetObject("app"));
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

		private: Boutique^ GSHOP;
		int *movingIndex;
		int max_item_id;
		// Map the shop id of an item to the corresponding index
		SortedList^ item_id_index_map;
		SortedList^ itemDescriptions;
		private: System::Windows::Forms::ComboBox^  comboBox_dbSource;
		private: System::Windows::Forms::TextBox^  textBox_durationC;
		private: System::Windows::Forms::TextBox^  textBox_durationB;
		private: System::Windows::Forms::TextBox^  textBox_durationA;
		private: System::Windows::Forms::ComboBox^  comboBox_status;
		private: System::Windows::Forms::Label^  label14;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_unknown3;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_unknown2;
		private: System::Windows::Forms::GroupBox^  groupBox1;
		private: System::Windows::Forms::Button^  button_save;
		private: System::Windows::Forms::Button^  button_load;
		private: System::Windows::Forms::TextBox^  textBox_file;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_unknown1;
		private: System::Windows::Forms::Label^  label11;
		private: System::Windows::Forms::Label^  label21;
		private: System::Windows::Forms::Label^  label20;
		private: System::Windows::Forms::Label^  label18;
		private: System::Windows::Forms::Label^  label19;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label17;
		private: System::Windows::Forms::TextBox^  textBox_SubCat;
		private: System::Windows::Forms::GroupBox^  groupBox3;
		private: System::Windows::Forms::TextBox^  textBox_Cat;
		private: System::Windows::Forms::ListBox^  listBox_Cats;
		private: System::Windows::Forms::ListBox^  listBox_SubCats;
		private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_SubCat;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
		private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem_moveCat;
		private: System::Windows::Forms::ListBox^  listBox_Items;
		private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_Item;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
		private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
		private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem_moveItem;
		private: System::Windows::Forms::GroupBox^  groupBox2;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_valueC;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_priceC;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_valueB;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_priceB;
		private: System::Windows::Forms::Label^  label10;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_valueA;
		private: System::Windows::Forms::Label^  label9;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_priceA;
		private: System::Windows::Forms::Label^  label8;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_amount;
		private: System::Windows::Forms::Label^  label7;
		private: System::Windows::Forms::ComboBox^  comboBox_surface;
		private: System::Windows::Forms::Button^  button_autoDetect;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown_itemID;
		private: System::Windows::Forms::TextBox^  textBox_name;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::TextBox^  textBox_description;
		private: System::Windows::Forms::PictureBox^  pictureBox_surface;
		private: System::Windows::Forms::TextBox^  textBox_search;
		private: System::Windows::Forms::Button^  button_search;
		private: System::ComponentModel::IContainer^  components;
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
			this->comboBox_dbSource = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_durationC = (gcnew System::Windows::Forms::TextBox());
			this->textBox_durationB = (gcnew System::Windows::Forms::TextBox());
			this->textBox_durationA = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_status = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_unknown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_unknown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_load = (gcnew System::Windows::Forms::Button());
			this->textBox_file = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown_unknown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_SubCat = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Cat = (gcnew System::Windows::Forms::TextBox());
			this->listBox_Cats = (gcnew System::Windows::Forms::ListBox());
			this->listBox_SubCats = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip_SubCat = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem_moveCat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox_Items = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip_Item = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem_moveItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown_valueC = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_priceC = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_valueB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_priceB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_valueA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_priceA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox_surface = (gcnew System::Windows::Forms::ComboBox());
			this->button_autoDetect = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_itemID = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_description = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox_surface = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_search = (gcnew System::Windows::Forms::TextBox());
			this->button_search = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->contextMenuStrip_SubCat->SuspendLayout();
			this->contextMenuStrip_Item->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_amount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_itemID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox_surface))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox_dbSource
			// 
			this->comboBox_dbSource->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_dbSource->FormattingEnabled = true;
			this->comboBox_dbSource->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"pwi", L"my", L"ms", L"ru"});
			this->comboBox_dbSource->Location = System::Drawing::Point(81, 44);
			this->comboBox_dbSource->Name = L"comboBox_dbSource";
			this->comboBox_dbSource->Size = System::Drawing::Size(65, 21);
			this->comboBox_dbSource->TabIndex = 5;
			// 
			// textBox_durationC
			// 
			this->textBox_durationC->Location = System::Drawing::Point(253, 318);
			this->textBox_durationC->Name = L"textBox_durationC";
			this->textBox_durationC->Size = System::Drawing::Size(168, 20);
			this->textBox_durationC->TabIndex = 29;
			this->textBox_durationC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_durationC->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// textBox_durationB
			// 
			this->textBox_durationB->Location = System::Drawing::Point(253, 292);
			this->textBox_durationB->Name = L"textBox_durationB";
			this->textBox_durationB->Size = System::Drawing::Size(168, 20);
			this->textBox_durationB->TabIndex = 25;
			this->textBox_durationB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_durationB->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// textBox_durationA
			// 
			this->textBox_durationA->Location = System::Drawing::Point(253, 266);
			this->textBox_durationA->Name = L"textBox_durationA";
			this->textBox_durationA->Size = System::Drawing::Size(168, 20);
			this->textBox_durationA->TabIndex = 21;
			this->textBox_durationA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_durationA->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// comboBox_status
			// 
			this->comboBox_status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_status->FormattingEnabled = true;
			this->comboBox_status->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"0 - Normal", L"1 - New", L"2 - Hot", L"3 - ", 
				L"4 - Sale"});
			this->comboBox_status->Location = System::Drawing::Point(81, 203);
			this->comboBox_status->Name = L"comboBox_status";
			this->comboBox_status->Size = System::Drawing::Size(80, 21);
			this->comboBox_status->TabIndex = 14;
			this->comboBox_status->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 206);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Status:";
			// 
			// numericUpDown_unknown3
			// 
			this->numericUpDown_unknown3->Location = System::Drawing::Point(253, 379);
			this->numericUpDown_unknown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_unknown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_unknown3->Name = L"numericUpDown_unknown3";
			this->numericUpDown_unknown3->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_unknown3->TabIndex = 33;
			this->numericUpDown_unknown3->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// numericUpDown_unknown2
			// 
			this->numericUpDown_unknown2->Location = System::Drawing::Point(167, 379);
			this->numericUpDown_unknown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_unknown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_unknown2->Name = L"numericUpDown_unknown2";
			this->numericUpDown_unknown2->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_unknown2->TabIndex = 32;
			this->numericUpDown_unknown2->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button_save);
			this->groupBox1->Controls->Add(this->button_load);
			this->groupBox1->Controls->Add(this->textBox_file);
			this->groupBox1->Location = System::Drawing::Point(2, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(788, 45);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"FILE";
			// 
			// button_save
			// 
			this->button_save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_save->Location = System::Drawing::Point(729, 19);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(54, 20);
			this->button_save->TabIndex = 2;
			this->button_save->Text = L"Save";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &MainWindow::click_save);
			// 
			// button_load
			// 
			this->button_load->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_load->Location = System::Drawing::Point(669, 19);
			this->button_load->Name = L"button_load";
			this->button_load->Size = System::Drawing::Size(54, 20);
			this->button_load->TabIndex = 1;
			this->button_load->Text = L"Load...";
			this->button_load->UseVisualStyleBackColor = true;
			this->button_load->Click += gcnew System::EventHandler(this, &MainWindow::click_load);
			// 
			// textBox_file
			// 
			this->textBox_file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_file->Enabled = false;
			this->textBox_file->Location = System::Drawing::Point(6, 19);
			this->textBox_file->Name = L"textBox_file";
			this->textBox_file->Size = System::Drawing::Size(657, 20);
			this->textBox_file->TabIndex = 0;
			// 
			// numericUpDown_unknown1
			// 
			this->numericUpDown_unknown1->Location = System::Drawing::Point(81, 379);
			this->numericUpDown_unknown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_unknown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_unknown1->Name = L"numericUpDown_unknown1";
			this->numericUpDown_unknown1->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_unknown1->TabIndex = 31;
			this->numericUpDown_unknown1->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 383);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Unknowns:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 322);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 13);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Option 3:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 268);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(50, 13);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Option 1:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(157, 19);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(35, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Items:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 294);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"Option 2:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Sub Categories:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Categories:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 48);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Update:";
			// 
			// textBox_SubCat
			// 
			this->textBox_SubCat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox_SubCat->Location = System::Drawing::Point(6, 371);
			this->textBox_SubCat->MaxLength = 12;
			this->textBox_SubCat->Name = L"textBox_SubCat";
			this->textBox_SubCat->Size = System::Drawing::Size(148, 20);
			this->textBox_SubCat->TabIndex = 5;
			this->textBox_SubCat->TextChanged += gcnew System::EventHandler(this, &MainWindow::rename_subcat);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox_SubCat);
			this->groupBox3->Controls->Add(this->textBox_Cat);
			this->groupBox3->Controls->Add(this->listBox_Cats);
			this->groupBox3->Controls->Add(this->listBox_SubCats);
			this->groupBox3->Controls->Add(this->listBox_Items);
			this->groupBox3->Location = System::Drawing::Point(2, 56);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(355, 397);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"LISTS";
			// 
			// textBox_Cat
			// 
			this->textBox_Cat->Location = System::Drawing::Point(6, 175);
			this->textBox_Cat->MaxLength = 12;
			this->textBox_Cat->Name = L"textBox_Cat";
			this->textBox_Cat->Size = System::Drawing::Size(148, 20);
			this->textBox_Cat->TabIndex = 2;
			this->textBox_Cat->TextChanged += gcnew System::EventHandler(this, &MainWindow::rename_cat);
			// 
			// listBox_Cats
			// 
			this->listBox_Cats->FormattingEnabled = true;
			this->listBox_Cats->Location = System::Drawing::Point(6, 35);
			this->listBox_Cats->Name = L"listBox_Cats";
			this->listBox_Cats->Size = System::Drawing::Size(148, 134);
			this->listBox_Cats->TabIndex = 1;
			this->listBox_Cats->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseUp_StopMove);
			this->listBox_Cats->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_cat);
			this->listBox_Cats->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseMove_MoveCat);
			this->listBox_Cats->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseDown_StartMove);
			// 
			// listBox_SubCats
			// 
			this->listBox_SubCats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox_SubCats->ContextMenuStrip = this->contextMenuStrip_SubCat;
			this->listBox_SubCats->FormattingEnabled = true;
			this->listBox_SubCats->Location = System::Drawing::Point(6, 218);
			this->listBox_SubCats->Name = L"listBox_SubCats";
			this->listBox_SubCats->Size = System::Drawing::Size(148, 147);
			this->listBox_SubCats->TabIndex = 4;
			this->listBox_SubCats->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseUp_StopMove);
			this->listBox_SubCats->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_subcat);
			this->listBox_SubCats->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseMove_MoveSubCat);
			this->listBox_SubCats->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseDown_StartMove);
			// 
			// contextMenuStrip_SubCat
			// 
			this->contextMenuStrip_SubCat->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem1, 
				this->toolStripMenuItem2, this->toolStripSeparator1, this->toolStripMenuItem_moveCat});
			this->contextMenuStrip_SubCat->Name = L"contextMenuStrip_SubCat";
			this->contextMenuStrip_SubCat->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->contextMenuStrip_SubCat->ShowImageMargin = false;
			this->contextMenuStrip_SubCat->Size = System::Drawing::Size(91, 76);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem1->Text = L"Add";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::click_addSubCat);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem2->Text = L"Delete";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainWindow::click_deleteSubCat);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(87, 6);
			// 
			// toolStripMenuItem_moveCat
			// 
			this->toolStripMenuItem_moveCat->Name = L"toolStripMenuItem_moveCat";
			this->toolStripMenuItem_moveCat->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem_moveCat->Text = L"Move To";
			// 
			// listBox_Items
			// 
			this->listBox_Items->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox_Items->ContextMenuStrip = this->contextMenuStrip_Item;
			this->listBox_Items->FormattingEnabled = true;
			this->listBox_Items->Location = System::Drawing::Point(160, 35);
			this->listBox_Items->Name = L"listBox_Items";
			this->listBox_Items->Size = System::Drawing::Size(189, 355);
			this->listBox_Items->TabIndex = 7;
			this->listBox_Items->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseUp_StopMove);
			this->listBox_Items->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_item);
			this->listBox_Items->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseMove_MoveItem);
			this->listBox_Items->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::mouseDown_StartMove);
			// 
			// contextMenuStrip_Item
			// 
			this->contextMenuStrip_Item->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem3, 
				this->toolStripMenuItem12, this->toolStripSeparator2, this->toolStripMenuItem_moveItem});
			this->contextMenuStrip_Item->Name = L"contextMenuStrip_Item";
			this->contextMenuStrip_Item->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->contextMenuStrip_Item->ShowImageMargin = false;
			this->contextMenuStrip_Item->Size = System::Drawing::Size(91, 76);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem3->Text = L"Add";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainWindow::click_addItem);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem12->Text = L"Delete";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &MainWindow::click_deleteItem);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(87, 6);
			// 
			// toolStripMenuItem_moveItem
			// 
			this->toolStripMenuItem_moveItem->Name = L"toolStripMenuItem_moveItem";
			this->toolStripMenuItem_moveItem->Size = System::Drawing::Size(90, 22);
			this->toolStripMenuItem_moveItem->Text = L"Move To";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->comboBox_dbSource);
			this->groupBox2->Controls->Add(this->textBox_durationC);
			this->groupBox2->Controls->Add(this->textBox_durationB);
			this->groupBox2->Controls->Add(this->textBox_durationA);
			this->groupBox2->Controls->Add(this->comboBox_status);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->numericUpDown_unknown3);
			this->groupBox2->Controls->Add(this->numericUpDown_unknown2);
			this->groupBox2->Controls->Add(this->numericUpDown_unknown1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->numericUpDown_valueC);
			this->groupBox2->Controls->Add(this->numericUpDown_priceC);
			this->groupBox2->Controls->Add(this->numericUpDown_valueB);
			this->groupBox2->Controls->Add(this->numericUpDown_priceB);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->numericUpDown_valueA);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->numericUpDown_priceA);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->numericUpDown_amount);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->comboBox_surface);
			this->groupBox2->Controls->Add(this->button_autoDetect);
			this->groupBox2->Controls->Add(this->numericUpDown_itemID);
			this->groupBox2->Controls->Add(this->textBox_name);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox_description);
			this->groupBox2->Controls->Add(this->pictureBox_surface);
			this->groupBox2->Location = System::Drawing::Point(363, 56);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 423);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ITEM";
			// 
			// numericUpDown_valueC
			// 
			this->numericUpDown_valueC->Location = System::Drawing::Point(167, 318);
			this->numericUpDown_valueC->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_valueC->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_valueC->Name = L"numericUpDown_valueC";
			this->numericUpDown_valueC->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_valueC->TabIndex = 28;
			this->numericUpDown_valueC->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// numericUpDown_priceC
			// 
			this->numericUpDown_priceC->DecimalPlaces = 2;
			this->numericUpDown_priceC->Location = System::Drawing::Point(81, 318);
			this->numericUpDown_priceC->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 131072});
			this->numericUpDown_priceC->Name = L"numericUpDown_priceC";
			this->numericUpDown_priceC->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_priceC->TabIndex = 27;
			this->numericUpDown_priceC->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// numericUpDown_valueB
			// 
			this->numericUpDown_valueB->Location = System::Drawing::Point(167, 292);
			this->numericUpDown_valueB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_valueB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_valueB->Name = L"numericUpDown_valueB";
			this->numericUpDown_valueB->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_valueB->TabIndex = 24;
			this->numericUpDown_valueB->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// numericUpDown_priceB
			// 
			this->numericUpDown_priceB->DecimalPlaces = 2;
			this->numericUpDown_priceB->Location = System::Drawing::Point(81, 292);
			this->numericUpDown_priceB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 131072});
			this->numericUpDown_priceB->Name = L"numericUpDown_priceB";
			this->numericUpDown_priceB->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_priceB->TabIndex = 23;
			this->numericUpDown_priceB->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(250, 250);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Expire (dd-HH:MM:SS):";
			// 
			// numericUpDown_valueA
			// 
			this->numericUpDown_valueA->Location = System::Drawing::Point(167, 266);
			this->numericUpDown_valueA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->numericUpDown_valueA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->numericUpDown_valueA->Name = L"numericUpDown_valueA";
			this->numericUpDown_valueA->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_valueA->TabIndex = 20;
			this->numericUpDown_valueA->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(164, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Value:";
			// 
			// numericUpDown_priceA
			// 
			this->numericUpDown_priceA->DecimalPlaces = 2;
			this->numericUpDown_priceA->Location = System::Drawing::Point(81, 266);
			this->numericUpDown_priceA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 131072});
			this->numericUpDown_priceA->Name = L"numericUpDown_priceA";
			this->numericUpDown_priceA->Size = System::Drawing::Size(80, 20);
			this->numericUpDown_priceA->TabIndex = 19;
			this->numericUpDown_priceA->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(78, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Price:";
			// 
			// numericUpDown_amount
			// 
			this->numericUpDown_amount->Location = System::Drawing::Point(220, 19);
			this->numericUpDown_amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->numericUpDown_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown_amount->Name = L"numericUpDown_amount";
			this->numericUpDown_amount->Size = System::Drawing::Size(65, 20);
			this->numericUpDown_amount->TabIndex = 3;
			this->numericUpDown_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown_amount->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(168, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Amount:";
			// 
			// comboBox_surface
			// 
			this->comboBox_surface->FormattingEnabled = true;
			this->comboBox_surface->Location = System::Drawing::Point(81, 155);
			this->comboBox_surface->Name = L"comboBox_surface";
			this->comboBox_surface->Size = System::Drawing::Size(340, 21);
			this->comboBox_surface->TabIndex = 12;
			this->comboBox_surface->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			this->comboBox_surface->TextChanged += gcnew System::EventHandler(this, &MainWindow::load_surface);
			// 
			// button_autoDetect
			// 
			this->button_autoDetect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_autoDetect->ForeColor = System::Drawing::Color::Blue;
			this->button_autoDetect->Location = System::Drawing::Point(152, 44);
			this->button_autoDetect->Name = L"button_autoDetect";
			this->button_autoDetect->Size = System::Drawing::Size(133, 21);
			this->button_autoDetect->TabIndex = 6;
			this->button_autoDetect->Text = L"www.pwdatabase.com";
			this->button_autoDetect->UseVisualStyleBackColor = true;
			this->button_autoDetect->Click += gcnew System::EventHandler(this, &MainWindow::click_autoDetect);
			// 
			// numericUpDown_itemID
			// 
			this->numericUpDown_itemID->Location = System::Drawing::Point(81, 19);
			this->numericUpDown_itemID->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999, 0, 0, 0});
			this->numericUpDown_itemID->Name = L"numericUpDown_itemID";
			this->numericUpDown_itemID->Size = System::Drawing::Size(65, 20);
			this->numericUpDown_itemID->TabIndex = 1;
			this->numericUpDown_itemID->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(81, 71);
			this->textBox_name->MaxLength = 32;
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(204, 20);
			this->textBox_name->TabIndex = 8;
			this->textBox_name->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Item ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Surface:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Description:";
			// 
			// textBox_description
			// 
			this->textBox_description->Location = System::Drawing::Point(81, 97);
			this->textBox_description->MaxLength = 512;
			this->textBox_description->Multiline = true;
			this->textBox_description->Name = L"textBox_description";
			this->textBox_description->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_description->Size = System::Drawing::Size(204, 52);
			this->textBox_description->TabIndex = 10;
			this->textBox_description->Leave += gcnew System::EventHandler(this, &MainWindow::edit_item);
			// 
			// pictureBox_surface
			// 
			this->pictureBox_surface->BackColor = System::Drawing::Color::Gray;
			this->pictureBox_surface->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox_surface->Location = System::Drawing::Point(291, 19);
			this->pictureBox_surface->Name = L"pictureBox_surface";
			this->pictureBox_surface->Size = System::Drawing::Size(130, 130);
			this->pictureBox_surface->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_surface->TabIndex = 6;
			this->pictureBox_surface->TabStop = false;
			// 
			// textBox_search
			// 
			this->textBox_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_search->Location = System::Drawing::Point(2, 459);
			this->textBox_search->Name = L"textBox_search";
			this->textBox_search->Size = System::Drawing::Size(256, 20);
			this->textBox_search->TabIndex = 5;
			this->textBox_search->Text = L"ID or Name";
			this->textBox_search->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_search->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::keyPress_search);
			// 
			// button_search
			// 
			this->button_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_search->Location = System::Drawing::Point(264, 459);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(93, 20);
			this->button_search->TabIndex = 6;
			this->button_search->Text = L"Find Next";
			this->button_search->UseVisualStyleBackColor = true;
			this->button_search->Click += gcnew System::EventHandler(this, &MainWindow::click_search);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 481);
			this->Controls->Add(this->button_search);
			this->Controls->Add(this->textBox_search);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MinimumSize = System::Drawing::Size(800, 508);
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" sGSHOPedit";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_unknown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->contextMenuStrip_SubCat->ResumeLayout(false);
			this->contextMenuStrip_Item->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_valueA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_priceA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_amount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown_itemID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox_surface))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void initialize()
		{
			comboBox_dbSource->SelectedIndex = 0;
			comboBox_surface->Items->Clear();
			array<String^>^ files = Directory::GetFiles(Application::StartupPath + L"\\surfaces\\百宝阁");

			for(int i=0; i<files->Length; i++)
			{
				comboBox_surface->Items->Add(files[i]->Replace(Application::StartupPath + "\\", "")->Replace(".jpg", ".dds"));
			}

			itemDescriptions = gcnew SortedList();

			if(File::Exists(Application::StartupPath + "\\" + "item_ext_desc.txt"))
			{
				StreamReader^ sr = gcnew StreamReader(Application::StartupPath + "\\" + "item_ext_desc.txt", System::Text::Encoding::GetEncoding("Unicode"));
				String^ line;

				while((line = sr->ReadLine()))
				{
					if(line!="" && !line->StartsWith("/") && !line->StartsWith("#"))
					{
						array<String^>^ pair = line->Split(gcnew array<wchar_t>{'"'});
						itemDescriptions->Add(pair[0]->Trim(), pair[1]);
					}
				}

				sr->Close();
			}
		}
		void build_contextMenus()
		{
			toolStripMenuItem_moveCat->DropDownItems->Clear();
			toolStripMenuItem_moveItem->DropDownItems->Clear();
			for(int i=0; i<GSHOP->categories->Length; i++)
			{
				toolStripMenuItem_moveCat->DropDownItems->Add(bytes_to_string(GSHOP->categories[i]->name, "Unicode")->TrimEnd('\0'));
				toolStripMenuItem_moveCat->DropDownItems[i]->Click += gcnew System::EventHandler(this, &MainWindow::move_subcat);
				toolStripMenuItem_moveItem->DropDownItems->Add(bytes_to_string(GSHOP->categories[i]->name, "Unicode")->TrimEnd('\0'));
				for(int n=0; n<GSHOP->categories[i]->sub_cats->Length; n++)
				{
					((ToolStripMenuItem^)toolStripMenuItem_moveItem->DropDownItems[i])->DropDownItems->Add(bytes_to_string(GSHOP->categories[i]->sub_cats[n], "Unicode")->TrimEnd('\0'));
					((ToolStripMenuItem^)toolStripMenuItem_moveItem->DropDownItems[i])->DropDownItems[n]->Click += gcnew System::EventHandler(this, &MainWindow::move_item);
				}
			}
		}
		int string_to_seconds(String^ time)
		{
			try
			{
				array<String^>^ times = time->Split(gcnew array<wchar_t>{'-', ':'});
				return ( (86400*Convert::ToInt32(times[0])) + (3600*Convert::ToInt32(times[1])) + (60*Convert::ToInt32(times[2])) + Convert::ToInt32(times[3]) );
			}
			catch(...)
			{
				return 0;
			}
		}
		String^ seconds_to_string(int time)
		{
			try
			{
				int days = time/86400;
				time = time-(days*86400);
				int hours = time/3600;
				time = time-(hours*3600);
				int minutes = time/60;
				int seconds = time-(minutes*60);

				return (days.ToString("D2") + "-" + hours.ToString("D2") + ":" + minutes.ToString("D2") + ":" + seconds.ToString("D2"));
			}
			catch(...)
			{
				return "0";
			}
		}
		String^ bytes_to_string(array<unsigned char>^ value, String^ code)
		{
			System::Text::Encoding^ enc = System::Text::Encoding::GetEncoding(code);
			return enc->GetString(value);
		}

		array<unsigned char>^ string_to_bytes(String^ value, String^ code, int bytes)
		{
			System::Text::Encoding^ enc = System::Text::Encoding::GetEncoding(code);
			array<unsigned char>^ target = gcnew array<unsigned char>(bytes);
			array<unsigned char>^ source = enc->GetBytes(value);
			if(target->Length > source->Length)
			{
				Array::Copy(source, target, source->Length);
			}
			else
			{
				Array::Copy(source, target, target->Length);
			}
			return target;
		}

		private: System::Void click_load(System::Object^  sender, System::EventArgs^  e)
		{
			OpenFileDialog^ load = gcnew OpenFileDialog();
			load->Filter = "Gshop (*.data)|*.data|All Files (*.*)|*.*";
			if(load->ShowDialog() == Windows::Forms::DialogResult::OK && File::Exists(load->FileName))
			{
				try
				{
					Cursor = Windows::Forms::Cursors::WaitCursor;
					textBox_file->Text = load->FileName;
					listBox_Cats->Items->Clear();
					listBox_SubCats->Items->Clear();
					listBox_Items->Items->Clear();

					GSHOP = gcnew Boutique();
					item_id_index_map = gcnew SortedList();
					max_item_id = 0;

					FileStream^ fr = File::OpenRead(load->FileName);
					BinaryReader^ br = gcnew BinaryReader(fr);

					GSHOP->timestamp = br->ReadInt32();
					GSHOP->item_count = br->ReadInt32();
					GSHOP->items = gcnew array<Item^>(GSHOP->item_count);
					for(int i=0; i<GSHOP->items->Length; i++)
					{
						GSHOP->items[i] = gcnew Item();
						GSHOP->items[i]->shop_id = br->ReadInt32();
						GSHOP->items[i]->shop_id = i;
						item_id_index_map->Add(GSHOP->items[i]->shop_id, i);
						GSHOP->items[i]->cat_index = br->ReadInt32();
						GSHOP->items[i]->sub_cat_index = br->ReadInt32();
						GSHOP->items[i]->surface_path = br->ReadBytes(128);
						GSHOP->items[i]->item_id = br->ReadInt32();
						GSHOP->items[i]->item_amount = br->ReadInt32();
						GSHOP->items[i]->price1 = br->ReadInt32();
						GSHOP->items[i]->value1 = br->ReadInt32();
						GSHOP->items[i]->duration1 = br->ReadInt32();
						GSHOP->items[i]->price2 = br->ReadInt32();
						GSHOP->items[i]->value2 = br->ReadInt32();
						GSHOP->items[i]->duration2 = br->ReadInt32();
						GSHOP->items[i]->price3 = br->ReadInt32();
						GSHOP->items[i]->value3 = br->ReadInt32();
						GSHOP->items[i]->duration3 = br->ReadInt32();
						GSHOP->items[i]->unknown1 = br->ReadInt32();
						GSHOP->items[i]->unknown2 = br->ReadInt32();
						GSHOP->items[i]->unknown3 = br->ReadInt32();
						GSHOP->items[i]->state = br->ReadInt32();
						if(GSHOP->timestamp == 1284348273)
						{
							br->ReadBytes(76);
						}
						GSHOP->items[i]->description = br->ReadBytes(1024);
						GSHOP->items[i]->name = br->ReadBytes(64);
						if(GSHOP->timestamp == 1284348273)
						{
							br->ReadBytes(16);
						}
					}
					max_item_id = GSHOP->items->Length;

					GSHOP->categories = gcnew array<Category^>(8);
					for(int i=0; i<GSHOP->categories->Length; i++)
					{
						GSHOP->categories[i] = gcnew Category();
						GSHOP->categories[i]->name = br->ReadBytes(128);
						GSHOP->categories[i]->sub_cats_count = br->ReadInt32();
						GSHOP->categories[i]->sub_cats = gcnew array<array<unsigned char>^>(GSHOP->categories[i]->sub_cats_count);
						for(int n=0; n<GSHOP->categories[i]->sub_cats->Length; n++)
						{
							GSHOP->categories[i]->sub_cats[n] = br->ReadBytes(128);
						}
						listBox_Cats->Items->Add(bytes_to_string(GSHOP->categories[i]->name, "Unicode"));
					}

					if(GSHOP->timestamp == 1284348273)
					{
						GSHOP->timestamp = 985174834;
					}

					br->Close();
					fr->Close();

					build_contextMenus();

					Cursor = Windows::Forms::Cursors::Default;
				}
				catch(Exception^ e)
				{
					Cursor = Windows::Forms::Cursors::Default;
					MessageBox::Show("IMPORT ERROR!\n\n" + e->Message);
				}
			}
		}

		private: System::Void click_save(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && File::Exists(textBox_file->Text))
			{
				try
				{
					Cursor = Windows::Forms::Cursors::WaitCursor;

					FileStream^ fw = gcnew FileStream(textBox_file->Text, FileMode::Create, FileAccess::Write);
					BinaryWriter^ bw = gcnew BinaryWriter(fw);

					bw->Write(GSHOP->timestamp);
					bw->Write(GSHOP->item_count);
					int	shop_id = 0;
					for(int i=0; i<GSHOP->items->Length; i++)
					{
						if(GSHOP->items[i]->cat_index>-1 && GSHOP->items[i]->sub_cat_index>-1)
						{
							bw->Write(shop_id);
							bw->Write(GSHOP->items[i]->cat_index);
							bw->Write(GSHOP->items[i]->sub_cat_index);
							bw->Write(GSHOP->items[i]->surface_path);
							bw->Write(GSHOP->items[i]->item_id);
							bw->Write(GSHOP->items[i]->item_amount);
							bw->Write(GSHOP->items[i]->price1);
							bw->Write(GSHOP->items[i]->value1);
							bw->Write(GSHOP->items[i]->duration1);
							bw->Write(GSHOP->items[i]->price2);
							bw->Write(GSHOP->items[i]->value2);
							bw->Write(GSHOP->items[i]->duration2);
							bw->Write(GSHOP->items[i]->price3);
							bw->Write(GSHOP->items[i]->value3);
							bw->Write(GSHOP->items[i]->duration3);
							bw->Write(GSHOP->items[i]->unknown1);
							bw->Write(GSHOP->items[i]->unknown2);
							bw->Write(GSHOP->items[i]->unknown3);
							bw->Write(GSHOP->items[i]->state);
							bw->Write(GSHOP->items[i]->description);
							bw->Write(GSHOP->items[i]->name);

							shop_id++;
						}
					}
/*
if(shop_id != GSHOP->item_count)
{
	MessageBox::Show("shop_id_count != item_count");
}
*/
					for(int i=0;i<8; i++)
					{
						bw->Write(GSHOP->categories[i]->name);
						bw->Write(GSHOP->categories[i]->sub_cats->Length);
/*
if(GSHOP->categories[i]->sub_cats->Length != GSHOP->categories[i]->sub_cats_count)
{
	MessageBox::Show("sub_cat_count != sub_cats->Length");
}
*/
						for(int n=0; n<GSHOP->categories[i]->sub_cats->Length; n++)
						{
							bw->Write(GSHOP->categories[i]->sub_cats[n]);
						}
					}

					bw->Close();
					fw->Close();;

					Cursor = Windows::Forms::Cursors::Default;
				}
				catch(Exception^ e)
				{
					Cursor = Windows::Forms::Cursors::Default;
					MessageBox::Show("EXPORT ERROR!\n\n" + e->Message);
				}
			}
		}

		private: System::Void change_cat(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1)
			{
				if(listBox_Cats->SelectedItem->ToString() != textBox_Cat->Text)
				{
					textBox_Cat->Text = bytes_to_string(GSHOP->categories[listBox_Cats->SelectedIndex]->name, "Unicode");
				}
				listBox_SubCats->Items->Clear();
				listBox_Items->Items->Clear();
				for(int i=0; i<GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats->Length; i++)
				{
					listBox_SubCats->Items->Add(bytes_to_string(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[i], "Unicode"));
				}
			}
		}
		private: System::Void change_subcat(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1 && listBox_SubCats->SelectedIndex>-1)
			{
				if(listBox_SubCats->SelectedItem->ToString() != textBox_SubCat->Text)
				{
					textBox_SubCat->Text = bytes_to_string(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[listBox_SubCats->SelectedIndex], "Unicode");
				}
				listBox_Items->Items->Clear();
				for(int i=0; i<GSHOP->items->Length; i++)
				{
					if(GSHOP->items[i]->cat_index == listBox_Cats->SelectedIndex && GSHOP->items[i]->sub_cat_index == listBox_SubCats->SelectedIndex)
					{
						listBox_Items->Items->Add("[" + GSHOP->items[i]->shop_id + "] " + bytes_to_string(GSHOP->items[i]->name, "Unicode"));
					}
				}
			}
		}

		private: System::Void change_item(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Items->SelectedIndex>-1)
			{
				int id = Convert::ToInt32(listBox_Items->SelectedItem->ToString()->Substring(1, listBox_Items->SelectedItem->ToString()->IndexOf("]")-1));
				int current_item_index = (int)item_id_index_map[id];

				if(current_item_index>-1)
				{
					numericUpDown_itemID->Value = GSHOP->items[current_item_index]->item_id;
					numericUpDown_amount->Value = GSHOP->items[current_item_index]->item_amount;
					textBox_name->Text =  bytes_to_string(GSHOP->items[current_item_index]->name, "Unicode");
					comboBox_surface->Text = bytes_to_string(GSHOP->items[current_item_index]->surface_path, "GBK");
					textBox_description->Text = bytes_to_string(GSHOP->items[current_item_index]->description, "Unicode");

					comboBox_status->SelectedIndex = GSHOP->items[current_item_index]->state;

					numericUpDown_priceA->Value = Convert::ToDecimal(GSHOP->items[current_item_index]->price1)/100;
					numericUpDown_valueA->Value = GSHOP->items[current_item_index]->value1;
					textBox_durationA->Text = seconds_to_string(GSHOP->items[current_item_index]->duration1);

					numericUpDown_priceB->Value = Convert::ToDecimal(GSHOP->items[current_item_index]->price2)/100;
					numericUpDown_valueB->Value = GSHOP->items[current_item_index]->value2;
					textBox_durationB->Text = seconds_to_string(GSHOP->items[current_item_index]->duration2);

					numericUpDown_priceC->Value = Convert::ToDecimal(GSHOP->items[current_item_index]->price3)/100;
					numericUpDown_valueC->Value = GSHOP->items[current_item_index]->value3;
					textBox_durationC->Text = seconds_to_string(GSHOP->items[current_item_index]->duration3);

					numericUpDown_unknown1->Value = GSHOP->items[current_item_index]->unknown1;
					numericUpDown_unknown2->Value = GSHOP->items[current_item_index]->unknown2;
					numericUpDown_unknown3->Value = GSHOP->items[current_item_index]->unknown3;
				}
			}
		}
		void mouseDown_StartMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if(e->Button == Windows::Forms::MouseButtons::Left)
			{
				this->Cursor = System::Windows::Forms::Cursors::SizeNS;
				*movingIndex = ((ListBox^)sender)->SelectedIndex;
			}
		}

		void mouseMove_MoveCat(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			 if(e->Button == Windows::Forms::MouseButtons::Left && ((ListBox^)sender)->Items->Count>1 && *movingIndex != ((ListBox^)sender)->SelectedIndex)
			 {
				 // Removing Event Handlers
				 this->listBox_Cats->SelectedIndexChanged -= gcnew System::EventHandler(this, &MainWindow::change_cat);

				 if(Math::Abs(*movingIndex-((ListBox^)sender)->SelectedIndex) == 1)
				 {
					 // Swap categories
					 Category^ movingCat = GSHOP->categories[*movingIndex];
					 GSHOP->categories[*movingIndex] = GSHOP->categories[((ListBox^)sender)->SelectedIndex];
					 GSHOP->categories[((ListBox^)sender)->SelectedIndex] = movingCat;

					 // Swap listbox items
					 Object^ movingListBoxItem = ((ListBox^)sender)->Items[*movingIndex];
					 ((ListBox^)sender)->Items[*movingIndex] = ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex];
					 ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex] = movingListBoxItem;

					 // Change all Items: Cat Index from movingIndex to ((ListBox^)sender)->SelectedIndex
					 for(int i=0; i<GSHOP->items->Length; i++)
					 {
						 if(GSHOP->items[i]->cat_index == *movingIndex)
						 {
							GSHOP->items[i]->cat_index = ((ListBox^)sender)->SelectedIndex;
						 }
						 else
						 {
							 if(GSHOP->items[i]->cat_index == ((ListBox^)sender)->SelectedIndex)
							 {
								GSHOP->items[i]->cat_index = int(*movingIndex);
							 }
						 }
					 }
					 
					 build_contextMenus();
					 
					 *movingIndex = ((ListBox^)sender)->SelectedIndex;					 
				 }
				 // Adding Event Handlers
				 this->listBox_Cats->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_cat);
			}
		}

		void mouseMove_MoveSubCat(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			 if(e->Button == Windows::Forms::MouseButtons::Left && ((ListBox^)sender)->Items->Count>1 && *movingIndex != ((ListBox^)sender)->SelectedIndex)
			 {
				 // Removing Event Handlers
				 this->listBox_SubCats->SelectedIndexChanged -= gcnew System::EventHandler(this, &MainWindow::change_subcat);

				 if(Math::Abs(*movingIndex-((ListBox^)sender)->SelectedIndex) == 1)
				 {
					 // Swap categories
					 array<unsigned char>^ movingSubCat = GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[*movingIndex];
					 GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[*movingIndex] = GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[((ListBox^)sender)->SelectedIndex];
					 GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[((ListBox^)sender)->SelectedIndex] = movingSubCat;

					 // Swap listbox items
					 Object^ movingListBoxItem = ((ListBox^)sender)->Items[*movingIndex];
					 ((ListBox^)sender)->Items[*movingIndex] = ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex];
					 ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex] = movingListBoxItem;

					 // Change all Items: SubCat Index from movingIndex to ((ListBox^)sender)->SelectedIndex
					 for(int i=0; i<GSHOP->items->Length; i++)
					 {
						 if(GSHOP->items[i]->cat_index == listBox_Cats->SelectedIndex)
						 {
							 if(GSHOP->items[i]->sub_cat_index == *movingIndex)
							 {
								GSHOP->items[i]->sub_cat_index = ((ListBox^)sender)->SelectedIndex;
							 }
							 else
							 {
								 if(GSHOP->items[i]->sub_cat_index == ((ListBox^)sender)->SelectedIndex)
								 {
									GSHOP->items[i]->sub_cat_index = int(*movingIndex);
								 }
							 }
						 }
					 }
					 
					 build_contextMenus();
					 
					 *movingIndex = ((ListBox^)sender)->SelectedIndex;					 
				 }
				 // Adding Event Handlers
				 this->listBox_SubCats->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_subcat);
			}
		}

		void mouseMove_MoveItem(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			 if(e->Button == Windows::Forms::MouseButtons::Left && ((ListBox^)sender)->Items->Count>1 && *movingIndex != ((ListBox^)sender)->SelectedIndex)
			 {
				 // Removing Event Handlers
				 this->listBox_Items->SelectedIndexChanged -= gcnew System::EventHandler(this, &MainWindow::change_item);

				 if(Math::Abs(*movingIndex-((ListBox^)sender)->SelectedIndex) == 1)
				 {
					 int source_id, target_id;
					 source_id = Convert::ToInt32(listBox_Items->Items[*movingIndex]->ToString()->Substring(1, listBox_Items->Items[*movingIndex]->ToString()->IndexOf("]")-1));
					 target_id = Convert::ToInt32(listBox_Items->Items[listBox_Items->SelectedIndex]->ToString()->Substring(1, listBox_Items->Items[listBox_Items->SelectedIndex]->ToString()->IndexOf("]")-1));

					 // Swap gshop items and update id_index_map
					 Item^ movingItem = GSHOP->items[(int)item_id_index_map[source_id]];
					 GSHOP->items[(int)item_id_index_map[source_id]] = GSHOP->items[(int)item_id_index_map[target_id]];
					 GSHOP->items[(int)item_id_index_map[target_id]] = movingItem;

					 // Swap id_index_map
					 int movingMap = (int)item_id_index_map[source_id];
					 item_id_index_map[source_id] = item_id_index_map[target_id];
					 item_id_index_map[target_id] =  movingMap;

					 // Swap listbox items
					 Object^ movingListBoxItem = ((ListBox^)sender)->Items[*movingIndex];
					 ((ListBox^)sender)->Items[*movingIndex] = ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex];
					 ((ListBox^)sender)->Items[((ListBox^)sender)->SelectedIndex] = movingListBoxItem;

					 *movingIndex = ((ListBox^)sender)->SelectedIndex;
				 }
				 // Adding Event Handlers
				 this->listBox_Items->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::change_item);
			 }
		}

		void mouseUp_StopMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			this->Cursor = System::Windows::Forms::Cursors::Default;
		}
		private: System::Void move_subcat(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1 && listBox_SubCats->SelectedIndex>-1)
			{
				int source_cat = listBox_Cats->SelectedIndex;
				int source_subCat = listBox_SubCats->SelectedIndex;
				int target_cat = toolStripMenuItem_moveCat->DropDownItems->IndexOf((ToolStripMenuItem^)sender);

				if(GSHOP->categories[target_cat]->sub_cats->Length<8)
				{
					int target_sub_cat = GSHOP->categories[target_cat]->sub_cats_count;

					// create new subCat in target cat
					GSHOP->categories[target_cat]->sub_cats_count++;
					Array::Resize(GSHOP->categories[target_cat]->sub_cats, GSHOP->categories[target_cat]->sub_cats_count);
					GSHOP->categories[target_cat]->sub_cats[GSHOP->categories[target_cat]->sub_cats->Length-1] = GSHOP->categories[source_cat]->sub_cats[source_subCat];

					// move all items to new subCat
					for(int i=0; i<GSHOP->items->Length; i++)
					{
						if(GSHOP->items[i]->cat_index==source_cat && GSHOP->items[i]->sub_cat_index==source_subCat)
						{
							GSHOP->items[i]->cat_index = target_cat;
							GSHOP->items[i]->sub_cat_index = target_sub_cat;
						}
					}

					// delete source subCat
					click_deleteSubCat(nullptr, nullptr);

					build_contextMenus();
				}
				else
				{
					MessageBox::Show("Target already has 8 SubCategories!");
				}
			}
		}
		private: System::Void move_item(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Items->SelectedIndex>-1)
			{
				int id = Convert::ToInt32(listBox_Items->SelectedItem->ToString()->Substring(1, listBox_Items->SelectedItem->ToString()->IndexOf("]")-1));
				int current_item_index = (int)item_id_index_map[id];

				for(int i=0; i<toolStripMenuItem_moveItem->DropDownItems->Count; i++)
				{
					if(((ToolStripMenuItem^)toolStripMenuItem_moveItem->DropDownItems[i])->DropDownItems->Contains((ToolStripMenuItem^)sender))
					{
						GSHOP->items[current_item_index]->cat_index = i;
						GSHOP->items[current_item_index]->sub_cat_index = ((ToolStripMenuItem^)toolStripMenuItem_moveItem->DropDownItems[i])->DropDownItems->IndexOf((ToolStripMenuItem^)((ToolStripMenuItem^)sender));
						break;
					}
				}

				listBox_Items->Items->RemoveAt(listBox_Items->SelectedIndex);
			}

		}

		private: System::Void rename_cat(System::Object^  sender, System::EventArgs^  e)
		{
			if(listBox_Cats->SelectedIndex>-1)
			{
				GSHOP->categories[listBox_Cats->SelectedIndex]->name = string_to_bytes(textBox_Cat->Text, "Unicode", 128);
				listBox_Cats->Items[listBox_Cats->SelectedIndex] = textBox_Cat->Text;

				build_contextMenus();
			}
		}
		private: System::Void rename_subcat(System::Object^  sender, System::EventArgs^  e)
		{
			if(listBox_Cats->SelectedIndex>-1 && listBox_SubCats->SelectedIndex>-1)
			{
				GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[listBox_SubCats->SelectedIndex] = string_to_bytes(textBox_SubCat->Text, "Unicode", 128);
				listBox_SubCats->Items[listBox_SubCats->SelectedIndex] = textBox_SubCat->Text;

				build_contextMenus();
			}
		}
		private: System::Void edit_item(System::Object^  sender, System::EventArgs^  e)
		{
			if(listBox_Items->SelectedIndex>-1)
			{
				int id = Convert::ToInt32(listBox_Items->SelectedItem->ToString()->Substring(1, listBox_Items->SelectedItem->ToString()->IndexOf("]")-1));
				int current_item_index = (int)item_id_index_map[id];

				if((Control^)sender == numericUpDown_itemID)
				{
					GSHOP->items[current_item_index]->item_id = Convert::ToInt32(numericUpDown_itemID->Value);
				}
				if((Control^)sender == numericUpDown_amount)
				{
					GSHOP->items[current_item_index]->item_amount = Convert::ToInt32(numericUpDown_amount->Value);
				}
				if((Control^)sender == textBox_name)
				{
					GSHOP->items[current_item_index]->name = string_to_bytes(textBox_name->Text, "Unicode", 64);
					listBox_Items->Items[listBox_Items->SelectedIndex] = "[" + GSHOP->items[current_item_index]->shop_id + "] " + textBox_name->Text;
				}
				if((Control^)sender == textBox_description)
				{
					GSHOP->items[current_item_index]->description = string_to_bytes(textBox_description->Text, "Unicode", 1024);
				}
				if((Control^)sender == comboBox_surface)
				{
					GSHOP->items[current_item_index]->surface_path = string_to_bytes(comboBox_surface->Text, "GBK", 128);
				}
				if((Control^)sender == comboBox_status)
				{
					GSHOP->items[current_item_index]->state = comboBox_status->SelectedIndex;
				}
				if((Control^)sender == numericUpDown_priceA)
				{
					GSHOP->items[current_item_index]->price1 = Convert::ToInt32(100*numericUpDown_priceA->Value);
				}
				if((Control^)sender == numericUpDown_valueA)
				{
					GSHOP->items[current_item_index]->value1 = Convert::ToInt32(numericUpDown_valueA->Value);
				}
				if((Control^)sender == textBox_durationA)
				{
					GSHOP->items[current_item_index]->duration1 = string_to_seconds(textBox_durationA->Text);
				}
				if((Control^)sender == numericUpDown_priceB)
				{
					GSHOP->items[current_item_index]->price2 = Convert::ToInt32(100*numericUpDown_priceB->Value);
				}
				if((Control^)sender == numericUpDown_valueB)
				{
					GSHOP->items[current_item_index]->value2 = Convert::ToInt32(numericUpDown_valueB->Value);
				}
				if((Control^)sender == textBox_durationB)
				{
					GSHOP->items[current_item_index]->duration2 = string_to_seconds(textBox_durationB->Text);
				}
				if((Control^)sender == numericUpDown_priceC)
				{
					GSHOP->items[current_item_index]->price3 = Convert::ToInt32(100*numericUpDown_priceC->Value);
				}
				if((Control^)sender == numericUpDown_valueC)
				{
					GSHOP->items[current_item_index]->value3 = Convert::ToInt32(numericUpDown_valueC->Value);
				}
				if((Control^)sender == textBox_durationC)
				{
					GSHOP->items[current_item_index]->duration3 = string_to_seconds(textBox_durationC->Text);
				}
				if((Control^)sender == numericUpDown_unknown1)
				{
					GSHOP->items[current_item_index]->unknown1 = Convert::ToInt32(numericUpDown_unknown1->Value);
				}
				if((Control^)sender == numericUpDown_unknown2)
				{
					GSHOP->items[current_item_index]->unknown2 = Convert::ToInt32(numericUpDown_unknown2->Value);
				}
				if((Control^)sender == numericUpDown_unknown3)
				{
					GSHOP->items[current_item_index]->unknown3 = Convert::ToInt32(numericUpDown_unknown3->Value);
				}
			}
		}
		private: System::Void click_autoDetect(System::Object^  sender, System::EventArgs^  e)
		{
			Cursor = Cursors::AppStarting;

			try
			{
				int index;;
				int length;

				HttpWebRequest^ request  = (HttpWebRequest^)WebRequest::Create("http://www.pwdatabase.com/" + comboBox_dbSource->SelectedItem->ToString() + "/items/" + numericUpDown_itemID->Value.ToString());
				request->Proxy = nullptr;
				HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();
				StreamReader^ wr = gcnew StreamReader(response->GetResponseStream());
				String^ content = wr->ReadToEnd();
				wr->Close();

				// Find Item Name
				index = content->IndexOf("<th class=\"itemHeader\"") + 35;
				if(index>34)
				{
					length = content->IndexOf("<a href", index) - index;
					String^ name = content->Substring(index, length);
					// Remove span + color
					if(name->Contains("<"))
					{
						name = name->Substring(name->IndexOf(">")+1);
						name = name->Substring(0, name->IndexOf("</"));
					}
					name = name->Replace("&#9734;", L"★");
					textBox_name->Text = name;
					edit_item(textBox_name, nullptr);
				}

				// Find if Item Contains Shop Info
				index = content->IndexOf("<a href=\"shopitem/", index) + 18;

				if(index>18)
				{
					length = content->IndexOf("\">", index) - index;
					String^ shop_id = content->Substring(index, length);

					// Load Shop Description
					request  = (HttpWebRequest^)WebRequest::Create("http://www.pwdatabase.com/" + comboBox_dbSource->SelectedItem->ToString() + "/shopitem/" + shop_id);
					request->Proxy = nullptr;
					response = (HttpWebResponse^)request->GetResponse();
					wr = gcnew StreamReader(response->GetResponseStream());
					content = wr->ReadToEnd();
					wr->Close();

					index = content->IndexOf("<h3>Description</h3><p>") + 23;
					if(index>22)
					{
						length = content->IndexOf("</p>", index) - index;
						String^ description = content->Substring(index, length);

						description = description->Replace("<span style='color:", "");
						description = description->Replace("#", "^");
						description = description->Replace(";", "");
						description = description->Replace("'>", "");
						description = description->Replace("<br />", "\\r");
						description = description->Replace("<br/>", "\\r");
						description = description->Replace("<br>", "\\r");
						description = description->Replace("</span>", "");
						description = description->Replace("\\r", " \\r");

						textBox_description->Text = description;
					}
				}
				else
				{
					String^ description = (String^)itemDescriptions[numericUpDown_itemID->Value.ToString()];
					if(description)
					{
						description = description->Replace("\\r", " \\r");
						textBox_description->Text = description;
					}
				}
				edit_item(textBox_description, nullptr);
			}
			catch(...)
			{
				MessageBox::Show("Connection Failed!");
			}

			Cursor = Cursors::Default;
		}
		private: System::Void click_addSubCat(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1)
			{
				if(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats->Length<8)
				{
					GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats_count++;
					Array::Resize(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats, GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats_count);
					GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats[GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats->Length-1] = string_to_bytes("New", "Unicode", 128);
					listBox_SubCats->Items->Add("New");
					listBox_SubCats->SelectedIndex = listBox_SubCats->Items->Count-1;

					build_contextMenus();
				}
				else
				{
					MessageBox::Show("Maximum of 8 reached!");
				}
			}
		}
		private: System::Void click_deleteSubCat(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1 && listBox_SubCats->SelectedIndex>-1)
			{
				GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats_count--;

				array<array<unsigned char>^>^ temp = gcnew array<array<unsigned char>^>(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats_count);
				Array::Copy(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats, 0, temp, 0, listBox_SubCats->SelectedIndex);
				Array::Copy(GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats, listBox_SubCats->SelectedIndex+1, temp, listBox_SubCats->SelectedIndex, GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats_count - listBox_SubCats->SelectedIndex);
				GSHOP->categories[listBox_Cats->SelectedIndex]->sub_cats = temp;

				// remove items / update subcats of all items
				for(int i=0; i<GSHOP->items->Length; i++)
				{
					if(GSHOP->items[i]->cat_index == listBox_Cats->SelectedIndex)
					{
						if(GSHOP->items[i]->sub_cat_index == listBox_SubCats->SelectedIndex)
						{
// mark this item as not to be saved
							GSHOP->item_count--;
							GSHOP->items[i]->cat_index = -1;
							GSHOP->items[i]->sub_cat_index = -1;
							item_id_index_map->Remove(GSHOP->items[i]->shop_id);
						}

						if(GSHOP->items[i]->sub_cat_index > listBox_SubCats->SelectedIndex)
						{
							GSHOP->items[i]->sub_cat_index--;
						}
					}
				}

				listBox_SubCats->Items->RemoveAt(listBox_SubCats->SelectedIndex);
				listBox_Items->Items->Clear();
			}
		}
		private: System::Void click_addItem(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Cats->SelectedIndex>-1 && listBox_SubCats->SelectedIndex>-1)
			{
				GSHOP->item_count++;
				Array::Resize(GSHOP->items, GSHOP->items->Length+1);
				GSHOP->items[GSHOP->items->Length-1] = gcnew Item();
				GSHOP->items[GSHOP->items->Length-1]->shop_id = max_item_id;
				GSHOP->items[GSHOP->items->Length-1]->cat_index = listBox_Cats->SelectedIndex;
				GSHOP->items[GSHOP->items->Length-1]->sub_cat_index = listBox_SubCats->SelectedIndex;
				GSHOP->items[GSHOP->items->Length-1]->surface_path = string_to_bytes("", "GBK", 128);
				GSHOP->items[GSHOP->items->Length-1]->item_id = 1;
				GSHOP->items[GSHOP->items->Length-1]->item_amount = 1;
				GSHOP->items[GSHOP->items->Length-1]->price1 = 1000;
				GSHOP->items[GSHOP->items->Length-1]->value1 = 0;
				GSHOP->items[GSHOP->items->Length-1]->duration1 = 0;
				GSHOP->items[GSHOP->items->Length-1]->price2 = 0;
				GSHOP->items[GSHOP->items->Length-1]->value2 = 0;
				GSHOP->items[GSHOP->items->Length-1]->duration2 = 0;
				GSHOP->items[GSHOP->items->Length-1]->price3 = 0;
				GSHOP->items[GSHOP->items->Length-1]->value3 = 0;
				GSHOP->items[GSHOP->items->Length-1]->duration3 = 0;
				GSHOP->items[GSHOP->items->Length-1]->unknown1 = 0;
				GSHOP->items[GSHOP->items->Length-1]->unknown2 = 0;
				GSHOP->items[GSHOP->items->Length-1]->unknown3 = 0;
				GSHOP->items[GSHOP->items->Length-1]->state = 0;
				GSHOP->items[GSHOP->items->Length-1]->description = string_to_bytes("", "Unicode", 1024);
				GSHOP->items[GSHOP->items->Length-1]->name = string_to_bytes("New", "Unicode", 64);

				item_id_index_map->Add(max_item_id, GSHOP->items->Length-1);

				listBox_Items->Items->Add("[" + max_item_id + "] New");
				listBox_Items->SelectedIndex = listBox_Items->Items->Count-1;

				max_item_id++;
			}
		}
		private: System::Void click_deleteItem(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP && listBox_Items->SelectedIndex>-1)
			{
				int id = Convert::ToInt32(listBox_Items->SelectedItem->ToString()->Substring(1, listBox_Items->SelectedItem->ToString()->IndexOf("]")-1));
				int current_item_index = (int)item_id_index_map[id];

// mark this item as not to be saved
				GSHOP->item_count--;
				GSHOP->items[current_item_index]->cat_index = -1;
				GSHOP->items[current_item_index]->sub_cat_index = -1;

				item_id_index_map->Remove(GSHOP->items[current_item_index]->shop_id);
				listBox_Items->Items->RemoveAt(listBox_Items->SelectedIndex);
			}
		}
		private: System::Void load_surface(System::Object^  sender, System::EventArgs^  e)
		{
			String^ surface = Application::StartupPath + "\\" + comboBox_surface->Text->Replace(".dds", ".jpg");
			String^ path = surface->Substring(0, surface->LastIndexOf("\\"));
			String^ file = surface->Substring(surface->LastIndexOf("\\")+1);
			if(path->IndexOfAny(Path::GetInvalidPathChars())<0 && file->IndexOfAny(Path::GetInvalidFileNameChars())<0 && File::Exists(surface))
			{
				pictureBox_surface->Image = Bitmap::FromFile(surface);
			}
			else
			{
				pictureBox_surface->Image = gcnew Bitmap(128, 128);
			}
			GC::Collect();
		 }
		private: System::Void keyPress_search(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		{
			if(e->KeyChar == (wchar_t)Keys::Enter)
			{
				click_search(nullptr, nullptr);
			}
		}
		private: System::Void click_search(System::Object^  sender, System::EventArgs^  e)
		{
			if(GSHOP)
			{
				// Get the index of current selected item
				int current_item_index = 0;
				if(listBox_Items->SelectedIndex>-1)
				{
					int id = Convert::ToInt32(listBox_Items->SelectedItem->ToString()->Substring(1, listBox_Items->SelectedItem->ToString()->IndexOf("]")-1));
					current_item_index = (int)item_id_index_map[id]+1;
				}

				for(int i=current_item_index; i<GSHOP->items->Length; i++)
				{
					if(GSHOP->items[i]->cat_index>-1 && GSHOP->items[i]->sub_cat_index>-1)
					{
						if(textBox_search->Text == GSHOP->items[i]->item_id.ToString() || bytes_to_string(GSHOP->items[i]->name, "Unicode")->Contains(textBox_search->Text))
						{
							listBox_Cats->SelectedIndex = GSHOP->items[i]->cat_index;
							listBox_SubCats->SelectedIndex = GSHOP->items[i]->sub_cat_index;
							listBox_Items->SelectedIndex = listBox_Items->Items->IndexOf("[" + GSHOP->items[i]->shop_id.ToString() + "] " + bytes_to_string(GSHOP->items[i]->name, "Unicode"));
							return;
						}
					}
				}

				MessageBox::Show("Search reached end of List without result");
			}
		}
};