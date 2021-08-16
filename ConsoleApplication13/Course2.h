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
		TestGrades = NULL;
		Bohan1Grades = NULL;
		Bohan2Grades = NULL;
		NumOfStusdents = 0;
		courseName = "";
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
		for (int  i = 0; i < NumOfStusdents; i++)
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
};

