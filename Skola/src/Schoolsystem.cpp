#include "Schoolsystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		//Menu
		std::cout << "1. Add Student" << "\n";
		std::cout << "2. Search for Student" << "\n";
		std::cout << "3. See all students in a class" << "\n";
		std::cout << "4. ???" << "\n";
		std::cout << "5. ???" << "\n";

		//Input
		int input;
		std::string nameInput;
		int ageInput;
		std::string classInput;
		std::string yesnoInput;

		std::cin >> input;
		switch (input)
		{
		case 1:
				//Adds a student to vector Student with name and age, optional to add c
				std::cout << "Add name: " << "\n";
				std::cin >> nameInput;
				std::cout << "Add age: " << "\n";
				std::cin >> ageInput;
				inputAdd:
				std::cout << "Would you like to add a class to this student? YES or NO" << "\n \n";
				std::cin >> yesnoInput;
				if (yesnoInput == "YES") 
				{
					std::cout << "Add class: " << "\n \n";
					std::cin >> classInput;
					AddStudent(nameInput, ageInput, classInput);
				}
				else if (yesnoInput == "NO")
				{
					AddStudent(nameInput, ageInput, "");
				}
				else {
					goto inputAdd;
				}
				
				/*for (auto i : students)
				{
					std::cout << i.name << " ";
					std::cout << i.age << " ";
					std::cout << i.classes << "\n";
				}*/
				break;


			case 2:
				std::cout << "Type name to search for student: " << "\n";
				std::cin >> nameInput;
				FindStudent(nameInput);
				break;


			case 3:
				//Prints a list with all students in a specific class
				std::cout << "What class are you looking for?" << "\n\n";
				std::cin >> nameInput;
				
				
				break;


			case 4:

				break;
			case 5:

				break;
		}
	
		
		//Feedback

	}
}

void SchoolSystem::AddStudent(std::string newName, int newAge, std::string newClasses)
{
	Student student;
	student.name = newName;
	student.age = newAge;
	student.classes = newClasses;

	students.push_back(student);
}

void SchoolSystem::FindStudent(std::string newName)
{
	Student student;
	std::string name = "";
	name = newName;

	for (auto i : students) 
	{
		if (i.name == name)
		{
			std::cout << "Student found" << "\n";
		}
		else
		{
			std::cout << "Student not found" << "\n";
		}
	}
}

void SchoolSystem::SearchClass(std::string newClass)
{
	//Jag vill att man ska skriva in en klass och då ska det printas ut alla elever som har samma klass som jag har skrivit.
	for (auto i : students)
	{
		if (i.classes == newClass)
		{
			std::cout << i.name << "\n";
		}
	}
	
}

void SchoolSystem::RemoveClass()
{
	
}
