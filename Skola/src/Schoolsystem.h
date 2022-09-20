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
	void AddStudent(std::string newName, int newAge, std::string newClasses);
	void RemoveStudent(std::string newName);
	void FindStudent(std::string newName);
	void SearchClass(std::string newClass);
	void RemoveClass();

	std::vector<Student> students;
	std::vector<Schoolclasses> schoolclasses;
};