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
		std::cout << "5. Add student to class" << "\n";

		//Inputs for different values
		int input;

		//All cases within the menus options
		std::cin >> input;
		switch (input)
		{
		case 1:
				//Adds a student to vector Student with name and age, optional to add class

				AddStudent();

				for (auto i : students) {
					std::cout << i.name << " " << i.age << "\n";
				}

				break;

				//Finds out if student exists
			case 2:
				FindStudent();
				break;


			case 3:
				//Prints a list with all students in a specific class
				SearchClass();
				break;

			case 4:
				//Removes student from the schoolsystem
				RemoveStudent();
				break;
			case 5:
				AddStudentToClass();
				break;
		}
	
		
		//Feedback

	}
}
//Adds student with name, age
void SchoolSystem::AddStudent()
{
	std::string nameInput = "";
	int ageInput;
	
	std::cout << "Add name: " << "\n";
	std::cin >> nameInput;
	std::cout << "Add age: " << "\n";
	std::cin >> ageInput;

	std::string newName = nameInput;
	int newAge = ageInput;
	std::string newClasses = "";

	Student student;
	student.name = newName;
	student.age = newAge;
	student.classes = newClasses;

	students.push_back(student);
}

//Finds out if student exists when name is typed in
void SchoolSystem::FindStudent()
{
	std::cout << "Search for student: " << "\n";

	std::string input;
	std::cin >> input;
	Student student;
	std::string name = input;

	for (auto& i : students)
	{
		if (i.name != name)
		{
			std::cout << "Student not found" << "\n";
			return;
		}
	}

	std::cout << "Student found" << "\n";
}


//Prints every student in the searched class
void SchoolSystem::SearchClass()
{
	Student student;
	std::cout << "What class are you looking for?" << "\n\n";
	std::string input;
	std::cin >> input;
	std::string classes = input;

	for (auto i : students) 
	{
		//debug
		if (i.classes == classes) 
		{
			//debug
			std::cout << "Name:" << i.name << " Age: " << i.age << "\n";
		}
	}
	
}

//Removes a student
void SchoolSystem::RemoveStudent()
{
	std::cout << "Type the students name to remove student from system: " << "\n";

	std::string input;
	std::cin >> input;

	Student student;
	std::string name = input;

	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].name == name) students.erase(students.begin() + i);
	}


	std::cout << "Student removed" << "\n";
}

void SchoolSystem::AddStudentToClass()
{
	std::cout << "Type the student you want to put in a class: " << "\n";

	Student student;

	std::string nameInput;
	std::cin >> nameInput;
	std::string name = nameInput;

	//Lägg till input för klass och lägg till elev i klassen
	std::cout << "Add class: " << "\n";
	std::string classInput;
	std::cin >> classInput;
	std::string classes = classInput;

	for (auto i : students)
	{
		//debug
		if (i.name == name)
		{
			//debug
			i.classes = classes;
			std::cout << "Added class!" << "\n";
		}
	}
}
