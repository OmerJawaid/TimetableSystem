#pragma once
#include"../mainDLL/MainLibrary.h"
using namespace System;
using namespace System::Collections::Generic;
public ref class CourseM {
	
public:
	Course* course;
	CourseM() {
		course = new Course();
	}
};
public ref class TeacherM {
public:
	Teacher* teacher;
	TeacherM(/*std::string n, int ID, std::string em*/) {
		teacher = new Teacher(/*n, ID, em*/);
	}
};
public ref class RoomM {
public:
	Room* room;
	RoomM(std::string r_no, int cap) {
		room = new Room(r_no, cap);
	}
};