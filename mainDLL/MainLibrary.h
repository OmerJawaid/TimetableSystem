#pragma once

#ifdef MainLibrary_EXPORTS
#define MainLibrary_API __declspec(dllexport)
#else
#define MainLibrary_API __declspec(dllimport)
#endif

#include <vector>
#include <string>
#include<iostream>
#include<map>
#include<fstream>
#include<sstream>

//extern "C" Dll1_API  const char* get_my_name();

class Room;
class Teacher;
class Section;
class Time;
class Student;
class Course {      //Managed class having errors after including public ref class
    int courseCode;
    std::string courseName;
    Room* assignedRoom;
    Teacher* teacher;
    Section* assignedSection;
    Time* assignedTime;


public:
    std::vector<Student*> enrolledStudents;

    Course(int courseCode, const std::string& coursename)
    {     courseCode = courseCode;
        courseName = coursename;
        assignedSection = nullptr;
        assignedTime = nullptr;
    };

    void addStudent(Student* student);
    void removeStudent(Student* student);
    void viewStudents() const;

    std::string getCourseName() const;
    int getCourseCode() const;
    Teacher* getTeacher() const;
    Room* getAssignedRoom() const;
    Section* getAssignedSection() const { return assignedSection; }
    void setAssignedSection(Section* section) {
        assignedSection = section;
    }

  /*  Section* getAssignedSection() const {
        return assignedSection;
    }*/
    Time* getAssignedTime() const;
    /*void setAssignedSection(Section* section);*/
    void setAssignedRoom(Room* room) {
        assignedRoom= room;
    }
    void teacherAssignCourse(Teacher* teacher) {
        		this->teacher = teacher;
    }

    std::vector<Student*> getEnrolledStudents() const;
};

class MainLibrary_API Room {
private:
    std::string roomNumber;
    std::vector<std::string> total_rooms;
    std::vector<std::string> rooms_available;
    int capacity;
    int count = 0;
    std::vector<std::string> total_labs;
    std::vector<std::string> available_labs;

public:
    Room(std::string r_no, int cap);
    void displayRooms_available();
    void assignRoom(Course* course);
    bool checkAvailabitiy(std::string room_number);
    void update_room(Course* course);
    void bookRoom();
    std::string getRoomNumber() const;
    int getcapacity() const;
};

class MainLibrary_API Section {
private:
    std::string name;
    std::vector<Student*> students;

public:
    Section(const std::string& secname);

    const std::string& getName() const {
        return name;
    }

    void addStudent(Student* student) {
        students.push_back(student);
    }

    void removeStudent(Student* student) {
        auto it = find(students.begin(), students.end(), student);
        if (it != students.end()) {
            students.erase(it);
        }
    }

    const std::vector<Student*>& getStudents() const {
        return students;
    }
};

class MainLibrary_API Student {
private:
    int studentID;
    std::string name, email, section;


public:
    std::vector<Course*>coursesEnrolled;
    Student(int ID, std::string na, std::string mail);
    void enrollCourse(Course* course);
    void dropCourse(Course* course);
    void viewCourses(Course* course);
    std::string getstudentname();
    std::string getsection()const;
    void AssignSection(Section* section);
};

class MainLibrary_API Teacher {
private:
    int teacherID;
    std::string name, email;
    std::vector<Course*> coursesTaught;
public:
    Teacher(std::string n, int ID, std::string em);
    void assignCourse(Course* course);
    void removeCourse(Course* course);
    void viewCourse(Course* course);
    std::string getName()
    {
        return name;
    }
};

class MainLibrary_API Time {
private:
    std::string startTime, endTime;
public:
    Time(std::string start, std::string end) :startTime(start), endTime(end) {};
    std::string getStartTime() { return startTime; }
    std::string getEndTime() { return endTime; }
};

 class MainLibrary_API Timetable {
public:
    std::map<std::string, std::map<std::string, std::vector<std::tuple<Course*, Time*, Room*>>>> sectionCourses;
    void buildTimetable();
    void scheduleCourse(Course* course, std::vector<Time*>& times, Room* room);
    void teacherTimetable();
    void studentTimetable();
    void sectionTimetable();
    void roomTimetable();
    void whoIsTeachingAt(std::string day, std::string time);
    void getTimeTableForDay(std::string day);
    std::vector<Time*> createTimeSlots();
    void writeTimetableToFile(const std::string& filename, const std::string& content);
    void writeTeacherTimetableToFile();
    void writeStudentTimetableToFile();
};


extern "C" MainLibrary_API bool signup(std::string username, std::string password);

extern "C" MainLibrary_API bool login(std::string username, std::string password);
