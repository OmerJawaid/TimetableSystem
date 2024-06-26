#include "pch.h"
#include "MainLibrary.h"
#include<algorithm>

using namespace std;

vector<string>Test()
{
    vector<string>str;
    str.push_back("Hello");
    str.push_back("World");
    return str;
}
bool login(string username, string password,string usernamedb,string passworddb)
{
    if (usernamedb == username && passworddb == password)
        return true;
    else
        return false;
}

bool signup(string username, string password)
{
	ofstream outfile("users.txt", ios::app);
	if (outfile.is_open()) {
		outfile << username << " " << password << endl;
		outfile.close();
        return true;
	}
	else {
        return false;
	}
}


    //Course class

    /*void Course::addStudent(Student* student) {
        enrolledStudents.push_back(student);
    }*/


    void Course::viewStudents() const {
        for (auto student : enrolledStudents) {
           /* cout << "Name: " << student->getstudentname() << "\tSection: " << student->getsection() << std::endl;*/
        }
    }

    //std::string Course::getCourseName() const {
    //    return courseName;
    //}

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


   /* void Course::setAssignedRoom(Room* room) {
        room = assignedRoom;
    }*/

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
    string Room::getRoomNumber() const
    {
        return roomNumber;
    }
    Room::Room(string r_no, int cap) {
        roomNumber = r_no;
        capacity = cap;
    }

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

