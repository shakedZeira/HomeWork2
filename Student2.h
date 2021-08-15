#pragma once
#include <iostream>
#include "Course2.h"
#include <random>
#include <string>
#include <string_view>
using namespace std;


class Student
{
private:
	string name;
	int NumOfCourses;
	Course* Courses;

public:
	Student()
	{
		name = "";
		NumOfCourses = 0;
		Courses = NULL;
		
	}
	string GetName()
	{
		return name;
	}
	void InitData()
	{
		for (int i = 0; i < NumOfCourses; i++)
		{
			Courses[i].setName();
			Courses[i].SetGrades();

		}
		cout <<" student : " << name << "Courses : ";
		for (int j = 0; j < NumOfCourses; j++)
		{
			Courses[j].getName();
		}
	}
	void setName()
	{
		cout << "enter a name: ";
		cin >> name;
		cout << endl;

	}
	void setNumCourses()
	{
		cout << "enter the num of courses participated :";
		cin >> NumOfCourses;
		cout << endl;
	}
	int GetNumCourses()
	{
		return NumOfCourses;
	}
	double average()
	{
		double SumAvg = 0;
		int magicbouns = 0;
		double TrueAvg = 0;

		for (int i = 0; i < NumOfCourses; i++)
		{
			SumAvg += Courses[i].average();
			string CousreName = Courses[i].getName();

		}
		//need to check random bouns;
		//need to check magic bonus;
		TrueAvg = (SumAvg + magicbouns/* + randomBonus*/ / NumOfCourses);

		return TrueAvg;
	}
};