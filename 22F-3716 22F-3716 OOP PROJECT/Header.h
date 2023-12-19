#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;
const int maxteacher = 100;
const int maxstudent = 100;
void setcolor(int text, int background);

class user {
public:
    string Username;
    string password;
};
class TimeTable
{
public:
    const int weekdays = 7;
    string lectures[7];
    string dates[7];
};
class Teacher {
public:
    string firstname, tid, lastname, dep, Username, Password, registrationdate, gender, contactno, qualification, address;
    TimeTable timetable;
    friend void markAttendance(Teacher& teacher);
    friend void assignGrades(Teacher& teacher);
};
class Student
{
    friend class ViewAttendance;
    friend class ViewMarks;
public:
    string firstname;
    string lastname;
    string dep;
    string sid;
    string registrationdate;
    string gender;
    string contactno;
    string bloodgroup;
    string address;
    string feestatus;
    string qualification;
    string username;
    string password;
    int marks;
    
};
class ViewAttendance {
public:
    void displayAttendance(Student& student);
};
class ViewMarks {
public:
    void displayMarks(Student& student);
};
class Administrator : public Student, public Teacher, public TimeTable
{
public:
    string firstname, tid, lastname, dep, Username, Password, registrationdate, bloodgroup, gender, contactno, qualification, address;
    int marks;
    Student studentObject;
    ViewAttendance attendanceViewer;
    Administrator();
    void signin();
    void addnewteacher();
        void addnewstudent();
        void editStudentDetails();
        void editTeacherDetails();
        void viewAllStudents();
        void viewStudentsByDepartment();
        void searchStudentById();
        void viewAllTeachers();
        void addTimeTable(string tid);
        void displayTimetable(string tid);
        void assignMarks();
        void  markAttendance(string t);
        void assignGrades(string t);
        void displayAttendance();
        void displayMarks();
        void viewRegisteredCourses();
        void viewGrades();
        void viewFeeStatus();
};
