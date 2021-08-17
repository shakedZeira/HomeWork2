#pragma once
#include <iostream>
#include "Course2.h"
#include <random>
#include <string>
#include <string_view>
#include <random>
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
	string GetName();
	void InitData();
	void setName();
	void setNumCourses();
	int GetNumCourses();
	double average();
};