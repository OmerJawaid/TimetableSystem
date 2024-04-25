#include "pch.h"
#include "MainLibrary.h"
#include<algorithm>
using namespace std;

void print_my_name()
{
   /* cout << "My name is Amaan." << std::endl;*/
}

const char* get_my_name()
{
    return "My name is Amaan.";
}

bool login(string username, string password)
{
    ifstream infile("users.txt");
    string user, pass;
    bool found = false;
    if (infile.is_open()) {
        while (infile >> user >> pass) {
            if (user == username && pass == password)
            {
                infile.close();
                return true;
            }
        }
        infile.close();
    }
}

void signup(string username, string password)
{
	ofstream outfile("users.txt", ios::app);
	if (outfile.is_open()) {
		outfile << username << " " << password << endl;
		/*cout << "Signup Successful!" << endl;*/
		outfile.close();
	}
	else {
		/*cerr << "Error: Unable to open database file!" << endl;*/
	}
}


    //Course class
    void Course::addStudent(Student* student) {
        enrolledStudents.push_back(student);
    }
    void Course::removeStudent(Student* student) {
        auto it = find(enrolledStudents.begin(), enrolledStudents.end(), student);
        if (it != enrolledStudents.end()) {
            enrolledStudents.erase(it);
        }
    }

    void Course::viewStudents() const {
        for (auto student : enrolledStudents) {
           /* cout << "Name: " << student->getstudentname() << "\tSection: " << student->getsection() << std::endl;*/
        }
    }

    string Course::getCourseName() const {
        return courseName;
    }

    int Course::getCourseCode() const {
        return courseCode;
    }

    Teacher* Course::getTeacher() const {
        return teacher;
    }

    Room* Course::getAssignedRoom() const {
        return assignedRoom;
    }

    Time* Course::getAssignedTime() const {
        return assignedTime;
    }


    void Course::setAssignedRoom(Room* room) {
        room = assignedRoom;
    }

    vector<Student*> Course::getEnrolledStudents() const {
        return enrolledStudents;
    }



    //Room class
    //Room::Room(string r_no, int cap) : roomNumber(r_no), capacity(cap) {
    //    //total_rooms = { "417","418","419" }; // Initialize total rooms
    //    //rooms_available = total_rooms; // Initially all rooms are available
    //    //total_labs = { "401","402" }; // Initialize total labs
    //    //available_labs = total_labs; // Initially all labs are available
    //}

    void Room::displayRooms_available() {
       /* cout << "Rooms available: " << endl;*/
        for (int i = 0; i < rooms_available.size(); i++) {
            /*cout << rooms_available[i] << endl;*/
        }
    }

    void Room::assignRoom(Course* course) {
        bool check = false;
        do {
            /*cout << "Enter room number: ";
            cin >> roomNumber;*/
            check = checkAvailabitiy(roomNumber);
            if (check) {
                course->setAssignedRoom(this); // Passing the Room pointer to Course
                // Remove the assigned room from available rooms
                rooms_available.erase(remove(rooms_available.begin(), rooms_available.end(), roomNumber), rooms_available.end());
            }
            else {
                /*cout << "Room not available" << endl;*/
            }
        } while (!check);
    }

    bool Room::checkAvailabitiy(string room_number) {
        for (int i = 0; i < rooms_available.size(); i++) {
            if (rooms_available[i] == room_number) {
                return true;
            }
        }
        return false;
    }

    void Room::update_room(Course* course) {
        //int up_room;
        ///*cout << "Enter room number that you want to update = ";
        //cin >> up_room;*/
        //auto it = find(rooms_available.begin(), rooms_available.end(), up_room);
        //if (it != rooms_available.end()) {
        //    course->setAssignedRoom(this); // Passing the Room pointer to Course
        //}
        //else {
        //    /*cout << "Room Number doesn't exist. Try Again!" << endl;*/
        //}
    }




    //Student.cpp

    void Student::enrollCourse(Course* course) {
        coursesEnrolled.push_back(course);
    }
    void Student::dropCourse(Course* course) {
        for (auto cor = coursesEnrolled.begin(); cor != coursesEnrolled.end(); cor++)
            if (*cor == course)
                coursesEnrolled.erase(cor);
    }
    void Student::viewCourses(Course* course) {
        /*cout << "Courses Enrolled: ";*/
        for (auto i : coursesEnrolled)
        {
            /*cout << course->getCourseName() << endl;*/
        }
    }
    string Student::getstudentname() {
        return name;
    }
    string Student::getsection() const {
        return section;
    }



    //Teacher.cpp
    Teacher::Teacher(std::string n, int ID, std::string em) : name(n), teacherID(ID), email(em) {}

    void Teacher::assignCourse(Course* course) {
        coursesTaught.push_back(course);
    }

    void Teacher::removeCourse(Course* course) {
        for (auto c = coursesTaught.begin(); c != coursesTaught.end(); c++) {
            if (*c == course) { // Change assignment operator '=' to comparison operator '=='
                coursesTaught.erase(c);
                break; // Exit the loop after erasing the course
            }
        }
    }

    void Teacher::viewCourse(Course* course) {
        /*std::cout << "Courses Taught by " << name << " are:" << std::endl;*/
        for (auto view = coursesTaught.begin(); view != coursesTaught.end(); view++) {
            /*std::cout << (*view)->getCourseName() << std::endl;*/
        }
    }













    //Timetable.cpp
    //void Timetable::scheduleCourse(Course* course, vector<Time*>& times, Room* room) {
    //    // Shuffle time slots to randomize scheduling
    //    random_shuffle(times.begin(), times.end());

    //    // Find an available time slot
    //    Time* chosenTime = nullptr;
    //    for (Time* time : times) {
    //        bool conflict = false;
    //        for (const auto& day : sectionCourses) {
    //            for (const auto& sectionPair : day.second) {
    //                for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                    Time* existingTime = get<1>(courseTimeRoomTuple);
    //                    if (existingTime->getStartTime() == time->getStartTime() && existingTime->getEndTime() == time->getEndTime()) {
    //                        conflict = true;
    //                        break;
    //                    }
    //                }
    //                if (conflict) break;
    //            }
    //            if (conflict) break;
    //        }
    //        if (!conflict) {
    //            chosenTime = time;
    //            break;
    //        }
    //    }

    //    if (chosenTime) {
    //        Section* section = course->getAssignedSection();
    //        sectionCourses["Monday"][section->getName()].push_back(make_tuple(course, chosenTime, room));
    //    }
    //    else {
    //        cout << "Unable to schedule course: " << course->getCourseName() << endl;
    //    }
    //}