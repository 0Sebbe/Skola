#include "Schoolsystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	while(true)
	{
		//Menu
		//Input
		//Feedback
		std::cout << "Loop: " << counter << "\n";
		counter++;
		std::cin.get();

	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "Sebbe";
	student.age = 17;

	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

}
