#pragma once
#include<vector>
#include<string>
#include"../mainDll/MainLibrary.h"
#include"MangedClass.h"
namespace TimetableSystem {

	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;



	extern"C" {
		//__declspec(dllexport) std::vector<std::string> Test();
		//__declspec(dllexport) std::vector<std::string> teacherTimetable();

		/*__declspec(dllexport) std::vector<std::string> studentTimetable();
		__declspec(dllexport) std::vector<std::string> queryTimetable();
		__declspec(dllexport) std::vector<std::string> roomTimetable();*/
	}
	public ref class View : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		View(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(60, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"3";
			// 
			// listBox4
			// 
			this->listBox4->ForeColor = System::Drawing::Color::White;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(673, 55);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(97, 4);
			this->listBox4->TabIndex = 16;
			// 
			// listBox3
			// 
			this->listBox3->ForeColor = System::Drawing::Color::White;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(650, 34);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 4);
			this->listBox3->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(360, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"View";
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
			this->listBox1->Location = System::Drawing::Point(-1, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(795, 82);
			this->listBox1->TabIndex = 12;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &View::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 46);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Teacher wise TimeTable";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &View::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 169);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 46);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Student wise Time Table";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &View::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(12, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 46);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Section wise Time Table";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &View::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(12, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 46);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Room wise TIme Table ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &View::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(37, 368);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 37);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &View::button5_Click_1);
			// 
			// listBox2
			// 
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(-1, 79);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(171, 342);
			this->listBox2->TabIndex = 23;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(240, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 245);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &View::dataGridView1_CellContentClick_1);
			// 
			// View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 417);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->listBox2);
			this->Name = L"View";
			this->Text = L"View";
			this->Load += gcnew System::EventHandler(this, &View::View_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//TimetableM^ timetable = gcnew TimetableM();
		//std::vector<std::string> teacherVector = timetable->timetable->teacherTimetable();

		//// Create a List to store System::String^
		//System::Collections::Generic::List<System::String^>^ teacherList = gcnew System::Collections::Generic::List<System::String^>();

		//// Convert each std::string to System::String^ and add to the list
		//for (const std::string& teacher : teacherVector) {
		//	System::String^ teacherString = gcnew System::String(teacher.c_str());
		//	teacherList->Add(teacherString);
		//}
		//System::String^ teacherString = String::Join(", ", teacherList);

		//this->dataGridView1->Columns->Clear(); // Clear existing columns
		//this->dataGridView1->Columns->Add("Teacher", "Teacher");
		//this->dataGridView1->Columns->Add("CourseName", "Course Name");
		//this->dataGridView1->Columns->Add("Time", "Time");
		////this->dataGridView1->Columns->Add("Time", "Time");
		//this->dataGridView1->Columns->Add("Room", "Room");

		//array<System::String^>^ teacherArray = teacherString->Split(gcnew array<System::String^> { ", " }, StringSplitOptions::None);
		//int count = 0;
		//for (int i = 0; i < 2; i++) {
		//	DataGridViewRow^ row = gcnew DataGridViewRow();
		//	row->CreateCells(dataGridView1);

		//	row->Cells[0]->Value = teacherArray[count];
		//	row->Cells[1]->Value = teacherArray[count + 1];
		//	row->Cells[2]->Value = teacherArray[count + 2];
		//	row->Cells[3]->Value = teacherArray[count + 3];

		//	this->dataGridView1->Rows->Add(row);
		//	count += 4;
		//}


	}
	private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//TimetableM^ timetable = gcnew TimetableM();
		//std::vector<std::string> studentVector = timetable->timetable->studentTimetable();
		//System::Collections::Generic::List<System::String^>^ studentList = gcnew System::Collections::Generic::List<System::String^>();

		//for (const std::string& teacher : studentVector) {
		//	System::String^ teacherString = gcnew System::String(teacher.c_str());
		//	studentList->Add(teacherString);
		//}
		//System::String^ studentString = String::Join(", ", studentList);

		//this->dataGridView1->Columns->Clear(); // Clear existing columns
		//this->dataGridView1->Columns->Add("Student", "Student");
		//this->dataGridView1->Columns->Add("Course", "Course");
		//this->dataGridView1->Columns->Add("Time", "Time");
		////this->dataGridView1->Columns->Add("Time", "Time");
		//this->dataGridView1->Columns->Add("Room", "Room");

		//array<System::String^>^ teacherArray = studentString->Split(gcnew array<System::String^> { ", " }, StringSplitOptions::None);
		//int count = 0;
		//int size = teacherArray->Length;
		//for (int i = 0; i < size / 4; i++) {
		//	DataGridViewRow^ row = gcnew DataGridViewRow();
		//	row->CreateCells(dataGridView1);

		//	row->Cells[0]->Value = teacherArray[count];
		//	row->Cells[1]->Value = teacherArray[count + 1];
		//	row->Cells[2]->Value = teacherArray[count + 2];
		//	row->Cells[3]->Value = teacherArray[count + 3];

		//	this->dataGridView1->Rows->Add(row);
		//	count += 4;
		//}

		SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-E19L0RG\\SQL;Initial Catalog=\"Timetable System\";Integrated Security=True");
		connection->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT [StudentName], [StudentEnrollment],[StudentEmail],[SectionName] FROM [Student]", connection);
		SqlDataReader^ reader = cmd->ExecuteReader();

