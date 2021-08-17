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
	string getName();
	//to work on
	int* getGrades();
	//to work on
	void SetGrades();
	void setName();
	double average();
};

