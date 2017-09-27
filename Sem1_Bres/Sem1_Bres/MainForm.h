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
	private: System::Windows::Forms::Button^  selectColorBtn;























	private: System::Windows::Forms::Button^  clearBtn;
	private: System::Windows::Forms::ColorDialog^  colorDialog;




























	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			this->selectColorBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->graphBox->Size = System::Drawing::Size(692, 474);
			this->graphBox->TabIndex = 1;
			this->graphBox->TabStop = false;
			this->graphBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::graphBox_MouseDown);
			this->graphBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::graphBox_MouseUp);
			// 
			// paintLineBtn
			// 
			this->paintLineBtn->Location = System::Drawing::Point(54, 38);
			this->paintLineBtn->Name = L"paintLineBtn";
			this->paintLineBtn->Size = System::Drawing::Size(183, 36);
			this->paintLineBtn->TabIndex = 4;
			this->paintLineBtn->Text = L"Нарисовать отрезок";
			this->paintLineBtn->UseVisualStyleBackColor = true;
			this->paintLineBtn->Click += gcnew System::EventHandler(this, &MainForm::paintLineBtn_Click);
			// 
			// paintCircleBtn
			// 
			this->paintCircleBtn->Location = System::Drawing::Point(54, 80);
			this->paintCircleBtn->Name = L"paintCircleBtn";
			this->paintCircleBtn->Size = System::Drawing::Size(183, 41);
			this->paintCircleBtn->TabIndex = 5;
			this->paintCircleBtn->Text = L"Нарисовать окружность";
			this->paintCircleBtn->UseVisualStyleBackColor = true;
			this->paintCircleBtn->Click += gcnew System::EventHandler(this, &MainForm::paintCircleBtn_Click);
			// 
			// paintEllipseBtn
			// 
			this->paintEllipseBtn->Location = System::Drawing::Point(54, 127);
			this->paintEllipseBtn->Name = L"paintEllipseBtn";
			this->paintEllipseBtn->Size = System::Drawing::Size(183, 40);
			this->paintEllipseBtn->TabIndex = 6;
			this->paintEllipseBtn->Text = L"Нарисовать эллипс";
			this->paintEllipseBtn->UseVisualStyleBackColor = true;
			this->paintEllipseBtn->Click += gcnew System::EventHandler(this, &MainForm::paintEllipseBtn_Click);
			// 
			// selectColorBtn
			// 
			this->selectColorBtn->Location = System::Drawing::Point(54, 193);
			this->selectColorBtn->Name = L"selectColorBtn";
			this->selectColorBtn->Size = System::Drawing::Size(79, 42);
			this->selectColorBtn->TabIndex = 13;
			this->selectColorBtn->Text = L"Выбрать цвет";
			this->selectColorBtn->UseVisualStyleBackColor = true;
			this->selectColorBtn->Click += gcnew System::EventHandler(this, &MainForm::selectColorBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(139, 192);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(98, 43);
			this->clearBtn->TabIndex = 3;
			this->clearBtn->Text = L"Очистить";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainForm::clearBtn_Click);
			// 
			// toolTip
			// 
			this->toolTip->AutoPopDelay = 5000;
			this->toolTip->InitialDelay = 1000;
			this->toolTip->ReshowDelay = 500;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->paintLineBtn);
			this->groupBox1->Controls->Add(this->selectColorBtn);
			this->groupBox1->Controls->Add(this->clearBtn);
			this->groupBox1->Controls->Add(this->paintEllipseBtn);
			this->groupBox1->Controls->Add(this->paintCircleBtn);
			this->groupBox1->Location = System::Drawing::Point(698, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(291, 474);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Инструменты рисования";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 502);
			this->Controls->Add(this->groupBox1);
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
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Color color;
		System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^ e);
		System::Void aboutProgramMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintLineBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintCircleBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintEllipseBtn_Click(System::Object^  sender, System::EventArgs^  e); 
		System::Void selectColorBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void graphBox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void graphBox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void drawLine(int xUp, int yUp);
		System::Void drawCircle(int xUp, int yUp);
		System::Void drawEllipse(int xUp, int yUp);
};
}