		this->dataGridView1->Columns->Clear(); // Clear existing columns
		this->dataGridView1->Columns->Add("Student Name", "Student Name");
		this->dataGridView1->Columns->Add("Email", "Email");
		this->dataGridView1->Columns->Add("Enrollment", "Enrollment");
		this->dataGridView1->Columns->Add("Section", "Section");
		while (reader->Read())
		{
			String^ namedb = reader["StudentName"]->ToString();
			String^ emaildb = reader["StudentEmail"]->ToString();
			String^ enrolldb = reader["StudentEnrollment"]->ToString();
			String^ sectiondb = reader["SectionName"]->ToString();
			/*std::string namedbst = marshal_as<std::string>(namedb);
			std::string emaildbst = marshal_as<std::string>(emaildb);
			std::string enrolldbst = marshal_as<std::string>(enrolldb);
			std::string sectiondbst = marshal_as<std::string>(sectiondb);*/

			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);
			row->Cells[0]->Value = namedb;
				row->Cells[1]->Value = emaildb;
				row->Cells[2]->Value = enrolldb;
				row->Cells[3]->Value = sectiondb;

				this->dataGridView1->Rows->Add(row);
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void View_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		TimetableM^ timetable = gcnew TimetableM();
		std::vector<std::string> roomVector = timetable->timetable->roomTimetable();

		// Create a List to store System::String^
		System::Collections::Generic::List<System::String^>^ roomList = gcnew System::Collections::Generic::List<System::String^>();

		// Convert each std::string to System::String^ and add to the list
		for (const std::string& teacher : roomVector) {
			System::String^ teacherString = gcnew System::String(teacher.c_str());
			roomList->Add(teacherString);
		}
		System::String^ roomString = String::Join(", ", roomList);

		this->dataGridView1->Columns->Clear(); // Clear existing columns
		this->dataGridView1->Columns->Add("Room", "Room");
		this->dataGridView1->Columns->Add("Course", "Course");
		this->dataGridView1->Columns->Add("Time", "Time");
		this->dataGridView1->Columns->Add("Section", "Section");
		//this->dataGridView1->Columns->Add("Time", "Time");

		array<System::String^>^ roomArray = roomString->Split(gcnew array<System::String^> { ", " }, StringSplitOptions::None);
		int count = 0;
		int size = roomArray->Length;
		for (int i = 0; i < size / 4; i++) {
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);

			row->Cells[0]->Value = roomArray[count];
			row->Cells[1]->Value = roomArray[count + 1];
			row->Cells[2]->Value = roomArray[count + 2];
			row->Cells[3]->Value = roomArray[count + 3];
			this->dataGridView1->Rows->Add(row);
			count += 4;
		}
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		TimetableM^ timetable = gcnew TimetableM();
		std::vector<std::string> sectionVector = timetable->timetable->sectionTimetable();

		// Create a List to store System::String^
		System::Collections::Generic::List<System::String^>^ sectionList = gcnew System::Collections::Generic::List<System::String^>();

		// Convert each std::string to System::String^ and add to the list
		for (const std::string& teacher : sectionVector) {
			System::String^ teacherString = gcnew System::String(teacher.c_str());
			sectionList->Add(teacherString);
		}
		System::String^ sectionString = String::Join(", ", sectionList);

		this->dataGridView1->Columns->Clear(); // Clear existing columns
		this->dataGridView1->Columns->Add("Section", "Section");
		this->dataGridView1->Columns->Add("Course", "Course");
		this->dataGridView1->Columns->Add("Time", "Time");
		//this->dataGridView1->Columns->Add("Time", "Time");
		this->dataGridView1->Columns->Add("Room", "Room");

		array<System::String^>^ sectionArray = sectionString->Split(gcnew array<System::String^> { ", " }, StringSplitOptions::None);
		int count = 0;
		int size = sectionArray->Length;
		for (int i = 0; i < size / 4; i++) {
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);

			row->Cells[0]->Value = sectionArray[count];
			row->Cells[1]->Value = sectionArray[count + 1];
			row->Cells[2]->Value = sectionArray[count + 2];
			row->Cells[3]->Value = sectionArray[count + 3];

			this->dataGridView1->Rows->Add(row);
			count += 4;
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
