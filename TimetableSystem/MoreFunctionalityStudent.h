#pragma once
#include"MangedClass.h"
#include"DAL.h";
#include"../mainDLL/MainLibrary.h"
namespace TimetableSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MoreFunctionalityStudent
	/// </summary>
	public ref class MoreFunctionalityStudent : public System::Windows::Forms::Form
	{
	public:
		int StudentCourseID;
		MoreFunctionalityStudent(List<StudentM^>^ students, List<CourseM^>^ courses)
		{
			this->students = students;
			this->courses = courses;

			InitializeComponent();
			DAL^ dal = gcnew DAL();
			/*StudentCourseID=dal->StudentCourseID();*/
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MoreFunctionalityStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:
	private:
		List<CourseM^>^ courses = gcnew List<CourseM^>(); 
List<StudentM^>^ students = gcnew List<StudentM^>();
		StudentM^ student1;
	private: System::Windows::Forms::Button^ button4;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->listBox1->Location = System::Drawing::Point(-4, -3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(786, 82);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MoreFunctionalityStudent::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(38, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(260, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Student Functionality";
			this->label1->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::label1_Click);
			// 
			// listBox3
			// 
			this->listBox3->ForeColor = System::Drawing::Color::White;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(645, 21);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 4);
			this->listBox3->TabIndex = 18;
			// 
			// listBox4
			// 
			this->listBox4->ForeColor = System::Drawing::Color::White;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(668, 46);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(97, 4);
			this->listBox4->TabIndex = 19;
			// 
			// listBox2
			// 
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(-4, 75);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(150, 420);
			this->listBox2->TabIndex = 20;
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
			this->button1->Location = System::Drawing::Point(12, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 39);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Enroll Course";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::button1_Click);
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
			this->button2->Location = System::Drawing::Point(12, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 45);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Drop Course";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::button2_Click);
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
			this->button3->Location = System::Drawing::Point(12, 338);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 39);
			this->button3->TabIndex = 23;
			this->button3->Text = L"View Courses";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::button3_Click);
			// 
			// listBox5
			// 
			this->listBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(189, 172);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(552, 225);
			this->listBox5->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(373, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 25);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Enroll Course";
			this->label4->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(428, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Enroll Course";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(428, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Courses";
			this->label7->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(428, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Students";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(354, 262);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(209, 21);
			this->comboBox3->TabIndex = 42;
			this->comboBox3->Visible = false;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(310, 216);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(295, 171);
			this->listView1->TabIndex = 43;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(354, 315);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(209, 21);
			this->comboBox2->TabIndex = 44;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MoreFunctionalityStudent::comboBox2_SelectedIndexChanged);
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
			this->button4->Location = System::Drawing::Point(580, 422);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 39);
			this->button4->TabIndex = 45;
			this->button4->Text = L"Select Student";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MoreFunctionalityStudent::button4_Click);
			// 
			// MoreFunctionalityStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 485);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->listBox5);
			this->Name = L"MoreFunctionalityStudent";
			this->Text = L"MoreFunctionalityStudent";
			this->Load += gcnew System::EventHandler(this, &MoreFunctionalityStudent::MoreFunctionalityStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MoreFunctionalityStudent_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Visible = false;
	label3->Hide();
	comboBox3->Visible = false;
	label7->Visible = false;
	button4->Text = "Select Student";
	label3->Text = "Enroll Course";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Visible = false;
	label3->Hide();
	comboBox3->Visible = false;
	label7->Visible = false;
	button4->Text = "Select Student";
	label4->Text = "Select Student";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Visible = false;
	label3->Hide();
	comboBox3->Visible = false;
	label7->Visible = false;
	button4->Text = "View";
	label4->Text = "View Courses";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=\"Timetable System\";Integrated Security=True");
	if (label4->Text=="Select Student")
	{
		label4->Text = "Drop Course";
		String^ name = comboBox2->SelectedItem->ToString();
		for each (StudentM ^ student in students) {
			String^ studentName = gcnew String(student->student->getstudentname().c_str());
			if (name = studentName) {
				button4->Text = "Drop Course";
				label7->Show();
				comboBox3->Visible = true;
				AddforComboboxCourseremove(comboBox3, student);
				/*student1 = student;*/
				break;
			}

		}
	}
	else if(label4->Text == "Enroll Course" && button4->Text == "Select Student")
	{
		label4->Text = "Enroll Course";
		String^ name = comboBox2->SelectedItem->ToString();
		for each (StudentM ^ student in students) {
			String^ studentName = gcnew String(student->student->getstudentname().c_str());
			if (name = studentName) {
				button4->Text = "Enroll Course";
				label7->Show();
				comboBox3->Visible = true;
				AddforComboboxCourse(comboBox3,student);
				/*student1 = student;*/
				break;
			}

		}
	}
	else if (button4->Text == "Enroll Course")
	{
		try {
			con->Open();
			SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO StudentCourse(ID, StudentEnrollment, Coursecode) VALUES (@ID, @StudentEnrollment, @Coursecode)", con);
			
			for each (CourseM ^ course in courses) {
				String^ name = comboBox3->SelectedItem->ToString();
				String^ courseName = gcnew String(course->course->getCourseName().c_str());
				if (name == courseName) {
					for each (StudentM ^ student in students) {
						String^ name = comboBox2->SelectedItem->ToString();
						String^ studentName = gcnew String(student->student->getstudentname().c_str());
						StudentCourseID++;
						if (name == studentName) {
							student->student->enrollCourse(course->course);
							cmd->Parameters->Clear();
							cmd->Parameters->AddWithValue("@ID", StudentCourseID);
							cmd->Parameters->AddWithValue("@CourseCode", course->course->getCourseCode());
							cmd->Parameters->AddWithValue("@StudentEnrollment", student->student->studentID);
							cmd->ExecuteNonQuery();
							break;
						}
					}
					break;
				}
			}
			MessageBox::Show("Successfully Enrolled");
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	else if (label4->Text == "Drop Course")
	{
		String^ name = comboBox3->SelectedItem->ToString();
		for each (Course * course in student1->student->coursesEnrolled)
		{
			String^ coursename = gcnew String(course->getCourseName().c_str());
			if (coursename == name)
			{
				student1->student->dropCourse(course);
				MessageBox::Show("Sucessfully Dropped Course");
				break;
			}
		}
		button4->Text = "Select Student";
		label4->Text = "Select Student";
		label7->Hide();
		comboBox3->Visible = false;
	}

}
	   void AddforComboboxCourse(ComboBox^ comboBox, StudentM^ student)
	   {
		   // Check if courses and student are not null
		   if (courses == nullptr || student == nullptr || student->student == nullptr)
		   {
			   throw gcnew System::ArgumentNullException("Courses or student cannot be null.");
		   }

		   // Create a list to dynamically add course names
		   List<String^>^ courseNames = gcnew List<String^>();

			   for each (CourseM ^ course in courses)
			   {
				   bool isEnrolled = false;

				   // Check if the student is enrolled in the course
				   for each (Course * course1 in student->student->coursesEnrolled)
				   {
					   if (course->course == course1)
					   {
						   isEnrolled = true;
						   break;
					   }
				   }

				   // Add course name if the student is not enrolled
				   if (!isEnrolled)
				   {
					   courseNames->Add(gcnew System::String(course->course->getCourseName().c_str()));
				   }
			   }
		   

		   // Add course names to the ComboBox
		   if (courseNames->Count > 0)
		   {
			   comboBox->Items->AddRange(courseNames->ToArray());
		   }
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
	   void AddforComboboxCourseremove(ComboBox^ comboBox, StudentM^ student)
	   {
		   array<String^>^ CourseNames = gcnew array<String^>(student->student->coursesEnrolled.size());
		   int index = 0;
		   for each (Course * course in student->student->coursesEnrolled) {
			   String^ coursename = gcnew System::String(course->getCourseName().c_str());
			   CourseNames[index] = coursename;
			   index++;
		   }
	   }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
