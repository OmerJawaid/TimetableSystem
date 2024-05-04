#pragma once
#include"../mainDLL/MainLibrary.h"


using namespace System;
using namespace System::Collections::Generic;

public ref class CourseM {
	
public:
	Course* course;
	CourseM(int courseCode, const std::string& coursename , Teacher* teacher, Room* assignedRoom){

		course = new Course(courseCode,coursename, teacher, assignedRoom);
	}
};
public ref class TimetableM {
public:
	Timetable* timetable;
	TimetableM() {
		timetable = new Timetable();
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
	StudentM(int ID, std::string na, std::string mail, std::string Section) {
		student = new Student(ID,na,mail,Section);
	}
};

public ref class SectionM {
public:
	Section* section;
	SectionM(const std::string& name) {
		section = new Section(name);
	}
};

