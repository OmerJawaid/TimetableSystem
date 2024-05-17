#pragma once
#include "../mainDLL/MainLibrary.h"
#include"MangedCLass.h"
#include"MoreFunctionallityCourse.h"
#include"MoreFunctionalityStudent.h"
#include<string>
#include<fstream>

//#include<sstream>
//#include <msclr/marshal_cppstd.h>
//#include<msclr/marshal_cppstd.h>
namespace TimetableSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace Runtime::InteropServices;
	using namespace System::IO;

	/// <summary>
	/// Summary for Add
	/// </summary>
	/*public ref class MoreFunctionallityCourse;*/
	public ref class Add : public System::Windows::Forms::Form
	{
		List<CourseM^>^ courses = gcnew List<CourseM^>();
		List<TeacherM^>^ teachers= gcnew List<TeacherM^>();
		List<RoomM^>^ rooms= gcnew List<RoomM^>();
		List<StudentM^>^students = gcnew List<StudentM^>();
		List<SectionM^>^ sections = gcnew List<SectionM^>();
		int courseiterator = 0;
		int teacheriterator = 0;
		int roomiterator = 0;
		int studentiterator = 0;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button8;


	public:
		Form^ obj;
		Add(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*students = gcnew List<Student^>();*/
	/*		courseList = gcnew List<Course^>();*/	
		
		}
		Add(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*students = gcnew List<Student^>();*/
	/*		courseList = gcnew List<Course^>();*/

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
	private: System::Windows::Forms::Button^ button7;

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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
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
			this->label3->Click += gcnew System::EventHandler(this, &Add::label3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(509, 291);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 21);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->Text = L" ";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Add::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 215);
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
			this->label4->Location = System::Drawing::Point(222, 196);
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
			this->label5->Location = System::Drawing::Point(222, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Enrollment";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(214, 292);
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
			this->label6->Location = System::Drawing::Point(516, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Email";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(509, 215);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 20);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Add::textBox3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(516, 273);
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
			this->listBox5->Location = System::Drawing::Point(187, 162);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(552, 225);
			this->listBox5->TabIndex = 25;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Add::listBox5_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(509, 215);
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
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(186, 421);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 42);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Add::button7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(509, 291);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(209, 21);
			this->comboBox3->TabIndex = 29;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(587, 341);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(131, 27);
			this->button8->TabIndex = 30;
			this->button8->Text = L"More";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Add::button8_Click);
			// 
			// Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 485);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button7);
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
	label4->Text = "Name";
	label5->Text = "ID";
	label6->Text = "Email";
	label7->Text = "";
	label5->Show();
	label6->Show();
	label7->Show();
	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	comboBox1->Visible = false;
	comboBox2->Visible = true;
	comboBox3->Visible = false;
	button6->Text = "Create Teacher";
	button8->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	AddforComboboxRoom(comboBox2);
	AddforComboboxTeacher(comboBox3);
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
	comboBox1->Visible = false;
	comboBox2->Visible = true;
	comboBox3->Visible = true;
	button6->Text = "Create Course";
	button8->Visible = true;
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
	comboBox3->Visible = false;
	button6->Text = "Create Student";
	button8->Visible = true;
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
	comboBox3->Visible = false;
	button6->Text = "Create Section";
	button8->Visible = false;
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
	comboBox3->Visible = false;
	button6->Text= "Create Room";
	button8->Visible = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	SqlConnection^ con = gcnew SqlConnection("Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=\"Timetable System\";Integrated Security=True");
	con->Open();
	
	if (label3->Text == "Student")
	{
		try {
			int enrollment = Convert::ToInt32(textBox2->Text);

			IntPtr ptr = Marshal::StringToHGlobalAnsi(textBox1->Text);
			std::string studentname(static_cast<const char*>(ptr.ToPointer()));
			Marshal::FreeHGlobal(ptr);

			ptr = Marshal::StringToHGlobalAnsi(textBox3->Text);
			std::string studentemail(static_cast<const char*>(ptr.ToPointer()));
			Marshal::FreeHGlobal(ptr);

			if (textBox1->Text != "" || textBox3->Text != "") {
				StudentM^ student = gcnew StudentM(enrollment, studentname, studentemail);
				students->Add(student);

				try {
					student->student->AssignSection(sections[studentiterator]->section);
					String^ SectionName =gcnew String(sections[studentiterator]->section->getName().c_str());
					SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Student(StudentName, StudentEmail, StudentEnrollment, SectionName) VALUES (@StudentName, @StudentEmail, @StudentEnrollment, @SectionName)", con);
					cmd->Parameters->AddWithValue("@StudentEnrollment",enrollment);
					cmd->Parameters->AddWithValue("@StudentName", textBox1->Text);
					cmd->Parameters->AddWithValue("@StudentEmail",textBox3->Text);
					cmd->Parameters->AddWithValue("@SectionName",SectionName);
					cmd->ExecuteNonQuery();
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message/*"Section not selected"*/);
				}
			}
			else {
				if (textBox1->Text == "") {
					MessageBox::Show("Name is Empty");
				}
				if (textBox3->Text == "") {
					MessageBox::Show("Email is Empty");
				}
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Enrollment is empty");
		}
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		comboBox1->SelectedItem = "";
	}
	else if (label3->Text == "Teacher")
	{
		if (textBox1->Text != "") {
			IntPtr ptr = Marshal::StringToHGlobalAnsi(textBox1->Text);
			std::string teachername(static_cast<const char*>(ptr.ToPointer()));
			Marshal::FreeHGlobal(ptr);
			try {
				int ID = Convert::ToInt32(textBox2->Text);
				if (textBox3->Text != "")
				{
					ptr = Marshal::StringToHGlobalAnsi(textBox3->Text);
					std::string teacheremail(static_cast<const char*>(ptr.ToPointer()));
					Marshal::FreeHGlobal(ptr);
					TeacherM^ teacher = gcnew TeacherM(teachername, ID, teacheremail);
					teachers->Add(teacher);
					SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Teacher(TeacherName, TeacherEmail, TeacherID) VALUES (@TeacherName, @TeacherEmail, @TeacherID)",con);
					cmd->Parameters->AddWithValue("@TeacherName", textBox1->Text);
					cmd->Parameters->AddWithValue("@TeacherEmail", textBox3->Text);
					cmd->Parameters->AddWithValue("@TeacherID", ID);
					cmd->ExecuteNonQuery();
				}
				else
					MessageBox::Show("Email is empty");
			}
			catch (Exception^ e) {
				MessageBox::Show("ID is empty");
			}
		}
		else
			MessageBox::Show("Teacher Name is Empty");
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	else if (label3->Text == "Course")
	{
		
		IntPtr ptr = Marshal::StringToHGlobalAnsi(textBox1->Text);
		std::string name(static_cast<const char*>(ptr.ToPointer()));
		Marshal::FreeHGlobal(ptr);
		try {
			int coursecode = Convert::ToInt32(textBox2->Text);
			CourseM^ course1 = gcnew CourseM(coursecode, name);
			courses->Add(course1);
			try {
				course1->course->teacherAssignCourse(teachers[courseiterator]->teacher);
				course1->course->setAssignedRoom(rooms[courseiterator]->room);
				String^ TeacherName = gcnew String(teachers[courseiterator]->teacher->getName().c_str());
				String^ RoomNumber = gcnew String(rooms[courseiterator]->room->getRoomNumber().c_str());
				courseiterator++;

				SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Course(Coursename, Coursecode, TeacherID, RoomNum) VALUES(@Coursename, @Coursecode, @TeacherID, @RoomNum)",con);
				cmd->Parameters->AddWithValue("@Coursename", textBox1->Text);
				cmd->Parameters->AddWithValue("@Coursecode", coursecode);
				cmd->Parameters->AddWithValue("@TeacherID", TeacherName );
				cmd->Parameters->AddWithValue("@RoomNum", RoomNumber);
				cmd->ExecuteNonQuery();
			}
			catch (System::Exception^ e) {
				MessageBox::Show("Teacher or Room not assigned to course");
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("Enter Course code");
		}
		
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	else if (label3->Text == "Section")
	{
		try {
			IntPtr ptr = Marshal::StringToHGlobalAnsi(textBox1->Text);
			std::string Sectionname(static_cast<const char*>(ptr.ToPointer()));
			Marshal::FreeHGlobal(ptr);
			SectionM^ section = gcnew SectionM(Sectionname);
			sections->Add(section);
			ADDforComboboxStudent(comboBox1);
			SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO SECTION(SectionName) VALUES (@SectionName)", con);
			cmd->Parameters->AddWithValue("@SectionName", textBox1->Text);
			cmd->ExecuteNonQuery();
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	else if (label3->Text == "Room")
	{
		try {
			if (textBox1->Text != "")
			{
				IntPtr ptr = Marshal::StringToHGlobalAnsi(textBox1->Text);
				std::string Roomnumber(static_cast<const char*>(ptr.ToPointer()));
				Marshal::FreeHGlobal(ptr);

				int capacity = Convert::ToInt64(textBox2->Text);
				RoomM^ room = gcnew RoomM(Roomnumber, capacity);
				rooms->Add(room);
				SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Room(RoomNum, RoomCapacity) VALUES(@RoomNum, @RoomCapacity)",con);
				cmd->Parameters->AddWithValue("@RoomNum", textBox1->Text);
				cmd->Parameters->AddWithValue("@RoomCapacity", capacity);
				cmd->ExecuteNonQuery();
			}
			else
				MessageBox::Show("Roomnumber is empty");
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	con->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   void ADDforComboboxStudent(ComboBox^ comboBox)
	   {
		   array<String^>^ sectionNames = gcnew array<String^>(sections->Count);
		   int index = 0;
		   for each (SectionM ^ section in sections)
		   {
			   String^ sectionname=gcnew System::String(section->section->getName().c_str());
			   sectionNames[index] =sectionname;
			   index++;
		   }
		   //Only Sections
		   comboBox->Items->AddRange(sectionNames);
	   }
	   void AddforComboboxTeacher(ComboBox^ comboBox)
	   {
		   array<String^>^ teacherNames = gcnew array<String^>(teachers->Count);
		   int index = 0;
		   for each (TeacherM ^ teacher in teachers)
		   {
			   String^ teachername = gcnew System::String(teacher->teacher->getName().c_str());
			   teacherNames[index] = teachername;
			   index++;
		   }
		   comboBox->Items->AddRange(teacherNames);
	   }
	   void AddforComboboxRoom(ComboBox^ comboBox)
	   {
		   array<String^>^ RoomNames = gcnew array<String^>(rooms->Count);
		   int index = 0;
		   for each (RoomM ^ room in rooms)
		   {
			   String^ roomname = gcnew System::String(room->room->getRoomNumber().c_str());
			   RoomNames[index] = roomname;
			   index++;
		   }
		   
		   comboBox->Items->AddRange(RoomNames);
	   }
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label3->Text == "Course")
	{
		this->Hide();
		MoreFunctionallityCourse^ CourseFunc;
		CourseFunc = gcnew MoreFunctionallityCourse(students,courses);
		CourseFunc->ShowDialog();
	}
	else if (label3->Text=="Student")
	{
		this->Hide();
		MoreFunctionalityStudent^ StudentFunc=gcnew MoreFunctionalityStudent(students,courses);
		StudentFunc->ShowDialog();
		/*outputfilehandling();*/
	}
}
	   void outputfilehandling()
	   {

		   String^ fileName = "Student.txt";

		   try
		   {
			   StreamWriter^ sw = gcnew StreamWriter(fileName,std::ios::out|std::ios::trunc);
			   sw->WriteLine("Hello, world!");
			   sw->WriteLine("This is a test file.");
			   sw->Close();

			   MessageBox::Show("File 'Student.txt' written successfully.");
		   }
		   catch (Exception^ e)
		   {
			   MessageBox::Show("Error: Unable to write to file 'Student.txt'.");
		   }
	   }
};
}