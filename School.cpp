
#include <iostream>
#include "Student2.h"
#include "Course2.h"
using namespace std;

int main()
{
    Student stu;


    int choice;
    cout << "Welcome to Alon School! you have to follwoing options: " << endl;
    cout << "Add a new student to the schoo (press 1) " << endl;
    cout << "Cauclate average grade of all students (press 2)" << endl;
    cout << "show all students in order of their grades (press3) " << endl;
    cout << "exit (press 4) " << endl;
    cout << "please enter you choice: ";
    cin >> choice;
    cout << endl;
    while (choice != 4)
    {
        if (choice == 1)
        {
            stu.setName();
            stu.setNumCourses();
            stu.InitData(); 
        }
        if (choice == 2)
        {
            //to work on
        }
        if (choice == 3)
        {
            //to work on
        }
        if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "ERROR please enter a num between 1-4" << endl;
        }
        cout << "please enter you choice: ";
        cin >> choice;
    }

}

