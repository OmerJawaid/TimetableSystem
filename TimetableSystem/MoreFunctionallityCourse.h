#pragma once
#include"MangedClass.h"
#include"../mainDLL/MainLibrary.h"
namespace TimetableSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MoreFunctionallityCourse
	/// </summary>
	public ref class MoreFunctionallityCourse : public System::Windows::Forms::Form
	{
	public:

		MoreFunctionallityCourse(List<StudentM^>^students,List<CourseM^>^courses)
		{
			this->students = students;
			this->courses = courses;
			
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MoreFunctionallityCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		List<StudentM^>^ students = gcnew List<StudentM^>(); List<CourseM^>^ courses = gcnew List<CourseM^>();
		CourseM^ course1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
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
			this->listBox1->Location = System::Drawing::Point(-3, -4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(786, 82);
			this->listBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(261, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Course Functinality";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(39, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 12;
			this->label2->Text = L"3";
			// 
			// listBox2
			// 
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(-3, 74);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(150, 420);
			this->listBox2->TabIndex = 13;
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
			this->button1->Location = System::Drawing::Point(12, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add Student";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::button1_Click);
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
			this->button2->Location = System::Drawing::Point(12, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 45);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Remove Student";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::button2_Click);
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
			this->button3->Location = System::Drawing::Point(12, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 39);
			this->button3->TabIndex = 16;
			this->button3->Text = L"View Students";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::button3_Click);
			// 
			// listBox3
			// 
			this->listBox3->ForeColor = System::Drawing::Color::White;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(645, 27);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 4);
			this->listBox3->TabIndex = 17;
			// 
			// listBox4
			// 
			this->listBox4->ForeColor = System::Drawing::Color::White;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(668, 48);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(97, 4);
			this->listBox4->TabIndex = 18;
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(190, 165);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(552, 225);
			this->listBox5->TabIndex = 26;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(359, 249);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(209, 21);
			this->comboBox3->TabIndex = 30;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MoreFunctionallityCourse::comboBox3_SelectedIndexChanged);
			AddforComboboxStudent(comboBox3);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(425, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 16);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Students";
			this->label7->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::label7_Click);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(315, 197);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(295, 171);
			this->listView1->TabIndex = 33;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->Visible = false;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MoreFunctionallityCourse::listView1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(425, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Students";
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
			this->button4->Location = System::Drawing::Point(581, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 39);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Add Student";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::button4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(190, 413);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 42);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MoreFunctionallityCourse::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(382, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 25);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Add Student";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(428, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 16);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Courses";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(359, 302);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 21);
			this->comboBox2->TabIndex = 39;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MoreFunctionallityCourse::comboBox2_SelectedIndexChanged);
			AddforComboboxCourse(comboBox2);
			// 
			// MoreFunctionallityCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 485);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->listBox5);
			this->Name = L"MoreFunctionallityCourse";
			this->Text = L"MoreFunctionallityCourse";
			this->Load += gcnew System::EventHandler(this, &MoreFunctionallityCourse::MoreFunctionallityCourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Visible = false;
		label3->Hide();
		comboBox3->Visible = true;
		label7->Visible = true;
		button4->Text = "Add Student";
		label3->Text = "Add Student";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Visible = false;
	label3->Hide();
	comboBox3->Visible = false;
	label7->Visible = false;
	button4->Text = "Select Course";
	label4->Text = "Select Course";
	/*AddforComboboxCourse(comboBox2);*/
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Visible = false;
	label3->Hide();
	comboBox3->Visible = false;
	label7->Visible = false;
	button4->Text = "View";
	label4->Text = "View Students";
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	  
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (label4->Text == "Select Course")
	{
		label4->Text = "Remove Student";
			String^ name = comboBox2->SelectedItem->ToString();
		for each (CourseM ^ course in courses) {
			String^ courseName = gcnew String(course->course->getCourseName().c_str());
			if (name = courseName) {
				button4->Text = "Remove Student";
				label7->Show();
				comboBox3->Visible = true;
				AddforComboboxStudentremove(comboBox3, course);
				course1 = course;
				break;
			}
			
		}
	}
	else if (label4->Text == "Add Student")
	{
		int index = 0;
		for each (StudentM ^ student in students) {
			String^ name = comboBox3->SelectedItem->ToString();
			String^ studentName = gcnew String(student->student->getstudentname().c_str());
			if (name == studentName)
			{
				for each (CourseM ^ course in courses)
				{
					String^ name = comboBox2->SelectedItem->ToString();
					String^ courseName = gcnew String(course->course->getCourseName().c_str());

					if (name == courseName)
					{
						course->course->addStudent(student->student);
						break;
					}
				}
				break;
			}
		}
		MessageBox::Show("Sucessfully Added");
	}
	else if (label4->Text == "Remove Student")
	{
		String^ name = comboBox3->SelectedItem->ToString();
		for each (Student * student in course1->course->enrolledStudents)
		{
			String^ studentname = gcnew String(student->getstudentname().c_str());
			if (studentname == name)
			{
				course1->course->removeStudent(student);
				MessageBox::Show("Sucessfully Deleted Student");
				break;
			}
		}
		button4->Text = "Select Course";
		label4->Text = "Select Course";
		label7->Hide();
		comboBox3->Visible = false;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->Hide();*/
	MessageBox::Show(comboBox2->SelectedText);
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   void AddforComboboxCourse(ComboBox^ comboBox)
	   {
		   array<String^>^ courseNames = gcnew array<String^>(courses->Count);
		   int index = 0;
		   for each (CourseM ^ course in courses)
		   {
			   String^ coursename = gcnew System::String(course->course->getCourseName().c_str());
			   courseNames[index] =coursename;
			   index++;
		   }
		   comboBox->Items->AddRange(courseNames);
	   }
	   void AddforComboboxStudent(ComboBox^ comboBox)
	   {
		   array<String^>^ studentNames = gcnew array<String^>(students->Count);
		   int index = 0;
		   for each (StudentM ^ student in students)
		   {
			   String^ studentname = gcnew System::String(student->student->getstudentname().c_str());
			   studentNames[index] = studentname;
			   index++;
		   }
		   comboBox->Items->AddRange(studentNames);
	   }
	   void AddforComboboxStudentremove(ComboBox^ comboBox, CourseM^ course)
	   {
		   array<String^>^ StudentNames = gcnew array<String^>(course->course->enrolledStudents.size());
		   int index = 0;
		   for each (Student*  student in course->course->enrolledStudents) {
			   String^ studentname = gcnew System::String(student->getstudentname().c_str());
			   StudentNames[index] = studentname;
			   index++;
		   }
	   }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MoreFunctionallityCourse_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
