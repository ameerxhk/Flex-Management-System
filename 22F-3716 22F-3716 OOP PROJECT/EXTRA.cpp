//#include<iostream>
//#include<string>
//#include<fstream>
//#include<Windows.h>
//using namespace std;
//const int maxteacher = 100;
//const int maxstudent = 100;
//void setcolor(int text, int background);
//class user {
//public:
//    string Username;
//    string password;
//    virtual void signin() = 0;
//};
//class TimeTable
//{
//public:
//    const int weekdays = 7;
//    string lectures[7];
//    string dates[7];
//    friend ostream& operator<<(ostream& os, const TimeTable& timetable)
//    {
//        os << "Timetable:\n";
//        for (int i = 0; i < timetable.weekdays; ++i)
//        {
//            os << "Day " << i + 1 << ": " << "Date: " << timetable.dates[i] << ", Lecture: " << timetable.lectures[i] << "\n";
//        }
//        return os;
//    }
//
//    void addTimeTable(string tid)
//    {
//        cout << "Enter Timetable for the Week:" << endl;
//
//        for (int i = 0; i < weekdays; ++i)
//        {
//            cout << "Enter Lecture for Day " << i + 1 << ": ";
//            cin >> lectures[i];
//            cout << "Enter Date for Day " << i + 1 << ": ";
//            cin >> dates[i];
//        }
//
//        ofstream timetableFile("teacher_timetable.txt", ios::app);
//
//        if (timetableFile.is_open())
//        {
//            timetableFile << "Teacher ID: " << tid << "\n";
//            timetableFile << *this;
//            timetableFile << "\n";
//            timetableFile.close();
//            cout << "Timetable added successfully for Teacher with ID " << tid << endl;
//        }
//        else
//        {
//            cout << "Error: Unable to open teacher_timetable.txt for writing" << endl;
//        }
//    }
//    void displayTimetable(string tid)
//    {
//        ifstream timetableFile("teacher_timetable.txt");
//        bool found = false;
//
//        if (timetableFile.is_open())
//        {
//            string line;
//            while (getline(timetableFile, line))
//            {
//                if (line.find("Teacher ID: " + tid) != string::npos)
//                {
//                    found = true;
//                    cout << "Timetable for Teacher with ID " << tid << ":\n";
//                    while (getline(timetableFile, line) && !line.empty())
//                    {
//                        cout << line << endl;
//                    }
//                    break;
//                }
//            }
//
//            timetableFile.close();
//
//            if (!found)
//            {
//                cout << "No timetable found for Teacher with ID " << tid << endl;
//            }
//        }
//        else
//        {
//            cout << "Error: Unable to open teacher_timetable.txt for reading" << endl;
//        }
//    }
//};
//class Teacher {
//public:
//    string firstname, tid, lastname, dep, Username, Password, registrationdate, gender, contactno, qualification, address;
//    TimeTable timetable;
//    void signin()
//    {
//        string tusername, tpassword;
//        cout << "Enter User Name: ";
//        cin >> tusername;
//        cout << "Enter Password: ";
//        cin >> tpassword;
//
//        ifstream credentialsFile("teachers_credentials.txt ");
//        string fileUsername, filePassword;
//        bool found = false;
//
//        while (credentialsFile >> Username >> Password) {
//
//            if (tusername == fileUsername && tpassword == filePassword) {
//                found = true;
//                break;
//            }
//        }
//
//        credentialsFile.close();
//
//        if (found) {
//            cout << "Teacher with ID " << tid << " successfully signed in." << endl;
//        }
//        else {
//            cout << "Incorrect Username or Password." << endl;
//        }
//    }
//
//    void assignMarks() {
//        ifstream studentFile("Student.csv");
//        ofstream marksFile("marks.csv", ios::app);
//
//        if (!studentFile.is_open() || !marksFile.is_open()) {
//            cout << "Error: Unable to open files for assigning marks" << endl;
//            return;
//        }
//
//        string studentId;
//        cout << "Enter Student ID to assign marks: ";
//        cin >> studentId;
//
//        bool found = false;
//
//        cout << "Enter marks for Student with ID " << studentId << " in the following courses:" << endl;
//
//        for (int i = 1; i <= 4; ++i) {
//            string course;
//            cout << "Enter Course " << i << ": ";
//            cin >> course;
//
//            cout << "Enter Marks for Student with ID " << studentId << " in Course " << course << ": ";
//            int marks;
//            cin >> marks;
//
//            marksFile << "Student ID: " << studentId << ", Course: " << course << ", Marks: " << marks << "\n";
//            cout << "Marks assigned successfully for Student with ID " << studentId << " in Course " << course << endl;
//
//            found = true;
//        }
//
//        studentFile.close();
//        marksFile.close();
//
//        if (!found) {
//            cout << "Student with ID " << studentId << " not found." << endl;
//        }
//    }
//    friend void markAttendance(Teacher& teacher);
//    friend void assignGrades(Teacher& teacher);
//};
//void markAttendance(Teacher& teacher)
//{
//    ifstream studentFile("Student.csv");
//    ofstream attendanceFile("student_attendance.txt", ios::app);
//
//    if (!studentFile.is_open() || !attendanceFile.is_open()) {
//        cout << "Error: Unable to open files for marking attendance" << endl;
//        return;
//    }
//
//    string studentId;
//    cout << "Enter Student ID to mark attendance: ";
//    cin >> studentId;
//
//    bool found = false;
//    while (!studentFile.eof()) {
//        string line;
//        getline(studentFile, line);
//        if (line.find("Student ID: " + studentId) != string::npos) {
//            found = true;
//
//            for (int i = 1; i <= 4; ++i) {
//                string date;
//                string course;
//
//                cout << "Enter Course for marking attendance (e.g., Course" << i << "): ";
//                cin >> course;
//
//                cout << "Enter Date for marking attendance in " << course << ": ";
//                cin >> date;
//
//                attendanceFile << "Student ID: " << studentId << ", Course: " << course << ", Date: " << date << ", Attendance: Present\n";
//                cout << "Attendance marked successfully for Student with ID " << studentId << " in " << course << endl;
//            }
//            break;
//        }
//    }
//
//    studentFile.close();
//    attendanceFile.close();
//
//    if (!found) {
//        cout << "Student with ID " << studentId << " not found." << endl;
//    }
//}
//
//void assignGrades(Teacher& teacher)
//{
//    ifstream studentFile("Student.csv");
//    ofstream gradesFile("grades.csv", ios::app);
//
//    if (!studentFile.is_open() || !gradesFile.is_open()) {
//        cout << "Error: Unable to open files for assigning grades" << endl;
//        return;
//    }
//
//    string studentId;
//    cout << "Enter Student ID to assign grades: ";
//    cin >> studentId;
//
//    bool found = false;
//
//    cout << "Enter grades for Student with ID " << studentId << " in the following courses:" << endl;
//
//    for (int i = 1; i <= 4; ++i) {
//        string course;
//        cout << "Enter Course " << i << ": ";
//        cin >> course;
//
//        cout << "Enter Grades for Student with ID " << studentId << " in Course " << course << ": ";
//        string grades;
//        cin.ignore();
//        getline(cin, grades);
//
//        gradesFile << "Student ID: " << studentId << ", Course: " << course << ", Grades: " << grades << "\n";
//        cout << "Grades assigned successfully for Student with ID " << studentId << " in Course " << course << endl;
//
//        found = true;
//    }
//
//    studentFile.close();
//    gradesFile.close();
//
//    if (!found) {
//        cout << "Student with ID " << studentId << " not found." << endl;
//    }
//}
//class Student :public user
//{
//    friend class ViewAttendance;
//    friend class ViewMarks;
//public:
//    string firstname;
//    string lastname;
//    string dep;
//    string sid;
//    string registrationdate;
//    string gender;
//    string contactno;
//    string bloodgroup;
//    string address;
//    string feestatus;
//    string qualification;
//    int marks;
//    void signin()
//    {
//        string susername, spassword;
//        cout << "Enter User Name: ";
//        cin >> susername;
//        cout << "Enter Password: ";
//        cin >> spassword;
//
//        ifstream credentialsFile("Student.csv");
//        string Username, Password;
//        bool found = false;
//
//        while (credentialsFile >> Username >> Password)
//        {
//            if (susername == Username && spassword == Password)
//            {
//                found = true;
//                break;
//            }
//        }
//
//        credentialsFile.close();
//
//        if (found)
//        {
//            cout << "Student with ID " << sid << " successfully signed in." << endl;
//
//        }
//        else
//        {
//            cout << "Incorrect Username or Password." << endl;
//        }
//    }
//    void viewGrades()
//    {
//        ifstream gradesFile("grades.csv");
//        if (!gradesFile.is_open())
//        {
//            cout << "Error: Unable to open grades.csv for reading" << endl;
//            return;
//        }
//
//        string studentId;
//        cout << "Enter Student ID to view grades: ";
//        cin >> studentId;
//
//        cout << "**** Grades for Student ID " << studentId << " ****" << endl;
//        bool found = false;
//        while (!gradesFile.eof())
//        {
//            string line;
//            getline(gradesFile, line);
//            if (line.find("Student ID: " + studentId) != string::npos)
//            {
//                cout << line << endl;
//                found = true;
//            }
//        }
//
//        gradesFile.close();
//        if (!found)
//        {
//            cout << "No grades records found for Student with ID " << studentId << endl;
//        }
//    }
//    void viewRegisteredCourses() {
//        ifstream coursesFile("registered_courses.txt");
//        if (!coursesFile.is_open()) {
//            cout << "Error: Unable to open registered_courses.txt for reading" << endl;
//            return;
//        }
//
//        cout << "**** Registered Courses ****" << endl;
//        string studentId;
//        cout << "Enter Student ID to view registered courses: ";
//        cin >> studentId;
//
//        bool found = false;
//        while (!coursesFile.eof()) {
//            string line;
//            getline(coursesFile, line);
//            if (line.find("Student ID: " + studentId) != string::npos) {
//                found = true;
//                cout << line << endl;
//                for (int i = 0; i < 4; ++i) {
//                    getline(coursesFile, line);
//                    cout << line << endl;
//                }
//                cout << endl;
//            }
//        }
//
//        coursesFile.close();
//
//        if (!found) {
//            cout << "No registered courses found for Student with ID " << studentId << endl;
//        }
//    }
//
//    void viewFeeStatus() {
//        ifstream studentFile("Student.csv");
//        if (!studentFile.is_open()) {
//            cout << "Error: Unable to open Student.csv for reading" << endl;
//            return;
//        }
//
//        string studentId;
//        cout << "Enter Student ID to view fee status: ";
//        cin >> studentId;
//
//        bool found = false;
//
//        while (!studentFile.eof()) {
//            string line;
//            getline(studentFile, line);
//            size_t foundSid = line.find("Student ID: " + studentId);
//
//            if (foundSid != string::npos) {
//                cout << "Student ID: " << studentId << endl;
//                cout << line << endl;
//                while (getline(studentFile, line) && !line.empty()) {
//                    cout << line << endl;
//                }
//                cout << "-----------------------" << endl;
//
//                found = true;
//                break;
//            }
//        }
//
//        studentFile.close();
//
//        if (!found) {
//            cout << "Student with ID " << studentId << " not found or fee status not available." << endl;
//        }
//    }
//};
//class ViewAttendance {
//public:
//    void displayAttendance(Student& student);
//};
//
//class ViewMarks {
//public:
//    void displayMarks(Student& student);
//};
//void ViewAttendance::displayAttendance(Student& student)
//{
//    ifstream attendanceFile("student_attendance.txt");
//    if (!attendanceFile.is_open()) {
//        cout << "Error: Unable to open student_attendance.txt for reading" << endl;
//        return;
//    }
//
//    string studentId = student.sid;
//
//    cout << "**** Attendance for Student ID " << studentId << " ****" << endl;
//    bool found = false;
//    while (!attendanceFile.eof()) {
//        string line;
//        getline(attendanceFile, line);
//        if (line.find("Student ID: " + studentId) != string::npos) {
//            cout << line << endl;
//            found = true;
//        }
//    }
//
//    attendanceFile.close();
//
//    if (!found) {
//        cout << "No attendance records found for Student with ID " << studentId << endl;
//    }
//}
//void ViewMarks::displayMarks(Student& student)
//{
//    ifstream marksFile("marks.csv");
//    if (!marksFile.is_open()) {
//        cout << "Error: Unable to open marks.csv for reading" << endl;
//        return;
//    }
//
//    string studentId = student.sid;
//
//    cout << "**** Marks for Student ID " << studentId << " ****" << endl;
//    bool found = false;
//    while (!marksFile.eof()) {
//        string line;
//        getline(marksFile, line);
//        if (line.find("Student ID: " + studentId) != string::npos) {
//            cout << line << endl;
//            found = true;
//        }
//    }
//
//    marksFile.close();
//
//    if (!found) {
//        cout << "No marks records found for Student with ID " << studentId << endl;
//    }
//}
//class Administrator : public Student, public Teacher, public TimeTable
//{
//public:
//    string firstname, tid, lastname, dep, Username, Password, registrationdate, bloodgroup, gender, contactno, qualification, address;
//    int marks;
//    Administrator()
//    {
//        Username = "";
//        password = "";
//    }
//    Administrator(string username, string password)
//    {
//        this->Username = username;
//        this->password = password;
//    };
//
//    void signin()
//    {
//        string eusername, epassword;
//        cout << "Enter User Name: ";
//        cin >> eusername;
//        cout << "Enter Password: ";
//        cin >> epassword;
//
//        ifstream credentialsFile("admin_credentials.txt");
//        string fileUsername, filePassword;
//        bool found = false;
//
//        while (credentialsFile >> fileUsername >> filePassword) {
//            if (eusername == fileUsername && epassword == filePassword) {
//                found = true;
//                break;
//            }
//        }
//
//        credentialsFile.close();
//
//        if (found) {
//            cout << "Admin with successfully signed in." << endl;
//        }
//        else {
//            cout << "Incorrect Username or Password." << endl;
//        }
//    }
//    void addnewteacher()
//    {
//        int numteacher, dchoice;
//        cout << "Enter Number of Teachers You want to Enter " << endl;
//        cin >> numteacher;
//
//        if (numteacher < maxteacher) {
//            Teacher* teachers = new Teacher[numteacher];
//
//            for (int i = 0; i < numteacher; ++i)
//            {
//                cout << "Enter Teacher First Name " << endl;
//                cin >> teachers[i].firstname;
//                cout << "Enter Teacher Last Name " << endl;
//                cin >> teachers[i].lastname;
//                cout << "Enter 1 For Computer Science Department " << endl;
//                cout << "Enter 2 For Electrical Engineering  " << endl;
//                cout << "Enter 3 For Software Engineering " << endl;
//                cout << "Enter 4 For Business " << endl;
//                cout << "Enter 5 For Social Studies " << endl;
//                cout << "Enter Department Choice  " << endl;
//                cin >> dchoice;
//                switch (dchoice) {
//                case 1:
//                    teachers[i].dep = "Computer Science";
//                    break;
//                case 2:
//                    teachers[i].dep = "Electrical Engineering";
//                    break;
//                case 3:
//                    teachers[i].dep = "Software Engineering";
//                    break;
//                case 4:
//                    teachers[i].dep = "Business";
//                    break;
//                case 5:
//                    teachers[i].dep = "Social Studies";
//                    break;
//                default:
//                    cout << "Invalid Department " << endl;
//                    teachers[i].dep = "Unknown";
//                    break;
//                }
//                teachers[i].tid = teachers[i].dep.substr(0, 1) + to_string(i + 1);
//                cout << "Teacher id = " << teachers[i].tid << endl;
//                cout << "Enter User name " << endl;
//                cin >> teachers[i].Username;
//                cout << "Enter Password " << endl;
//                cin >> teachers[i].Password;
//                cout << "Enter Registration Date " << endl;
//                cin >> teachers[i].registrationdate;
//                cout << "Enter Gender " << endl;
//                cin >> teachers[i].gender;
//                cout << "Enter Contact No " << endl;
//                cin >> teachers[i].contactno;
//                cout << "Enter Qualification " << endl;
//                cin >> teachers[i].qualification;
//                cout << "Enter Address " << endl;
//                cin.ignore();
//                getline(cin, teachers[i].address);
//            }
//            ofstream credentialsFile("teachers_credentials.txt", ios::app);
//
//            if (credentialsFile.is_open()) {
//                for (int i = 0; i < numteacher; i++) {
//                    credentialsFile << teachers[i].Username << " " << teachers[i].Password << endl;
//                }
//                credentialsFile.close();
//            }
//            ofstream outfile("Teacher.csv", ios::app);
//            if (outfile.is_open())
//            {
//                for (int i = 0; i < numteacher; i++)
//                {
//                    /*outfile << " Teacher   " << i + 1 << " Data " << endl;*/
//                    outfile << "Teacher ID: " << teachers[i].tid << "\n"
//                        << "First Name: " << teachers[i].firstname << "\n"
//                        << "Last Name: " << teachers[i].lastname << "\n"
//                        << "Department: " << teachers[i].dep << "\n"
//                        << "Username: " << teachers[i].Username << "\n"
//                        << "Password: " << teachers[i].Password << "\n"
//                        << "Registration Date: " << teachers[i].registrationdate << "\n"
//                        << "Gender: " << teachers[i].gender << "\n"
//                        << "Contact No: " << teachers[i].contactno << "\n"
//                        << "Qualification: " << teachers[i].qualification << "\n"
//                        << "Address: " << teachers[i].address << "\n\n";
//                }
//                outfile.close();
//                cout << "Teacher data successfully saved in Teacher.txt" << endl;
//
//            }
//            else {
//                cout << "Error: Unable to open Teacher.txt for writing" << endl;
//            }
//            delete[] teachers;
//            cout << "Teachers added successfully!\n";
//        }
//        else {
//            cout << "Maximum number of teachers reached. Cannot add more.\n";
//        }
//    }
//    void addnewstudent() {
//        int numstudents, dchoice;
//        cout << "Enter Number of Students You want to Enter " << endl;
//        cin >> numstudents;
//
//        if (numstudents < maxstudent) {
//            Student* students = new Student[numstudents];
//
//            for (int i = 0; i < numstudents; ++i) {
//                cout << "Enter Student First Name " << endl;
//                cin >> students[i].firstname;
//                cout << "Enter Student Last Name " << endl;
//                cin >> students[i].lastname;
//                cout << "Enter 1 For Computer Science Department " << endl;
//                cout << "Enter 2 For Electrical Engineering  " << endl;
//                cout << "Enter 3 For Software Engineering " << endl;
//                cout << "Enter 4 For Business " << endl;
//                cout << "Enter 5 For Social Studies " << endl;
//                cout << "Enter Department Choice  " << endl;
//                cin >> dchoice;
//                switch (dchoice) {
//                case 1:
//                    students[i].dep = "Computer Science";
//                    break;
//                case 2:
//                    students[i].dep = "Electrical Engineering";
//                    break;
//                case 3:
//                    students[i].dep = "Software Engineering";
//                    break;
//                case 4:
//                    students[i].dep = "Business";
//                    break;
//                case 5:
//                    students[i].dep = "Social Studies";
//                    break;
//                default:
//                    cout << "Invalid Department " << endl;
//                    students[i].dep = "Unknown";
//                    break;
//                }
//                students[i].sid = students[i].dep.substr(0, 1) + to_string(i + 1);
//                cout << "Student id = " << students[i].sid << endl;
//                cout << "Enter Student Username " << endl;
//                cin >> students[i].Username;
//                cout << "Enter Student Password " << endl;
//                cin >> students[i].password;
//                cout << "Enter Registration Date " << endl;
//                cin >> students[i].registrationdate;
//                cout << "Enter Gender " << endl;
//                cin >> students[i].gender;
//                cout << "Enter Contact No " << endl;
//                cin >> students[i].contactno;
//                cout << "Enter Blood Group " << endl;
//                cin >> students[i].bloodgroup;
//                cout << "Enter Address " << endl;
//                cin.ignore();
//                getline(cin, students[i].address);
//                cout << "Enter Fee Status " << endl;
//                cin >> students[i].feestatus;
//                cout << "Enter Qualification " << endl;
//                cin >> students[i].qualification;
//                cout << "Enter Marks " << endl;
//                cin >> students[i].marks;
//                ofstream credentialsFile("students_credentials.txt", ios::app);
//                if (credentialsFile.is_open())
//                {
//                    credentialsFile << students[numstudents - 1].Username << " " << students[numstudents - 1].password << endl;
//                    credentialsFile.close();
//                }
//                else
//                {
//                    cout << "Error: Unable to open student_credentials.txt for writing" << endl;
//                }
//            }
//
//            ofstream outfile("Student.csv", ios::app);
//            if (outfile.is_open()) {
//                for (int i = 0; i < numstudents; i++) {
//                    /*outfile << " Student   " << i + 1 << " Data " << endl;*/
//                    outfile << "Student ID: " << students[i].sid << "\n"
//                        << "First Name: " << students[i].firstname << "\n"
//                        << "Last Name: " << students[i].lastname << "\n"
//                        << "Department: " << students[i].dep << "\n"
//                        << "username: " << students[i].Username << "\n"
//                        << "Password: " << students[i].password << "\n"
//                        << "Registration Date: " << students[i].registrationdate << "\n"
//                        << "Gender: " << students[i].gender << "\n"
//                        << "Contact No: " << students[i].contactno << "\n"
//                        << "Blood Group: " << students[i].bloodgroup << "\n"
//                        << "Address: " << students[i].address << "\n"
//                        << "Fee Status: " << students[i].feestatus << "\n"
//                        << "Qualification: " << students[i].qualification << "\n"
//                        << "Marks: " << students[i].marks << "\n\n";
//                }
//                outfile.close();
//                cout << "Student data successfully saved in Student.txt" << endl;
//            }
//            else {
//                cout << "Error: Unable to open Student.txt for writing" << endl;
//            }
//
//            delete[] students;
//            cout << "Students added successfully!\n";
//        }
//
//        else
//        {
//            cout << "Maximum number of students reached. Cannot add more.\n";
//        }
//    }
//    void editStudentDetails()
//    {
//        ifstream infile("Student.csv");
//        ofstream tempFile("tempStudent.csv");
//
//        if (!infile.is_open() || !tempFile.is_open()) {
//            cout << "Error: Unable to open files for editing" << endl;
//            return;
//        }
//
//        string rollNo, feestatus;
//        cout << "Enter the Student Roll No to edit details: ";
//        cin >> rollNo;
//
//        bool found = false;
//        while (!infile.eof()) {
//            string line;
//            getline(infile, line);
//
//
//            if (line.find("Student id = " + rollNo) != string::npos) {
//                found = true;
//                cout << "Editing details for Student with Roll No " << rollNo << endl;
//
//
//                cout << "Enter updated First Name: ";
//                cin >> firstname;
//                cout << "Enter updated Last Name: ";
//                cin >> lastname;
//                cout << "Enter updated Fee Status: ";
//                cin >> feestatus;
//                cout << "Enter updated Address: ";
//                cin.ignore();
//                getline(cin, address);
//                cout << "Enter updated Contact No: ";
//                cin >> contactno;
//                tempFile << "Student id = " << rollNo << endl;
//                tempFile << "First Name " << firstname << endl;
//                tempFile << "Last Name " << lastname << endl;
//                tempFile << "Department Name " << dep << endl;
//                tempFile << "Gender " << gender << endl;
//                tempFile << "Contact no " << contactno << endl;
//                tempFile << "Address " << address << endl;
//                tempFile << "Fee Status " << feestatus << endl;
//                tempFile << "Qualification " << qualification << endl;
//                tempFile << "Marks " << marks << endl;
//                tempFile << endl;
//            }
//            else {
//                tempFile << line << endl;
//            }
//        }
//        infile.close();
//        tempFile.close();
//        remove("Student.csv");
//        rename("tempStudent.csv", "Student.csv");
//
//        if (found) {
//            cout << "Student details updated successfully!" << endl;
//        }
//        else {
//            cout << "Student with Roll No " << rollNo << " not found." << endl;
//        }
//    }
//    void editTeacherDetails() {
//        ifstream infile("Teacher.csv");
//        ofstream tempFile("tempTeacher.csv");
//
//        if (!infile.is_open() || !tempFile.is_open()) {
//            cout << "Error: Unable to open files for editing" << endl;
//            return;
//        }
//
//        string teacherID, salary;
//        cout << "Enter the Teacher ID to edit details: ";
//        cin >> teacherID;
//
//        bool found = false;
//        while (!infile.eof()) {
//            string line;
//            getline(infile, line);
//            if (line.find(" Teacher  ID  " + teacherID) != string::npos) {
//                found = true;
//                cout << "Editing details for Teacher with ID " << teacherID << endl;
//                cout << "Enter updated Address: ";
//                cin.ignore();
//                getline(cin, address);
//                cout << "Enter updated Contact No: ";
//                cin >> contactno;
//                cout << "Enter updated Qualification: ";
//                cin >> qualification;
//                cout << "Enter updated Salary: ";
//                cin >> salary;
//                tempFile << " Teacher  ID  " << teacherID << endl;
//                tempFile << "First Name " << firstname << endl;
//                tempFile << "Last Name " << lastname << endl;
//                tempFile << "Department Name " << dep << endl;
//                tempFile << "Gender " << gender << endl;
//                tempFile << "Contact no " << contactno << endl;
//                tempFile << "Address " << address << endl;
//                tempFile << "Contact No " << contactno << endl;
//                tempFile << "Qualification " << qualification << endl;
//                tempFile << "Salary " << salary << endl;
//            }
//            else {
//                tempFile << line << endl;
//            }
//        }
//
//        infile.close();
//        tempFile.close();
//        remove("Teacher.csv");
//        rename("tempTeacher.csv", "Teacher.csv");
//
//        if (found) {
//            cout << "Teacher details updated successfully!" << endl;
//        }
//        else {
//            cout << "Teacher with ID " << teacherID << " not found." << endl;
//        }
//    }
//    void viewAllStudents() {
//        ifstream infile("Student.csv");
//        if (!infile.is_open()) {
//            cout << "Error: Unable to open Student.csv for reading" << endl;
//            return;
//        }
//
//        cout << "**** All Students ****" << endl;
//        string line;
//        while (getline(infile, line)) {
//            cout << line << endl;
//        }
//
//        infile.close();
//    }
//
//    void viewStudentsByDepartment() {
//        string department;
//        cout << "Enter Department Name: ";
//        cin >> department;
//
//        ifstream infile("Student.csv");
//        if (!infile.is_open()) {
//            cout << "Error: Unable to open Student.csv for reading" << endl;
//            return;
//        }
//
//        cout << "**** Students in Department " << department << " ****" << endl;
//        while (!infile.eof()) {
//            string line;
//            getline(infile, line);
//            if (line.find("Department Name " + department) != string::npos) {
//                cout << line << endl;
//            }
//        }
//
//        infile.close();
//    }
//
//    void searchStudentById() {
//        string studentId;
//        cout << "Enter Student ID to search: ";
//        cin >> studentId;
//
//        ifstream infile("Student.csv");
//        if (!infile.is_open()) {
//            cout << "Error: Unable to open Student.csv for reading" << endl;
//            return;
//        }
//
//        cout << "**** Student Details for ID " << studentId << " ****" << endl;
//        bool found = false;
//        while (!infile.eof()) {
//            string line;
//            getline(infile, line);
//            if (line.find("Student id = " + studentId) != string::npos) {
//                cout << line << endl;
//                found = true;
//            }
//        }
//
//        infile.close();
//
//        if (!found) {
//            cout << "Student with ID " << studentId << " not found." << endl;
//        }
//    }
//
//    void viewAllTeachers() {
//        ifstream infile("Teacher.csv");
//        if (!infile.is_open()) {
//            cout << "Error: Unable to open Teacher.csv for reading" << endl;
//            return;
//        }
//
//        cout << "**** All Teachers ****" << endl;
//        string line;
//        while (getline(infile, line)) {
//            cout << line << endl;
//        }
//
//        infile.close();
//    }
//};
//void setcolor(int text, int background)
//{
//    int color = text + (background << 4);
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, color);
//}
//int main()
//{
//    bool flag = true;
//    int choice = 0;
//    string tid, sid;
//    setcolor(13, 15);
//    cout << "\t\t\t\t|--------------------------------------------|\n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t\tWelcome to Flex  Managemnt System !\n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//    while (flag == true)
//    {
//        system("cls");
//        cout << "\t\t\t\t|--------------------------------------------|\n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t\tWelcome to Flex  Managemnt System !\n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//        cout << "Enter 1 to 4 For which Operation You want to Perform\n\n";
//        cout << "1)Admin Module\n2)Teacher Module \n3)Student Module \n4)Exit\n";
//        cin >> choice;
//        if (cin.fail())
//        {
//            cout << "Enter correct input\n";
//            cin.clear();
//            cin.ignore();
//            continue;
//        }
//        switch (choice)
//        {
//        case 1:
//        {
//
//            string eusername, epassword;
//            cout << "Enter User Name: ";
//            cin >> eusername;
//            cout << "Enter Password: ";
//            cin >> epassword;
//
//            ifstream credentialsFile("admin_credentials.txt");
//            string fileUsername, filePassword;
//            bool flag = false;
//            while (credentialsFile >> fileUsername >> filePassword) {
//                if (eusername == fileUsername && epassword == filePassword)
//                {
//
//                    system("cls");
//
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome to ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    cout << "\nAdmin Autenticated Successfuly\n";
//                    flag = true;
//                    break;
//
//                }
//            }
//
//            while (flag == true)
//            {
//
//                Administrator ad;
//                int operation = 0;
//                cout << "\nPlease select the operation you want to Perform\n";
//                cout << "1)Add New Teacher\n2)Add New Student\n3)Edit Student Details\n4)Edit Teacher Details\n5)View Students\n6)View Student by Department\n7)View Student by ID\n8)View Teachers\n7)EXIT\n";
//                cin >> operation;
//                if (cin.fail())
//                {
//                    cout << "Please Enter correct Option\n";
//                    cin.clear();
//                    cin.ignore();
//                    continue;
//                }
//                switch (operation)
//                {
//                case 1:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome  To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.addnewteacher();
//                    break;
//                }
//
//                case 2:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.addnewstudent();
//                    break;
//                }
//                case 3:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.editStudentDetails();
//                    break;
//                }
//                case 4:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.editTeacherDetails();
//
//                    break;
//                }
//                case 5:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.viewAllStudents();
//
//                    break;
//                }
//                case 6:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcomeTo ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.viewStudentsByDepartment();
//
//                    break;
//                }
//                case 7:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.searchStudentById();
//                    break;
//                }
//                case 8:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tTo ADMIN MODULE !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad.viewAllTeachers();
//                    break;
//                }
//                case 9:
//                {
//                    flag = false;
//                    break;
//                }
//                default:
//                {
//                    cout << "Please enter correct input  !";
//                    break;
//                }
//
//                }
//            }
//            break;
//        }
//        case 2:
//        {
//            //Teacher module
//            string eusername, epassword;
//            cout << "Enter User Name: ";
//            cin >> eusername;
//            cout << "Enter Password: ";
//            cin >> epassword;
//
//            ifstream credentialsFile("teachers_credentials.txt");
//            string Username, Password;
//            bool flag = false;
//            while (credentialsFile >> Username >> Password) {
//                if (eusername == Username && epassword == Password)
//                {
//                    system("cls");
//                    setcolor(11, 15);
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    cout << "\nTeacher Autenticated Successfully\n";
//                    flag = true;
//                    break;
//
//                }
//            }
//            while (flag == true)
//            {
//                Administrator ad1;
//                Teacher t;
//                int operation = 0;
//                cout << "\nPlease enter 1-5 To Perform Desired Operation\n";
//                cout << "1)Add Timetable\n2)View Timetable\n3)Assign Marks\n4)Mark Attendence\n5)Assign Grades\n6)EXIT\n";
//                cin >> operation;
//                if (cin.fail())
//                {
//                    cout << "Please Enter correct Option\n";
//                    cin.clear();
//                    cin.ignore();
//                    continue;
//                }
//                switch (operation)
//                {
//                case 1:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad1.addTimeTable(tid);
//                    break;
//                }
//                case 2:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad1.displayTimetable(tid);
//                    break;
//                }
//                case 3:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    ad1.assignMarks();
//                }
//                case 4:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    markAttendance(t);
//                }
//                case 5:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Teacher Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    assignGrades(t);
//                }
//                case 6:
//                {
//                    flag = false;
//                    break;
//                }
//                }
//            }
//            break;
//        }
//        case 3:
//        {
//            //student module
//            string eusername, epassword;
//            cout << "Enter User Name: ";
//            cin >> eusername;
//            cout << "Enter Password: ";
//            cin >> epassword;
//
//            ifstream credentialsFile("Students_credentials.txt");
//            string fileUsername, filePassword;
//            bool flag = false;
//            while (credentialsFile >> fileUsername >> filePassword)
//            {
//                if (eusername == fileUsername && epassword == filePassword)
//                {
//                    system("cls");
//                    setcolor(12, 4);
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    cout << "\nStudent Autenticated Successsfully\n";
//                    flag = true;
//                    break;
//
//                }
//            }
//            while (flag == true)
//            {
//
//                Administrator A;
//                Student studentObject;
//                ViewAttendance attendanceViewer;
//                ViewMarks marksViewer;
//                int operation = 0;
//                cout << "\nPlease enter (1-5) to Perform Operation \n";
//                cout << "1)View Attendance\n2)View Marks\n3)View Courses\n4)View Grades\n5)View FeeStatus\n6)EXIT\n";
//                cin >> operation;
//                if (cin.fail())
//                {
//                    cout << "Please enter correct input\n";
//                    cin.clear();
//                    cin.ignore();
//                    continue;
//                }
//                switch (operation)
//                {
//                case 1:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome  To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    attendanceViewer.displayAttendance(studentObject);
//                    break;
//                }
//
//                case 2:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    marksViewer.displayMarks(studentObject);
//                    break;
//                }
//                case 3:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    A.viewRegisteredCourses();
//
//                    break;
//                }
//                case 4:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    A.viewGrades();
//
//                    break;
//                }
//                case 5:
//                {
//                    system("cls");
//                    cout << "\t\t\t\t|--------------------------------------------|\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t\tWelcome To Student Module !\n";
//                    cout << "\t\t\t\t\t\t\t\t\t\n";
//                    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//                    A.viewFeeStatus();
//
//                    break;
//                }
//
//                case 6:
//                {
//                    flag = false;
//                    break;
//                }
//                default:
//                {
//                    cout << "Please enter correct input ";
//                    break;
//                }
//
//                }
//            }
//            break;
//
//        }
//        case 4:
//        {
//            flag = false;
//            break;
//        }
//        default:
//        {
//            cout << "Please enter correct input ";
//            break;
//        }
//        }
//
//    }
//    system("pause");
//    return 0;
//}
//
