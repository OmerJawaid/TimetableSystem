#pragma once
#include"../mainDLL/MainLibrary.h"
#include"Add.h"
//#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Collections::Generic;

public ref class CourseM {
	
public:
	Course* course;
	CourseM(int courseCode, const std::string& coursename) {
		course = new Course(courseCode,coursename);
	}
};
public ref class TeacherM {
public:
	Teacher* teacher;
	TeacherM(std::string n, int ID, std::string em) {
		teacher = new Teacher(n, ID, em);
	}
};
public ref class RoomM {
public:
	Room* room;
	RoomM(std::string r_no, int cap) {
		room = new Room(r_no, cap);
	}
};
public ref class StudentM {
public:
	Student* student;
	StudentM(int ID, std::string na, std::string mail) {
		student = new Student(ID,na,mail);
	}
};

public ref class SectionM {
public:
	Section* section;
	SectionM(const std::string& name) {
		section = new Section(name);
	}
};
//void additems()
//{
//	array<String^>^ items = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
//
//	// Add the items to the combo box
//	AddcomboBox1->Items->AddRange(items);
//}
