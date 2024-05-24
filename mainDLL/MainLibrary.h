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
class Course {
    int courseCode;
    std::string courseName;
    Room* assignedRoom;
    Teacher* teacher;
    Section* assignedSection;
    Time* assignedTime;


public:
    std::vector<Student*> enrolledStudents;
    Course(int courseCode1, const std::string& coursename)
    {
        courseCode = courseCode1;
        courseName = coursename;
        assignedSection = nullptr;
        assignedTime = nullptr;
    }
    Course(int courseCode, const std::string& courseName, Teacher* teacher, Room* assignedRoom)
        : courseCode(courseCode), courseName(courseName), teacher(teacher), assignedRoom(assignedRoom), assignedSection(nullptr), assignedTime(nullptr) {}


    void addStudent(Student* student) {
            enrolledStudents.push_back(student);
    }

    void removeStudent(Student* student) {
        auto it = find(enrolledStudents.begin(), enrolledStudents.end(), student);
        if (it != enrolledStudents.end()) {
            enrolledStudents.erase(it);
        }
    }
    void viewStudents() const;

    std::string getCourseName() const {
        return courseName;
    }
    int getCourseCode() const
    {
        return courseCode;
    }
    Teacher* getTeacher() const;
    Room* getAssignedRoom() const;
    Section* getAssignedSection() const { return assignedSection; }
    void setAssignedSection(Section* section) {
        assignedSection = section;
    }
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
    std::string getRoomNumber() const;
    /*int getcapacity() const;*/
};

class MainLibrary_API Section {
private:
    std::string name;
    std::vector<Student*> students;

public:
    Section(const std::string& secname);

    const std::string& getName();

    void addStudent(Student* student);

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
   
    std::string name, email, section;


public:
    int studentID;
    std::vector<Course*>coursesEnrolled;
    Student(int ID, std::string na, std::string mail);
    Student(int ID, std::string na, std::string mail, std::string Section);
    void enrollCourse(Course* course);
    void dropCourse(Course* course);
    void viewCourses(Course* course);
    std::string getstudentname();
    std::string getsection()const;
    std::string getemail() {
        return email;
    }
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
    std::string getName();
    int getteacherid();
};

class MainLibrary_API Time {
private:
    std::string startTime, endTime;
public:
    Time(std::string start, std::string end);
    std::string getStartTime();
    std::string getEndTime();
};


   class MainLibrary_API Timetable {
    public:
        Timetable();
        std::map<std::string, std::map<std::string, std::vector<std::tuple<Course*, Time*, Room*>>>> sectionCourses;
        void buildTimetable();
        void scheduleCourse(Course* course, std::vector<Time*>& times, Room* room);
        std::vector<std::string> teacherTimetable();
        std::vector<std::string> studentTimetable();
        std::vector<std::string> sectionTimetable();
        std::vector<std::string> roomTimetable();
        void whoIsTeachingAt(std::string day, std::string time);
        void getTimeTableForDay(std::string day);
        std::vector<Time*> createTimeSlots();
        void writeTimetableToFile(const std::string& filename, const std::string& content);
        void writeTeacherTimetableToFile();
        void writeStudentTimetableToFile();
    };


extern "C" MainLibrary_API bool login(std::string username, std::string password, std::string usernamedb, std::string passworddb);

//extern "C" MainLibrary_API std::vector<std::string>Test();