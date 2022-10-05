#pragma once
#include "Student.h"
#include "Schoolclasses.h"
#include <vector>
#include <iostream>
#include <algorithm>

class SchoolSystem
{
public:
	void Run();
	void AddStudent();
	void RemoveStudent();
	void FindStudent();
	void SearchClass();
	void AddStudentToClass();

	std::vector<Student> students;
};