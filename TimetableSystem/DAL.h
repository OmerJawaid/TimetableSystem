#pragma once
#include"MangedClass.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

public ref class DAL {
private:
	std::string ConvertToString(String^ str) {
		if (str == nullptr) {
			return "";
		}
		array<Char>^ chars = str->ToCharArray();
		std::string result;
		for each (Char c in chars) {
			result += static_cast<char>(c);
		}
		return result;
	}
public:
	DAL(List<CourseM^>^ coursesp, List<TeacherM^>^ teachersp, List<RoomM^>^ roomsp, List<StudentM^>^ studentsp, List<SectionM^>^ sectionsp)
	{
		courses = coursesp;
		teachers = teachersp;
		rooms = roomsp;
		students = studentsp;
		sections = sectionsp;
	}

	DAL() {};

	List<CourseM^>^ courses = gcnew List<CourseM^>();
	List<TeacherM^>^ teachers = gcnew List<TeacherM^>();
	List<RoomM^>^ rooms = gcnew List<RoomM^>();
	List<StudentM^>^ students = gcnew List<StudentM^>();
	List<SectionM^>^ sections = gcnew List<SectionM^>();

	void DataRetriver()
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=\"Timetable System\";Integrated Security=True");
		con->Open();

		{
			SqlCommand^ cmdteacher = gcnew SqlCommand("SELECT [TeacherName],[TeacherEmail],[TeacherID] FROM [Teacher]", con);
			SqlDataReader^ readerteacher = cmdteacher->ExecuteReader();
			while (readerteacher->Read())
			{
				std::string teachername = ConvertToString(readerteacher["TeacherName"]->ToString());
				std::string teacheremail = ConvertToString(readerteacher["TeacherEmail"]->ToString());
				int teacherid = readerteacher->GetInt32(readerteacher->GetOrdinal("TeacherID"));
				TeacherM^ teacher = gcnew TeacherM(teachername, teacherid, teacheremail);
				teachers->Add(teacher);
			}
		}
		con->Close();

		con->Open();

		{
			SqlCommand^ cmdroom = gcnew SqlCommand("SELECT [RoomNum], [RoomCapacity] FROM [Room]", con);
			SqlDataReader^ readerroom = cmdroom->ExecuteReader();
			while (readerroom->Read())
			{
				std::string roomnumber = ConvertToString(readerroom["RoomNum"]->ToString());
				int roomcapacity = readerroom->GetInt32(readerroom->GetOrdinal("RoomCapacity"));
				RoomM^ room = gcnew RoomM(roomnumber, roomcapacity);
				rooms->Add(room);
			}
		}
		con->Close();
		con->Open();
		{
			SqlCommand^ cmdsection = gcnew SqlCommand("SELECT [SectionName] FROM [Section]", con);
			SqlDataReader^ readersection = cmdsection->ExecuteReader();
			while (readersection->Read())
			{
				std::string sectionname = ConvertToString(readersection["SectionName"]->ToString());
				SectionM^ section = gcnew SectionM(sectionname);
				sections->Add(section);
			}
		}
		con->Close();
		con->Open();
		{
			SqlCommand^ cmdcourse = gcnew SqlCommand("SELECT [Coursename], [Coursecode],[TeacherID],[RoomNum] FROM [Course]", con);
			SqlDataReader^ readercourse = cmdcourse->ExecuteReader();
			while (readercourse->Read())
			{
				std::string coursename = ConvertToString(readercourse["Coursename"]->ToString());
				int coursecode = readercourse->GetInt32(readercourse->GetOrdinal("Coursecode"));

				int teacherid = readercourse->GetInt32(readercourse->GetOrdinal("TeacherID"));
				std::string roomnumber = ConvertToString(readercourse["RoomNum"]->ToString());

				CourseM^ course = gcnew CourseM(coursecode, coursename);
				courses->Add(course);
				for each (auto teacherc in teachers)
				{
					if (teacherid == teacherc->teacher->getteacherid())
					{
						course->course->teacherAssignCourse(teacherc->teacher);
						break;
					}
				}
				for each (auto roomc in rooms)
				{
					if (roomnumber == roomc->room->getRoomNumber())
					{
						course->course->setAssignedRoom(roomc->room);
						break;
					}
				}
			}
		}
		con->Close();
		con->Open();
		{
			SqlCommand^ cmdstudent = gcnew SqlCommand("SELECT [StudentName], [StudentEmail],[StudentEnrollment],[SectionName] FROM [Student]", con);
			SqlDataReader^ readerstudent = cmdstudent->ExecuteReader();
			while (readerstudent->Read())
			{
				std::string studentname = ConvertToString(readerstudent["StudentName"]->ToString());
				int studentenrollment = readerstudent->GetInt32(readerstudent->GetOrdinal("StudentEnrollment"));

				std::string studentemail = ConvertToString(readerstudent["StudentEmail"]->ToString());
				std::string sectionname = ConvertToString(readerstudent["SectionName"]->ToString());

				StudentM^ student = gcnew StudentM(studentenrollment, studentname, studentemail);
				students->Add(student);

				for each (auto sectionstudent in sections)
				{
					if (sectionname == sectionstudent->section->getName())
					{
						student->student->AssignSection(sectionstudent->section);
						break;
					}
				}
			}
			readerstudent->Close();

			SqlCommand^ cmdstudentcourse = gcnew SqlCommand("SELECT [StudentEnrollment],[Coursecode] FROM [StudentCourse]", con);
			SqlDataReader^ readerstudentcourse = cmdstudentcourse->ExecuteReader();
			while (readerstudentcourse->Read())
			{
				int studentenrollment = readerstudentcourse->GetInt32(readerstudentcourse->GetOrdinal("StudentEnrollment"));
				int coursecode = readerstudentcourse->GetInt32(readerstudentcourse->GetOrdinal("Coursecode"));
				for each (auto studentc in students)
				{
					if (studentenrollment == studentc->student->studentID)
					{
						for each (auto coursec in courses)
						{
							if (coursecode == coursec->course->getCourseCode())
							{
								studentc->student->enrollCourse(coursec->course);
								break;
							}
						}
						break;
					}
				}
			}
		}
		con->Close();
			
	}
	int StudentCourseID()
	{
		int ID;
		SqlConnection^ con = gcnew SqlConnection("Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=\"Timetable System\";Integrated Security=True");
		con->Open();
		SqlCommand^ cmd= gcnew SqlCommand("SELECT [ID] FROM [StudentCourse]", con);
		SqlDataReader^ readerstudent = cmd->ExecuteReader();
		while (readerstudent->Read())
			ID= readerstudent->GetInt32(readerstudent->GetOrdinal("ID"));
		return ID;
	}
};