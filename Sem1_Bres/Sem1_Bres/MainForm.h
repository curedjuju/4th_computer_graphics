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

	private: System::Windows::Forms::Button^  clearBtn;
	private: System::Windows::Forms::Button^  paintLineBtn;

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
			this->aboutProgramMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphBox = (gcnew System::Windows::Forms::PictureBox());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->paintLineBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(777, 24);
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
			this->graphBox->Location = System::Drawing::Point(0, 27);
			this->graphBox->Name = L"graphBox";
			this->graphBox->Size = System::Drawing::Size(498, 444);
			this->graphBox->TabIndex = 1;
			this->graphBox->TabStop = false;
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(544, 243);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(165, 43);
			this->clearBtn->TabIndex = 3;
			this->clearBtn->Text = L"Очистить";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainForm::clearBtn_Click);
			// 
			// paintLineBtn
			// 
			this->paintLineBtn->Location = System::Drawing::Point(544, 53);
			this->paintLineBtn->Name = L"paintLineBtn";
			this->paintLineBtn->Size = System::Drawing::Size(165, 43);
			this->paintLineBtn->TabIndex = 4;
			this->paintLineBtn->Text = L"Нарисовать отрезок";
			this->paintLineBtn->UseVisualStyleBackColor = true;
			this->paintLineBtn->Click += gcnew System::EventHandler(this, &MainForm::paintLineBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 472);
			this->Controls->Add(this->paintLineBtn);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->graphBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^ e);
		System::Void aboutProgramMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void paintLineBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}