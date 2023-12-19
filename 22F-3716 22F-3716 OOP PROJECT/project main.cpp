//#include<iostream>
//#include<string>
//#include<Windows.h>
//#include<fstream>
//#include"Header.h"
//using namespace std;
//int main()
//{
//    bool flag = true;
//    int choice = 0;
//    string tid, sid;
//    setcolor(0, 15);
//    cout << "\t\t\t\t|--------------------------------------------|\n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t\t\tWelcome to \n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//    cout << "\t\t\t\t|--------------------------------------------|\n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t\t Flex  Managemnt System !\n";
//    cout << "\t\t\t\t\t\t\t\t\t\n";
//    cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//    while (flag == true)
//    {
//        system("cls");
//        cout << "\t\t\t\t|--------------------------------------------|\n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t\t\tWelcome to \n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//        cout << "\t\t\t\t|--------------------------------------------|\n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t\t Flex  Managemnt System !\n";
//        cout << "\t\t\t\t\t\t\t\t\t\n";
//        cout << "\t\t\t\t|--------------------------------------------|\n\n\n";
//        cout << "    Enter 1 to 4 For which Operation You want to Perform\n\n";
//        cout << "    For Admin Module\t\t\t\tPress (1)\n\n    For Teacher Module\t\t\t\tPress (2)\n \n    For Student Module\t\t\t\tPress (3)\n \n    For Exit\t\t\t\t\tPress (4)\n";
//        cout << "\n\n Enter  Your Choice ";
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
//                    setcolor(10, 15);
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
//                cout << "\nPlease select the operation you want to Perform\n\n";
//                cout << " For New Teacher\t\t\t\tPress (1)\n For Add New Student\t\t\t\tPress (2)\n For Edit Student Details \t\t\tPress (3)\n For Edit Teacher Details\t\t\tPress (4)\n For View Students\t\t\t\tPress (5)\n For View Student by Department\t\t\tPress (6)\n For View Student by ID\t\t\t\tPress (7)\n For View Teachers\t\t\t\tPress (8)\n For EXIT\t\t\t\t\tPress (9)\n";
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
//                    setcolor(2, 15);
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
//                cout << "\n Please enter 1-6 To Perform Desired Operation\n";
//                cout << " For Add Timetable\t\t\t\tPress (1)\n For View Timetable\t\t\t\tPress (2)\n For Assign Marks\t\t\t\tPress (3)\n For Mark Attendence\t\t\t\tPress (4)\n For Assign Grades\t\t\t\tPress (5)\n For EXIT\t\t\t\t\tPress (6)\n";
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
//                    break;
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
//                    break;
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
//                    break;
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
//                    setcolor(4, 15);
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
//                cout << "\n Please enter (1-6) to Perform Operation \n";
//                cout << " For View Attendance\t\t\t\tPress (1)\n For View Marks\t\t\t\t\tPress (2)\n For View Courses\t\t\t\tPress (3)\n For View Grades\t\t\t\tPress (4)\n For View FeeStatus\t\t\t\tPress (5)\n EXIT \t\t\t\t\t\tPress (6)\n";
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
