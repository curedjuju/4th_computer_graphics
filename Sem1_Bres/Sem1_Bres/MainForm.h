#pragma once

namespace Sem1_Bres {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutProgramMenuItem;
	protected:

	private: System::Windows::Forms::PictureBox^  graphBox;


	private: System::Windows::Forms::Button^  paintLineBtn;
	private: System::Windows::Forms::Button^  paintCircleBtn;
	private: System::Windows::Forms::Button^  paintEllipseBtn;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  lineColorInput;

	private: System::Windows::Forms::Button^  selectLineColorBtn;



	private: System::Windows::Forms::TextBox^  y2Input;

	private: System::Windows::Forms::TextBox^  x2Input;

	private: System::Windows::Forms::TextBox^  y1Input;

	private: System::Windows::Forms::TextBox^  x1Input;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  clearBtn;
	private: System::Windows::Forms::ColorDialog^  colorDialog;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  circleXCenterInput;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  circleRadiusInput;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  circleColorInput;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  circleYCenterInput;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  ellipseXCenterInput;

	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::TextBox^  ellipseColorInput;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  ellipseYCenterInput;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  bInput;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  aInput;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ToolTip^  toolTip;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutProgramMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphBox = (gcnew System::Windows::Forms::PictureBox());
			this->paintLineBtn = (gcnew System::Windows::Forms::Button());
			this->paintCircleBtn = (gcnew System::Windows::Forms::Button());
			this->paintEllipseBtn = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lineColorInput = (gcnew System::Windows::Forms::TextBox());
			this->selectLineColorBtn = (gcnew System::Windows::Forms::Button());
			this->y2Input = (gcnew System::Windows::Forms::TextBox());
			this->x2Input = (gcnew System::Windows::Forms::TextBox());
			this->y1Input = (gcnew System::Windows::Forms::TextBox());
			this->x1Input = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->bInput = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->aInput = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ellipseXCenterInput = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ellipseColorInput = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ellipseYCenterInput = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->circleXCenterInput = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->circleRadiusInput = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->circleColorInput = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->circleYCenterInput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(989, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutProgramMenuItem
			// 
			this->aboutProgramMenuItem->Name = L"aboutProgramMenuItem";
			this->aboutProgramMenuItem->Size = System::Drawing::Size(92, 20);
			this->aboutProgramMenuItem->Text = L"О программе";
			this->aboutProgramMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutProgramMenuItem_Click);
			// 
			// graphBox
			// 
			this->graphBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->graphBox->BackColor = System::Drawing::Color::White;
			this->graphBox->Location = System::Drawing::Point(0, 27);
			this->graphBox->Name = L"graphBox";
			this->graphBox->Size = System::Drawing::Size(613, 474);
			this->graphBox->TabIndex = 1;
			this->graphBox->TabStop = false;
			// 
			// paintLineBtn
			// 
			this->paintLineBtn->Location = System::Drawing::Point(58, 158);
			this->paintLineBtn->Name = L"paintLineBtn";
			this->paintLineBtn->Size = System::Drawing::Size(129, 36);
			this->paintLineBtn->TabIndex = 4;
			this->paintLineBtn->Text = L"Нарисовать отрезок";
			this->paintLineBtn->UseVisualStyleBackColor = true;
			this->paintLineBtn->Click += gcnew System::EventHandler(this, &MainForm::paintLineBtn_Click);
			// 
			// paintCircleBtn
			// 
			this->paintCircleBtn->Location = System::Drawing::Point(54, 154);
			this->paintCircleBtn->Name = L"paintCircleBtn";
			this->paintCircleBtn->Size = System::Drawing::Size(139, 41);
			this->paintCircleBtn->TabIndex = 5;
			this->paintCircleBtn->Text = L"Нарисовать окружность";
			this->paintCircleBtn->UseVisualStyleBackColor = true;
			this->paintCircleBtn->Click += gcnew System::EventHandler(this, &MainForm::paintCircleBtn_Click);
			// 
			// paintEllipseBtn
			// 
			this->paintEllipseBtn->Location = System::Drawing::Point(49, 155);
			this->paintEllipseBtn->Name = L"paintEllipseBtn";
			this->paintEllipseBtn->Size = System::Drawing::Size(140, 40);
			this->paintEllipseBtn->TabIndex = 6;
			this->paintEllipseBtn->Text = L"Нарисовать эллипс";
			this->paintEllipseBtn->UseVisualStyleBackColor = true;
			this->paintEllipseBtn->Click += gcnew System::EventHandler(this, &MainForm::paintEllipseBtn_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(628, 40);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(349, 241);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->lineColorInput);
			this->tabPage1->Controls->Add(this->selectLineColorBtn);
			this->tabPage1->Controls->Add(this->y2Input);
			this->tabPage1->Controls->Add(this->x2Input);
			this->tabPage1->Controls->Add(this->y1Input);
			this->tabPage1->Controls->Add(this->x1Input);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->paintLineBtn);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(341, 215);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Отрезок";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Цвет";
			// 
			// lineColorInput
			// 
			this->lineColorInput->Location = System::Drawing::Point(58, 106);
			this->lineColorInput->Name = L"lineColorInput";
			this->lineColorInput->ReadOnly = true;
			this->lineColorInput->Size = System::Drawing::Size(155, 20);
			this->lineColorInput->TabIndex = 14;
			// 
			// selectLineColorBtn
			// 
			this->selectLineColorBtn->Location = System::Drawing::Point(233, 94);
			this->selectLineColorBtn->Name = L"selectLineColorBtn";
			this->selectLineColorBtn->Size = System::Drawing::Size(79, 42);
			this->selectLineColorBtn->TabIndex = 13;
			this->selectLineColorBtn->Text = L"Выбрать цвет";
			this->selectLineColorBtn->UseVisualStyleBackColor = true;
			this->selectLineColorBtn->Click += gcnew System::EventHandler(this, &MainForm::selectLineColorBtn_Click);
			// 
			// y2Input
			// 
			this->y2Input->Location = System::Drawing::Point(161, 56);
			this->y2Input->Name = L"y2Input";
			this->y2Input->Size = System::Drawing::Size(52, 20);
			this->y2Input->TabIndex = 12;
			// 
			// x2Input
			// 
			this->x2Input->Location = System::Drawing::Point(161, 25);
			this->x2Input->Name = L"x2Input";
			this->x2Input->Size = System::Drawing::Size(52, 20);
			this->x2Input->TabIndex = 11;
			// 
			// y1Input
			// 
			this->y1Input->Location = System::Drawing::Point(58, 56);
			this->y1Input->Name = L"y1Input";
			this->y1Input->Size = System::Drawing::Size(52, 20);
			this->y1Input->TabIndex = 10;
			// 
			// x1Input
			// 
			this->x1Input->Location = System::Drawing::Point(58, 25);
			this->x1Input->Name = L"x1Input";
			this->x1Input->Size = System::Drawing::Size(52, 20);
			this->x1Input->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(137, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"y2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"x2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"y1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"x1";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->bInput);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->aInput);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->ellipseXCenterInput);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->ellipseColorInput);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->ellipseYCenterInput);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->paintEllipseBtn);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(341, 215);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Эллипс";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// bInput
			// 
			this->bInput->Location = System::Drawing::Point(136, 60);
			this->bInput->Name = L"bInput";
			this->bInput->Size = System::Drawing::Size(52, 20);
			this->bInput->TabIndex = 40;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(118, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 39;
			this->label15->Text = L"b";
			// 
			// aInput
			// 
			this->aInput->Location = System::Drawing::Point(49, 60);
			this->aInput->Name = L"aInput";
			this->aInput->Size = System::Drawing::Size(52, 20);
			this->aInput->TabIndex = 38;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(31, 60);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"a";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Цвет";
			// 
			// ellipseXCenterInput
			// 
			this->ellipseXCenterInput->Location = System::Drawing::Point(49, 24);
			this->ellipseXCenterInput->Name = L"ellipseXCenterInput";
			this->ellipseXCenterInput->Size = System::Drawing::Size(52, 20);
			this->ellipseXCenterInput->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(31, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(12, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"x";
			// 
			// ellipseColorInput
			// 
			this->ellipseColorInput->Location = System::Drawing::Point(49, 112);
			this->ellipseColorInput->Name = L"ellipseColorInput";
			this->ellipseColorInput->ReadOnly = true;
			this->ellipseColorInput->Size = System::Drawing::Size(155, 20);
			this->ellipseColorInput->TabIndex = 31;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(224, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 42);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Выбрать цвет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::selectEllipseColorBtn_Click);
			// 
			// ellipseYCenterInput
			// 
			this->ellipseYCenterInput->Location = System::Drawing::Point(136, 24);
			this->ellipseYCenterInput->Name = L"ellipseYCenterInput";
			this->ellipseYCenterInput->Size = System::Drawing::Size(52, 20);
			this->ellipseYCenterInput->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(118, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(12, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"y";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->circleXCenterInput);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->circleRadiusInput);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->circleColorInput);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->circleYCenterInput);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->paintCircleBtn);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(341, 215);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Окружность";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 90);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Цвет";
			// 
			// circleXCenterInput
			// 
			this->circleXCenterInput->Location = System::Drawing::Point(54, 28);
			this->circleXCenterInput->Name = L"circleXCenterInput";
			this->circleXCenterInput->Size = System::Drawing::Size(52, 20);
			this->circleXCenterInput->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"x";
			// 
			// circleRadiusInput
			// 
			this->circleRadiusInput->Location = System::Drawing::Point(229, 28);
			this->circleRadiusInput->Name = L"circleRadiusInput";
			this->circleRadiusInput->Size = System::Drawing::Size(52, 20);
			this->circleRadiusInput->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(211, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"r";
			// 
			// circleColorInput
			// 
			this->circleColorInput->Location = System::Drawing::Point(54, 87);
			this->circleColorInput->Name = L"circleColorInput";
			this->circleColorInput->ReadOnly = true;
			this->circleColorInput->Size = System::Drawing::Size(155, 20);
			this->circleColorInput->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 42);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Выбрать цвет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::selectCircleColorBtn_Click);
			// 
			// circleYCenterInput
			// 
			this->circleYCenterInput->Location = System::Drawing::Point(141, 28);
			this->circleYCenterInput->Name = L"circleYCenterInput";
			this->circleYCenterInput->Size = System::Drawing::Size(52, 20);
			this->circleYCenterInput->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(123, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(12, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"y";
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(719, 314);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(165, 43);
			this->clearBtn->TabIndex = 3;
			this->clearBtn->Text = L"Очистить";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainForm::clearBtn_Click);

			//tool tip
			this->toolTip->AutoPopDelay = 5000;
			this->toolTip->InitialDelay = 1000;
			this->toolTip->ReshowDelay = 500;
			this->toolTip->SetToolTip(this->x1Input, "Координата x начала отрезка");
			this->toolTip->SetToolTip(this->y1Input, "Координата y начала отрезка");
			this->toolTip->SetToolTip(this->x2Input, "Координата x конца отрезка");
			this->toolTip->SetToolTip(this->y2Input, "Координата y конца отрезка");
			this->toolTip->SetToolTip(this->circleXCenterInput, "Координата x центра окружности");
			this->toolTip->SetToolTip(this->circleYCenterInput, "Координата y центра окружности");
			this->toolTip->SetToolTip(this->circleRadiusInput, "Радиус окружности");
			this->toolTip->SetToolTip(this->ellipseXCenterInput, "Координата x центра эллипса");
			this->toolTip->SetToolTip(this->ellipseYCenterInput, "Координата y центра эллипса");
			this->toolTip->SetToolTip(this->aInput, "Малая полуось");
			this->toolTip->SetToolTip(this->bInput, "Большая полуось");
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 502);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->graphBox);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Bresenham - Yarnykh Roman, 2017";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Color lineColor;
		Color circleColor;
		Color ellipseColor;
		System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^ e);
		System::Void aboutProgramMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintLineBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintCircleBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintEllipseBtn_Click(System::Object^  sender, System::EventArgs^  e); 
		System::Void selectLineColorBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void MainForm::selectCircleColorBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm::selectEllipseColorBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}