
#include <iostream>
#include "Student2.h"
#include "Course2.h"
using namespace std;

/////////////////////////////Course Class.//////////////////////////
string Course::getName()
{
    return  courseName;
}
//to work on
int* Course::getGrades()
{
    for (int i = 0; i < NumOfStusdents; i++)
    {
        cout << TestGrades[i] << endl;
        cout << Bohan1Grades[i] << endl;
        cout << Bohan2Grades[i] << endl;
    }
}
//to work on
void Course::SetGrades()
{
    for (int i = 0; i < NumOfStusdents; i++)
    {
        cout << "please enter the First Bohan grade: ";
        cin >> Bohan1Grades[i];
        cout << endl;
        cout << "please enter the second bohan grade: ";
        cin >> Bohan2Grades[i];
        cout << endl;
        cout << "please enter the test grade: ";
        cin >> TestGrades[i];
        cout << endl;
    }
}
void Course::setName()
{
    cout << "please enter the course name: ";
    cin >> courseName;
    cout << endl;
}
double Course::average()
{
    double test_avg;
    double bohan1_avg;
    double bohan2_avg;

    int sum_test;
    int sum_bohan1;
    int sum_bohan2;

    for (int i = 0; i < NumOfStusdents; i++)
    {
        sum_test += TestGrades[i];
        sum_bohan1 += Bohan1Grades[i];
        sum_bohan2 += Bohan2Grades[i];
    }
    test_avg = sum_test / NumOfStusdents;
    bohan1_avg = sum_bohan1 / NumOfStusdents;
    bohan2_avg = sum_bohan2 / NumOfStusdents;

    double trueAverage = (0.5 * test_avg) + (0.25 * bohan1_avg) + (0.25 * bohan2_avg);
    return trueAverage;
}
/////////////////////////Student Class///////////////////////////
string Student::GetName()
{
    return name;
}
void Student::InitData()
{
    for (int i = 0; i < NumOfCourses; i++)
    {
        Courses[i].setName();
        Courses[i].SetGrades();
    }
    cout << " student : " << name << "Courses : ";
    for (int j = 0; j < NumOfCourses; j++)
    {
        Courses[j].getName();
    }
}
void Student::setName()
{
    cout << "enter a name: ";
    cin >> name;
    cout << endl;
}
void Student::setNumCourses()
{
    cout << "enter the num of courses participated :";
    cin >> NumOfCourses;
    cout << endl;
}
int Student::GetNumCourses()
{
    return NumOfCourses;
}
double Student::average()
{
    double SumAvg = 0;
    int magicbouns = 0;
    double TrueAvg = 0;
    for (int i = 0; i < NumOfCourses; i++)
    {
        SumAvg += Courses[i].average();
        string CousreName = Courses[i].getName();
        int lenName = CousreName.length();
        if (CousreName[lenName - 1] == 'y')
        {
            magicbouns += 1;
        }
        else if (CousreName[lenName - 1] == 'e')
        {
            magicbouns += 2;
        }
        else if (CousreName[lenName - 1] == 'h')
        {
            magicbouns += 5;
        }
    }
    int randomBonus = 1 + (rand() % 11);
    TrueAvg = (SumAvg + magicbouns + randomBonus / NumOfCourses);
    return TrueAvg;
}
void initlaizeSchool()
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

int main()
{
    initlaizeSchool();
}

