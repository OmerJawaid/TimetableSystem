	#pragma once
	#include "../mainDLL/MainLibrary.h"
#include <msclr\marshal_cppstd.h>
#include<vector>
#include<string>

	namespace TimetableSystem {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace System::Collections::Generic;

		/// <summary>
		/// Summary for Add
		/// </summary>
		
		public ref class Add : public System::Windows::Forms::Form
		{
		public:
			
			Add(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
				/*students = gcnew List<Student^>();*/
				/*courseList = gcnew List<Course^>();*/
			
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Add()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::ListBox^ listBox1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::ListBox^ listBox2;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::ListBox^ listBox3;
		private: System::Windows::Forms::ListBox^ listBox4;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;




		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::TextBox^ textBox2;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::ListBox^ listBox5;
		private: System::Windows::Forms::ComboBox^ comboBox2;
		private: System::Windows::Forms::Button^ button6;
		protected:

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
				this->listBox1 = (gcnew System::Windows::Forms::ListBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->listBox2 = (gcnew System::Windows::Forms::ListBox());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->listBox3 = (gcnew System::Windows::Forms::ListBox());
				this->listBox4 = (gcnew System::Windows::Forms::ListBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->listBox5 = (gcnew System::Windows::Forms::ListBox());
				this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// listBox1
				// 
				this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->listBox1->FormattingEnabled = true;
				this->listBox1->Location = System::Drawing::Point(-6, -10);
				this->listBox1->Name = L"listBox1";
				this->listBox1->Size = System::Drawing::Size(786, 82);
				this->listBox1->TabIndex = 1;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::White;
				this->label1->Location = System::Drawing::Point(355, 24);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(60, 25);
				this->label1->TabIndex = 2;
				this->label1->Text = L"Add ";
				// 
				// listBox2
				// 
				this->listBox2->ForeColor = System::Drawing::Color::White;
				this->listBox2->FormattingEnabled = true;
				this->listBox2->Location = System::Drawing::Point(-6, 68);
				this->listBox2->Name = L"listBox2";
				this->listBox2->Size = System::Drawing::Size(150, 420);
				this->listBox2->TabIndex = 3;
				// 
				// button1
				// 
				this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button1->ForeColor = System::Drawing::Color::White;
				this->button1->Location = System::Drawing::Point(12, 128);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(118, 39);
				this->button1->TabIndex = 4;
				this->button1->Text = L"Student";
				this->button1->UseVisualStyleBackColor = false;
				this->button1->Click += gcnew System::EventHandler(this, &Add::button1_Click);
				// 
				// button2
				// 
				this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button2->ForeColor = System::Drawing::Color::White;
				this->button2->Location = System::Drawing::Point(12, 196);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(118, 39);
				this->button2->TabIndex = 5;
				this->button2->Text = L"Teacher";
				this->button2->UseVisualStyleBackColor = false;
				this->button2->Click += gcnew System::EventHandler(this, &Add::button2_Click);
				// 
				// button3
				// 
				this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button3->ForeColor = System::Drawing::Color::White;
				this->button3->Location = System::Drawing::Point(12, 262);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(118, 39);
				this->button3->TabIndex = 6;
				this->button3->Text = L"Course";
				this->button3->UseVisualStyleBackColor = false;
				this->button3->Click += gcnew System::EventHandler(this, &Add::button3_Click);
				// 
				// button4
				// 
				this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button4->ForeColor = System::Drawing::Color::White;
				this->button4->Location = System::Drawing::Point(12, 329);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(118, 39);
				this->button4->TabIndex = 7;
				this->button4->Text = L"Section";
				this->button4->UseVisualStyleBackColor = false;
				this->button4->Click += gcnew System::EventHandler(this, &Add::button4_Click);
				// 
				// button5
				// 
				this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button5->ForeColor = System::Drawing::Color::White;
				this->button5->Location = System::Drawing::Point(12, 394);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(118, 39);
				this->button5->TabIndex = 8;
				this->button5->Text = L"Room";
				this->button5->UseVisualStyleBackColor = false;
				this->button5->Click += gcnew System::EventHandler(this, &Add::button5_Click);
				// 
				// listBox3
				// 
				this->listBox3->ForeColor = System::Drawing::Color::White;
				this->listBox3->FormattingEnabled = true;
				this->listBox3->Location = System::Drawing::Point(645, 24);
				this->listBox3->Name = L"listBox3";
				this->listBox3->Size = System::Drawing::Size(120, 4);
				this->listBox3->TabIndex = 9;
				// 
				// listBox4
				// 
				this->listBox4->ForeColor = System::Drawing::Color::White;
				this->listBox4->FormattingEnabled = true;
				this->listBox4->Location = System::Drawing::Point(668, 45);
				this->listBox4->Name = L"listBox4";
				this->listBox4->Size = System::Drawing::Size(97, 4);
				this->listBox4->TabIndex = 10;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::Color::White;
				this->label2->Location = System::Drawing::Point(55, 20);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(27, 29);
				this->label2->TabIndex = 11;
				this->label2->Text = L"2";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::White;
				this->label3->Location = System::Drawing::Point(408, 100);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(93, 25);
				this->label3->TabIndex = 12;
				this->label3->Text = L"Student";
				// 
				// comboBox1
				// 
				this->comboBox1->FormattingEnabled = true;
				this->comboBox1->Location = System::Drawing::Point(509, 304);
				this->comboBox1->Name = L"comboBox1";
				this->comboBox1->Size = System::Drawing::Size(209, 21);
				this->comboBox1->TabIndex = 17;
				this->comboBox1->Text = L" ";
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(214, 228);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(201, 20);
				this->textBox1->TabIndex = 18;
				this->textBox1->TextChanged += gcnew System::EventHandler(this, &Add::textBox1_TextChanged);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::Color::White;
				this->label4->Location = System::Drawing::Point(222, 209);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(48, 16);
				this->label4->TabIndex = 19;
				this->label4->Text = L"Name";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::Color::White;
				this->label5->Location = System::Drawing::Point(222, 285);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(80, 16);
				this->label5->TabIndex = 20;
				this->label5->Text = L"Enrollment";
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(214, 304);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(201, 20);
				this->textBox2->TabIndex = 21;
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::White;
				this->label6->Location = System::Drawing::Point(516, 209);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(46, 16);
				this->label6->TabIndex = 22;
				this->label6->Text = L"Email";
				// 
				// textBox3
				// 
				this->textBox3->Location = System::Drawing::Point(509, 228);
				this->textBox3->Name = L"textBox3";
				this->textBox3->Size = System::Drawing::Size(209, 20);
				this->textBox3->TabIndex = 23;
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->ForeColor = System::Drawing::Color::White;
				this->label7->Location = System::Drawing::Point(516, 285);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(59, 16);
				this->label7->TabIndex = 24;
				this->label7->Text = L"Section";
				// 
				// listBox5
				// 
				this->listBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->listBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->listBox5->FormattingEnabled = true;
				this->listBox5->Location = System::Drawing::Point(187, 175);
				this->listBox5->Name = L"listBox5";
				this->listBox5->Size = System::Drawing::Size(552, 212);
				this->listBox5->TabIndex = 25;
				this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Add::listBox5_SelectedIndexChanged);
				// 
				// comboBox2
				// 
				this->comboBox2->FormattingEnabled = true;
				this->comboBox2->Location = System::Drawing::Point(509, 227);
				this->comboBox2->Name = L"comboBox2";
				this->comboBox2->Size = System::Drawing::Size(209, 21);
				this->comboBox2->TabIndex = 26;
				this->comboBox2->Text = L" ";
				// 
				// button6
				// 
				this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button6->ForeColor = System::Drawing::Color::White;
				this->button6->Location = System::Drawing::Point(571, 423);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(168, 39);
				this->button6->TabIndex = 27;
				this->button6->Text = L"Create Student";
				this->button6->UseVisualStyleBackColor = false;
				this->button6->Click += gcnew System::EventHandler(this, &Add::button6_Click);
				// 
				// Add
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(777, 485);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->textBox3);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->comboBox1);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->listBox4);
				this->Controls->Add(this->listBox3);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->listBox2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->listBox1);
				this->Controls->Add(this->comboBox2);
				this->Controls->Add(this->listBox5);
				this->Name = L"Add";
				this->Text = L"Add";
				this->Load += gcnew System::EventHandler(this, &Add::Add_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private: System::Void Add_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Teacher";
		label5->Text = "ID";
		label6->Text = "Email";
		label7->Text= "Course";
		label5->Show();
		label6->Show();
		label7->Show();
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;
		comboBox1->Visible = true;
		comboBox2->Visible = true;
		button6->Text = "Create Teacher";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Course";
		label6->Text = "Room";
		label5->Text = "Course Code";
		label7->Text = "Teacher";
		label5->Visible=true;
		label6->Show();
		label7->Show();
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = false;
		comboBox1->Visible = true;
		comboBox2->Visible = true;
		button6->Text = "Create Course";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Student";
		label5->Text = "Enrollment";
		label6->Text = "Email";
		label7->Text = "Section";
		label6->Show();
		label7->Show();
		label5->Show();
		textBox1->Visible = true;
		textBox3->Visible = true;
		textBox2->Visible = true;
		comboBox1->Visible = true;
		comboBox2->Visible = true;
		button6->Text = "Create Student";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Section";
		label4->Text = "Name";
		label6->Hide();
		label7->Hide();
		label5->Hide();
		textBox2->Visible = false;
		textBox3->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		button6->Text = "Create Section";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Room";
		label4->Text = "Room Number";
		label6->Hide();
		label7->Hide();
		label5->Text= "Capacity";
		label5->Visible = true;
		textBox3->Visible = false;
		textBox2->Visible = true;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		button6->Text= "Create Room";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label3->Text == "Student")
		{

		}
		else if (label3->Text == "Teacher")
		{
		}
		else if (label3->Text == "Course")
		{
			
		}
		else if (label3->Text == "Section")
		{

		}
	else if (label3->Text == "Room")
		{

		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
	
	}

	//namespace hello {
	//	using namespace System;
	//	using namespace System::Collections::Generic;
	//	using namespace System::Runtime::InteropServices;
	//	using namespace msclr::interop;

	//	public ref class ManagedCourse {
	//	private:
	//		Course* nativeCourse; // Pointer to the unmanaged Course object
	//	public:
	//		// Constructor
	//		ManagedCourse(int courseCode, String^ courseName) {
	//			// Convert managed string to unmanaged string
	//			std::string nativeCourseName = msclr::interop::marshal_as<std::string>(courseName);
	//			// Create the unmanaged Course object
	//			nativeCourse = new Course();
	//		}

	//		// Destructor
	//		~ManagedCourse() {
	//			delete nativeCourse; // Clean up the unmanaged Course object
	//		}

	//		// Define any methods or properties you need to access from managed code
	//		// For example:
	//		String^ GetCourseName(){
	//			// Convert unmanaged string to managed string
	//			return gcnew String(nativeCourse->getCourseName().c_str());
	//		}

	//		// Add other methods or properties as needed
	//	};
	/*}*/
