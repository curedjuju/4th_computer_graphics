#pragma once

namespace Sem2_Bezier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
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
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  programToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Button^  clearBtn;
	private: System::Windows::Forms::Button^  dragBtn;

	private: System::Windows::Forms::Button^  drawBtn;
	private: System::Windows::Forms::ColorDialog^  colorDialog;

	private: System::Windows::Forms::Button^  selectColorBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  widthSlider;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->programToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->selectColorBtn = (gcnew System::Windows::Forms::Button());
			this->dragBtn = (gcnew System::Windows::Forms::Button());
			this->drawBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->widthSlider = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->widthSlider))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->programToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(846, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// programToolStripMenuItem
			// 
			this->programToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->programToolStripMenuItem->Name = L"programToolStripMenuItem";
			this->programToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->programToolStripMenuItem->Text = L"Program";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->widthSlider);
			this->groupBox1->Controls->Add(this->selectColorBtn);
			this->groupBox1->Controls->Add(this->dragBtn);
			this->groupBox1->Controls->Add(this->drawBtn);
			this->groupBox1->Controls->Add(this->clearBtn);
			this->groupBox1->Location = System::Drawing::Point(12, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(822, 96);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Params";
			// 
			// selectColorBtn
			// 
			this->selectColorBtn->Location = System::Drawing::Point(23, 33);
			this->selectColorBtn->Name = L"selectColorBtn";
			this->selectColorBtn->Size = System::Drawing::Size(123, 35);
			this->selectColorBtn->TabIndex = 3;
			this->selectColorBtn->Text = L"Select color";
			this->selectColorBtn->UseVisualStyleBackColor = true;
			this->selectColorBtn->Click += gcnew System::EventHandler(this, &MainForm::selectColorBtn_Click);
			// 
			// dragBtn
			// 
			this->dragBtn->Location = System::Drawing::Point(305, 33);
			this->dragBtn->Name = L"dragBtn";
			this->dragBtn->Size = System::Drawing::Size(123, 35);
			this->dragBtn->TabIndex = 2;
			this->dragBtn->Text = L"Drag";
			this->dragBtn->UseVisualStyleBackColor = true;
			this->dragBtn->Click += gcnew System::EventHandler(this, &MainForm::dragBtn_Click);
			// 
			// drawBtn
			// 
			this->drawBtn->Location = System::Drawing::Point(166, 33);
			this->drawBtn->Name = L"drawBtn";
			this->drawBtn->Size = System::Drawing::Size(123, 35);
			this->drawBtn->TabIndex = 1;
			this->drawBtn->Text = L"Draw";
			this->drawBtn->UseVisualStyleBackColor = true;
			this->drawBtn->Click += gcnew System::EventHandler(this, &MainForm::drawBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(443, 33);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(123, 35);
			this->clearBtn->TabIndex = 0;
			this->clearBtn->Text = L"Clear";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainForm::clearBtn_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::Color::White;
			this->pictureBox->Location = System::Drawing::Point(12, 153);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(822, 464);
			this->pictureBox->TabIndex = 2;
			this->pictureBox->TabStop = false;
			this->pictureBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseClick);
			this->pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseDown);
			this->pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseMove);
			this->pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseUp);
			// 
			// widthSlider
			// 
			this->widthSlider->Location = System::Drawing::Point(651, 33);
			this->widthSlider->Minimum = 1;
			this->widthSlider->Name = L"widthSlider";
			this->widthSlider->Size = System::Drawing::Size(153, 45);
			this->widthSlider->TabIndex = 4;
			this->widthSlider->Value = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(610, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Width";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 629);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->widthSlider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: List<Point>^ points = gcnew List<Point>();
	private: Color color;
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pictureBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void drawBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dragBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pictureBox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pictureBox_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pictureBox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void selectColorBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
