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