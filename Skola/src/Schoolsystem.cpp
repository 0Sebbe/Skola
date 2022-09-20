#include "Schoolsystem.h"

void SchoolSystem::Run()
{
	while (true)
	{
		//Menu
		std::cin.get();
		std::cout << "\n\n";
		std::cout << "1. Add Student" << "\n";
		std::cout << "2. Search for Student" << "\n";
		std::cout << "3. See all students in a class" << "\n";
		std::cout << "4. Remove a student" << "\n";
		std::cout << "5. ???" << "\n";

		//Inputs for different values
		int input;
		std::string nameInput;
		int ageInput;
		std::string classInput;
		std::string yesnoInput;

		//All cases within the menus options
		std::cin >> input;
		switch (input)
		{
		case 1:
				system("CLS");
				//Adds a student to vector Student with name and age, optional to add class
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

				//Finds out if student exists
			case 2:
				system("CLS");
				std::cout << "Type name to search for student: " << "\n";
				std::cin >> nameInput;
				FindStudent(nameInput);
				break;


			case 3:
				system("CLS");
				//Prints a list with all students in a specific class
				std::cout << "What class are you looking for?" << "\n\n";
				std::cin >> nameInput;

				SearchClass(nameInput);
				break;

			case 4:
				std::cout << "Type the students name to remove student from system: " << "\n";
				std::cin >> nameInput;

				RemoveStudent(nameInput);
				break;
			case 5:

				break;
		}
	
		
		//Feedback

	}
}
//Adds student with name, age and optional class
void SchoolSystem::AddStudent(std::string newName, int newAge, std::string newClasses)
{
	Student student;
	student.name = newName;
	student.age = newAge;
	student.classes = newClasses;

	students.push_back(student);
}
//Removes a student
void SchoolSystem::RemoveStudent(std::string newName)
{
	Student student;
	std::string name = newName;

	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].name == name) students.erase(students.begin() + i);
	}

	std::cout << "Student removed" << "\n";
}

//Finds out if student exists when name is typed in
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
	}
}
//Prints every student in the searched class
void SchoolSystem::SearchClass(std::string newClass)
{
	for (auto i : students)
	{
		if (i.classes == newClass)
		{
			std::cout << "Name:" << i.name << " Age: " << i.age << "\n";
		}
	}
	
}

void SchoolSystem::RemoveClass()
{
	
}