//Time.cpp
string Time::getStartTime()
{
    return startTime;
}
string Time::getEndTime()
{
    return endTime;
}
    //Section
    Section::Section(const std::string& secname) {
        name = secname;
    }

    const std::string& Section::getName ()

    {
        return name;
    }


    //Student.cpp
    /*:studentID(ID), name(na), email(mail){}
    */
    Student::Student(int ID, string na, string mail)
    {
        studentID = ID;
        name = na;
        email = mail;
    }
    Student::Student(int ID, string na, string mail, string Section)
    {
        studentID = ID;
        name = na;
        email = mail;
        Section = section;
    }
    void Student::enrollCourse(Course* course) {
        coursesEnrolled.push_back(course);
    }
    void Student::dropCourse(Course* course) {
        auto it = find(coursesEnrolled.begin(), coursesEnrolled.end(), course);
        if (it != coursesEnrolled.end()) {
            coursesEnrolled.erase(it);
        }
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
    void Student::AssignSection(Section* section) {
        		section = section;
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
        //for (auto view = coursesTaught.begin(); view != coursesTaught.end(); view++) {
        //    /*std::cout << (*view)->getCourseName() << std::endl;*/
        //}
    }
    string Teacher::getName()
    {
            return name;
    }

    //Section Class
    





     //Timetable.cpp
    Timetable::Timetable() {};
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

    //void Timetable::teacherTimetable() {
    //   /* buildTimetable();*/


    //    map<Teacher*, vector<tuple<Course*, Time*, Room*>>> teacherCourses;


    //    for (const auto& day : sectionCourses) {
    //      /*  cout << "Day: " << day.first << endl;*/


    //        for (const auto& sectionPair : day.second) {

    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Teacher* teacher = get<0>(courseTimeRoomTuple)->getTeacher();
    //                teacherCourses[teacher].push_back(courseTimeRoomTuple);
    //            }
    //        }


    //        for (const auto& teacherCoursePair : teacherCourses) {
    //            Teacher* teacher = teacherCoursePair.first;
    //            vector<tuple<Course*, Time*, Room*>> courses = teacherCoursePair.second;
    //            /*if (teacher->getName() == "Tamim") {*/
    //          /*  cout << "Teacher: " << teacher->getName() << endl;*/
    //            for (const auto& courseTimeRoomTuple : courses) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);
    //              /*  cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Room: " << room->getRoomNumber() << endl;*/
    //            }
    //            /* }*/
    //           /* cout << endl;*/
    //        }
    //    }
    //}

    vector<string> Timetable::teacherTimetable() {
        buildTimetable();
        vector<string> timetableData;
        map<Teacher*, vector<tuple<Course*, Time*, Room*>>> teacherCourses;

        for (const auto& day : sectionCourses) {
            for (const auto& sectionPair : day.second) {
                for (const auto& courseTimeRoomTuple : sectionPair.second) {
                    Teacher* teacher = get<0>(courseTimeRoomTuple)->getTeacher();
                    teacherCourses[teacher].push_back(courseTimeRoomTuple);
                }
            }
        }

        for (const auto& teacherCoursePair : teacherCourses) {
            Teacher* teacher = teacherCoursePair.first;
            const auto& courses = teacherCoursePair.second;


            // timetableData.push_back(" Teacher: " + teacher->getName());

            for (const auto& courseTimeRoomTuple : courses) {
                timetableData.push_back(teacher->getName());
                Course* course = get<0>(courseTimeRoomTuple);
                Time* time = get<1>(courseTimeRoomTuple);
                Room* room = get<2>(courseTimeRoomTuple);
                timetableData.push_back(course->getCourseName());
                timetableData.push_back(time->getStartTime() + " - " + time->getEndTime());
                timetableData.push_back(room->getRoomNumber());
            }
        }
        return timetableData;
    }


    //void Timetable::studentTimetable() {
    //    /*buildTimetable();*/
    //
    //    map<Student*, vector<tuple<Course*, Time*, Room*>>> studentCourses;
    //
    //    for (const auto& day : sectionCourses) {
    //        /*  cout << "Day: " << day.first << endl;*/
    //
    //        for (const auto& sectionPair : day.second) {
    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);
    //                for (Student* student : course->getEnrolledStudents()) {
    //                    studentCourses[student].push_back(courseTimeRoomTuple);
    //                }
    //            }
    //        }
    //
    //        for (const auto& studentCoursePair : studentCourses) {
    //            Student* student = studentCoursePair.first;
    //            vector<tuple<Course*, Time*, Room*>> courses = studentCoursePair.second;
    //            /*  cout << "Student: " << student->getstudentname() << endl;*/
    //            for (const auto& courseTimeRoomTuple : courses) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);
    //                /*   cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Room: " << room->getRoomNumber() << endl;*/
    //            }
    //            /* cout << endl;*/
    //        }
    //    }
    //}

    vector<string> Timetable::studentTimetable() {
        buildTimetable();

        vector<string>timetableStudent;

        map<Student*, vector<tuple<Course*, Time*, Room*>>> studentCourses;

        for (const auto& day : sectionCourses) {
            /*  cout << "Day: " << day.first << endl;*/

            for (const auto& sectionPair : day.second) {
                for (const auto& courseTimeRoomTuple : sectionPair.second) {
                    Course* course = get<0>(courseTimeRoomTuple);
                    Time* time = get<1>(courseTimeRoomTuple);
                    Room* room = get<2>(courseTimeRoomTuple);
                    for (Student* student : course->getEnrolledStudents()) {
                        studentCourses[student].push_back(courseTimeRoomTuple);
                    }
                }
            }

            for (const auto& studentCoursePair : studentCourses) {
                Student* student = studentCoursePair.first;
                vector<tuple<Course*, Time*, Room*>> courses = studentCoursePair.second;

                string studentname = student->getstudentname();
                for (const auto& courseTimeRoomTuple : courses) {
                    timetableStudent.push_back(studentname);
                    Course* course = get<0>(courseTimeRoomTuple);
                    Time* time = get<1>(courseTimeRoomTuple);
                    Room* room = get<2>(courseTimeRoomTuple);
                    timetableStudent.push_back(course->getCourseName());
                    timetableStudent.push_back(time->getStartTime() + " - " + time->getEndTime());
                    timetableStudent.push_back(room->getRoomNumber());
                    /*   cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Room: " << room->getRoomNumber() << endl;*/
                }
                /* cout << endl;*/
            }
        }
        return timetableStudent;
    }

    //void Timetable::sectionTimetable() {
    //    // Build the timetable
    //    buildTimetable();

    //    // Iterate over days
    //    for (const auto& day : sectionCourses) {
    //        /*cout << "Day: " << day.first << endl;*/

    //        // Iterate over sections for the day
    //        for (const auto& sectionPair : day.second) {
    //            string sectionName = sectionPair.first;
    //            /*cout << "Section: " << sectionName << endl;*/

    //            // Iterate over courses for the section
    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);

    //                /*cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Room: " << room->getRoomNumber() << endl;*/
    //            }
    //            /*cout << endl;*/
    //        }
    //    }

    //}

    vector<string> Timetable::sectionTimetable() {
        buildTimetable();
        vector<string>timetableSection;
        // Iterate over days
        for (const auto& day : sectionCourses) {
            /*cout << "Day: " << day.first << endl;*/

            // Iterate over sections for the day
            for (const auto& sectionPair : day.second) {
                string sectionName = sectionPair.first;
                //timetableSection.push_back("Section" + sectionName);
                /*cout << "Section: " << sectionName << endl;*/

                // Iterate over courses for the section
                for (const auto& courseTimeRoomTuple : sectionPair.second) {
                    timetableSection.push_back(sectionName);
                    Course* course = get<0>(courseTimeRoomTuple);
                    Time* time = get<1>(courseTimeRoomTuple);
                    Room* room = get<2>(courseTimeRoomTuple);
                    timetableSection.push_back(course->getCourseName());
                    timetableSection.push_back(time->getStartTime() + " - " + time->getEndTime());
                    timetableSection.push_back(room->getRoomNumber());
                    /*cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Room: " << room->getRoomNumber() << endl;*/
                }
                /*cout << endl;*/
            }
        }
        return timetableSection;
    }

    //void Timetable::roomTimetable() {
    //    // Build the timetable
    //   /* buildTimetable();*/

    //    // Iterate over days
    //    for (const auto& day : sectionCourses) {
    //        /*cout << "Day: " << day.first << endl;*/

    //        // Create a map to store courses by room
    //        map<Room*, vector<tuple<Course*, Time*, Section*>>> roomCourses;

    //        // Iterate over sections for the day
    //        for (const auto& sectionPair : day.second) {
    //            // Get the section name
    //            const string& sectionName = sectionPair.first;

    //            // Iterate over courses for the section
    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);

    //                // Find the section object from its name
    //                Section* section;
    //                for (const auto& sectionCoursesPair : sectionCourses[day.first]) {
    //                    if (sectionCoursesPair.first == sectionName) {
    //                        // Iterate over the tuples to find the section
    //                        for (auto& het : sectionCoursesPair.second) {
    //                            Course* course = get<0>(het);
    //                        
    //                            // Assuming each tuple contains the same section, get the section from any tuple
    //                            /*section = course->getAssignedSection();*/
    //                            break;
    //                        }
    //                        break;
    //                    }
    //                }

    //                // Add the course to the corresponding room
    //                roomCourses[room].push_back(make_tuple(course, time, section));
    //            }
    //        }

    //        // Display room-wise timetable for the current day
    //        for (const auto& roomCoursePair : roomCourses) {
    //            Room* room = roomCoursePair.first;
    //            vector<tuple<Course*, Time*, Section*>> courses = roomCoursePair.second;

    //            //cout << "Room: " << room->getRoomNumber() << endl;
    //            for (const auto& courseTimeSectionTuple : courses) {
    //                Course* course = get<0>(courseTimeSectionTuple);
    //                Time* time = get<1>(courseTimeSectionTuple);
    //                Section* section = get<2>(courseTimeSectionTuple);

    //                //cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Section: " << section->getName() << endl;
    //            }
    //            //cout << "-----------------------------" << endl;
    //        }
    //    }
    //}

    //vector<string> Timetable::roomTimetable() {
    //   
    //    buildTimetable();
    //    vector<string>timetableRoom;
    //    // Iterate over days
    //    for (const auto& day : sectionCourses) {
    //        /*cout << "Day: " << day.first << endl;*/

    //        // Create a map to store courses by room
    //        map<Room*, vector<tuple<Course*, Time*, Section*>>> roomCourses;

    //        // Iterate over sections for the day
    //        for (const auto& sectionPair : day.second) {
    //            // Get the section name
    //            const string& sectionName = sectionPair.first;

    //            // Iterate over courses for the section
    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Course* course = get<0>(courseTimeRoomTuple);
    //                Time* time = get<1>(courseTimeRoomTuple);
    //                Room* room = get<2>(courseTimeRoomTuple);

    //                // Find the section object from its name
    //                Section* section = nullptr;
    //                for (const auto& sectionCoursesPair : sectionCourses[day.first]) {
    //                    if (sectionCoursesPair.first == sectionName) {
    //                        // Iterate over the tuples to find the section
    //                        for (auto& het : sectionCoursesPair.second) {
    //                            Course* course = get<0>(het);

    //                            // Assuming each tuple contains the same section, get the section from any tuple
    //                            /*section = course->getAssignedSection();*/
    //                            break;
    //                        }
    //                        break;
    //                    }
    //                }

    //                // Add the course to the corresponding room
    //                roomCourses[room].push_back(make_tuple(course, time, section));
    //            }
    //        }

    //        // Display room-wise timetable for the current day
    //        for (const auto& roomCoursePair : roomCourses) {
    //            Room* room = roomCoursePair.first;
    //            vector<tuple<Course*, Time*, Section*>> courses = roomCoursePair.second;
    //           
    //            timetableRoom.push_back(room->getRoomNumber());
    //            //cout << "Room: " << room->getRoomNumber() << endl;
    //            for (const auto& courseTimeSectionTuple : courses) {
    //                Course* course = get<0>(courseTimeSectionTuple);
    //                Time* time = get<1>(courseTimeSectionTuple);
    //                Section* section = get<2>(courseTimeSectionTuple);
    //                timetableRoom.push_back("Course: " + course->getCourseName());
    //                timetableRoom.push_back(" Time : " + time->getStartTime() + " - " + time->getEndTime());
    //                timetableRoom.push_back(" Section : " + section->getName());
    //                //cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Section: " << section->getName() << endl;
    //            }
    //            //cout << "-----------------------------" << endl;
    //        }
    //    }
    //    return timetableRoom;
    //}

    vector<string> Timetable::roomTimetable() {
        // Build the timetable
        buildTimetable();
        vector<string>timetableRoom;

        // Iterate over days
        for (const auto& day : sectionCourses) {
            //cout << "Day: " << day.first << endl;

            // Create a map to store courses by room
            map<Room*, vector<tuple<Course*, Time*, Section*>>> roomCourses;

            // Iterate over sections for the day
            for (const auto& sectionPair : day.second) {
                // Get the section name
                const string& sectionName = sectionPair.first;

                // Iterate over courses for the section
                for (const auto& courseTimeRoomTuple : sectionPair.second) {
                    Course* course = get<0>(courseTimeRoomTuple);
                    Time* time = get<1>(courseTimeRoomTuple);
                    Room* room = get<2>(courseTimeRoomTuple);

                    // Find the section object from its name
                    Section* section = nullptr;
                    for (const auto& sectionCoursesPair : sectionCourses[day.first]) {
                        if (sectionCoursesPair.first == sectionName) {
                            // Iterate over the tuples to find the section
                            for (const auto& tuple : sectionCoursesPair.second) {
                                Course* course = std::get<0>(tuple);
                                // Assuming each tuple contains the same section, get the section from any tuple
                                section = course->getAssignedSection();
                                break;
                            }
                            break;
                        }
                    }

                    // Add the course to the corresponding room
                    roomCourses[room].push_back(make_tuple(course, time, section));
                }
            }

            // Display room-wise timetable for the current day
            for (const auto& roomCoursePair : roomCourses) {
                Room* room = roomCoursePair.first;
                vector<tuple<Course*, Time*, Section*>> courses = roomCoursePair.second;

                //cout << "Room: " << room->getRoomNumber() << endl;
                for (const auto& courseTimeSectionTuple : courses) {
                    timetableRoom.push_back(room->getRoomNumber());
                    Course* course = get<0>(courseTimeSectionTuple);
                    Time* time = get<1>(courseTimeSectionTuple);
                    Section* section = get<2>(courseTimeSectionTuple);
                    timetableRoom.push_back(course->getCourseName());
                    timetableRoom.push_back(time->getStartTime() + " - " + time->getEndTime());
                    timetableRoom.push_back(section->getName());

                    //  cout << "Course: " << course->getCourseName() << ", Time: " << time->getStartTime() << " - " << time->getEndTime() << ", Section: " << section->getName() << endl;
                }
                cout << "-----------------------------" << endl;
            }
        }
        return timetableRoom;
    }

    //void whoIsTeachingAt(string day, string time) {
    //    buildTimetable();
    //    cout << "Courses and Details at " << time << " on " << day << ":" << endl;
    //
    //    // Check if the provided day exists in the sectionCourses map
    //    if (sectionCourses.find(day) != sectionCourses.end()) {
    //        // Iterate over sections for the given day
    //        for (const auto& sectionPair : sectionCourses[day]) {
    //            // Iterate over courses for the section
    //            for (const auto& courseTimeRoomTuple : sectionPair.second) {
    //                Time* courseTime = get<1>(courseTimeRoomTuple);
    //                // Check if the course starts at the provided time
    //                if (courseTime->getStartTime() == time) {
    //                    Course* course = get<0>(courseTimeRoomTuple);
    //                    Room* room = get<2>(courseTimeRoomTuple);
    //                    Teacher* teacher = course->getTeacher();
    //
    //                    cout << "Course: " << course->getCourseName() << endl;
    //                    cout << "Teacher: " << teacher->getName() << endl;
    //                    cout << "Room: " << room->getRoomNumber() << endl;
    //                    cout << "Section: " << sectionPair.first << endl;
    //                    // Add more details as needed
    //                    cout << "Time: " << courseTime->getStartTime() << " - " << courseTime->getEndTime() << endl;
    //                    cout << endl;
    //                }
    //            }
    //        }
    //    }
    //    else {
    //        cout << "No courses scheduled for " << day << endl;
    //    }
    //}

    vector<Time*> Timetable::createTimeSlots() {
        vector<Time*> times;
        times.push_back(new Time("8:30", "9:30"));
        times.push_back(new Time("9:30", "10:30"));
        times.push_back(new Time("10:30", "11:30"));
        times.push_back(new Time("11:30", "12:30"));
        times.push_back(new Time("12:30", "1:30"));
        times.push_back(new Time("1:30", "2:30"));
        return times;
    }
    void Timetable::buildTimetable() {
        // Define rooms
        Room* room1 = new Room("4-17", 50);
        Room* room2 = new Room("4-18", 50);
        Room* room3 = new Room("4-19", 50);
        Room* room4 = new Room("4-01 Lab", 50);
        Room* room5 = new Room("4-02 Lab", 50);

        // Define teachers
        Teacher* teacher1 = new Teacher("Waleed", 201, "Waleed123@gmail.com");
        Teacher* teacher2 = new Teacher("Tamim", 202, "Tamim@gmail.com");
        Teacher* teacher3 = new Teacher("Sadaf", 203, "Sadaf@gmail.com");
        Teacher* teacher4 = new Teacher("Awais", 204, "Awais@gmail.com");

        // Define time slots
        vector<Time*> times = createTimeSlots();

        // Define sections
        Section* section1 = new Section("SE-01");
        Section* section2 = new Section("SE-02");

        // Define students
        Student* student1 = new Student(301, "Ahmad", "ahmad@gmail.com");
        section1->addStudent(student1);
        Student* student2 = new Student(302, "Omer", "omer@gmail.com");
        section1->addStudent(student2);
        // Define more students if needed...

        // Define courses
        Course* course1 = new Course(403, "OOP Lab", teacher1, room1);
        course1->setAssignedSection(section1);
        course1->addStudent(student1);
        course1->addStudent(student2);

        Course* course2 = new Course(404, "OOP", teacher2, room1);
        course2->setAssignedSection(section1);
        course2->addStudent(student1);
        course2->addStudent(student2);
        
        // Schedule courses
        scheduleCourse(course1, times, room4);
        scheduleCourse(course2, times, room5);
        // Schedule more courses if needed...
    }

    void Timetable::scheduleCourse(Course* course, vector<Time*>& times, Room* room) {
        // Shuffle time slots to randomize scheduling
        random_shuffle(times.begin(), times.end());

        // Find an available time slot
        Time* chosenTime = nullptr;
        for (Time* time : times) {
            bool conflict = false;
            for (const auto& day : sectionCourses) {
                for (const auto& sectionPair : day.second) {
                    for (const auto& courseTimeRoomTuple : sectionPair.second) {
                        Time* existingTime = get<1>(courseTimeRoomTuple);
                        if (existingTime->getStartTime() == time->getStartTime() && existingTime->getEndTime() == time->getEndTime()) {
                            conflict = true;
                            break;
                        }
                    }
                    if (conflict) break;
                }
                if (conflict) break;
            }
            if (!conflict) {
                chosenTime = time;
                break;
            }
        }

        if (chosenTime) {
            Section* section = course->getAssignedSection();
            sectionCourses["Monday"][section->getName()].push_back(make_tuple(course, chosenTime, room));
        }
        else {
            cout << "Unable to schedule course: " << course->getCourseName() << endl;
        }
    }

    void Section::addStudent(Student* student) {
        students.push_back(student);
    }

    Time::Time(std::string start, std::string end) :startTime(start), endTime(end) {};
