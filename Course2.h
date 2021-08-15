#pragma once
using namespace std;
#include <string.h>
#include <iostream>

class Course
{
private:
	int* TestGrades;
	int* Bohan1Grades;
	int* Bohan2Grades;
	string courseName;
	int NumOfStusdents;

public:
	Course()
	{
		TestGrades = 0;
		Bohan1Grades = 0;
		Bohan2Grades = 0;
		courseName = "";
		NumOfStusdents = 0;
	}
	string getName()
	{
		return  courseName;
	}
	//to work on
	int* getGrades()
	{
		for (int i = 0; i < NumOfStusdents; i++)
		{
			cout << TestGrades[i] << endl;
			cout << Bohan1Grades[i] << endl;
			cout << Bohan2Grades[i] << endl;
		}
	}
	//to work on
	void SetGrades()
	{
		cout << "please enter the First Bohan grade: ";
		cin >> Bohan1Grades[0];
		cout << endl;

		cout << "please enter the second bohan grade: ";
		cin >> Bohan2Grades[0];
		cout << endl;

		cout << "please enter the test grade: ";
		cin >> TestGrades[0];
		cout << endl;
	}
	void setName()
	{
		cout << "please enter the course name: ";
		cin >> courseName;
		cout << endl;
	}
	double average()
	{
		double test_avg;
		double bohan1_avg;
		double bphan2_avg;

		int sum_test;
		int sum_bohan1;
		int sum_bohan2;

		for (int i = 0; i < NumOfStusdents; i++)
		{
			sum_test += TestGrades[i];
			sum_bohan1 += Bohan1Grades[i];
			sum_bohan2 += Bohan2Grades[i];
		}

	}

};

