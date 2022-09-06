#include "Schoolsystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		//Menu
		std::cout << "1. Add Student" << "\n";
		std::cout << "2. Add Class" << "\n";
		std::cout << "3. Add Student to Class" << "\n";
		std::cout << "4. Search for Student" << "\n";
		std::cout << "5. Search for Class" << "\n";

		//Input
		int input;
		std::string nameInput;
		int ageInput;
		std::cin >> input;
		switch (input)
		{
			case 1:
				std::cout << "Add name: " << "\n";
				std::cin >> nameInput;
				std::cout << "Add age: " << "\n";
				std::cin >> ageInput;
				AddStudent(nameInput, ageInput);

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
		}

		for (auto i : students) 
		{
			std::cout << i.name << " ";
			std::cout << i.age << "\n \n";
		}
		//Feedback

	}
}

void SchoolSystem::AddStudent(std::string newName, int newAge)
{
	Student student;
	student.name = newName;
	student.age = newAge;

	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{

}

void SchoolSystem::AddClass()
{
	
}

void SchoolSystem::RemoveClass()
{

}
