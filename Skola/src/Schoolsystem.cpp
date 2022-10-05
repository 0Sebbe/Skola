#include "Schoolsystem.h"

template <typename T>
void Print(T t)
{
	std::cout << t << "\n";
}


void SchoolSystem::Run()
{
	
	while (true)
	{
		//Menu
		Print("\n\n");
		Print("1. Add student to system");
		Print("2. Search for student and information");
		Print("3. See all students in a class");
		Print("4. Remove a student from the system");
		Print("5. Add student to class or change class");

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
					Print(i.name + ": Added to system!");
				}

				break;

				//Finds out if student exists
			case 2:
				FindStudent();
				for (auto i : students) {
					Print("Name: " + i.name);
					Print(", Age : " + i.age);
					Print(", Class: " + i.classes);
				}
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
				//Adds student to class
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
	
	Print("Add name: ");
	std::cin >> nameInput;
	Print("Add age: ");
	std::cin >> ageInput;


	std::string newName = nameInput;
	int newAge = ageInput;

	Student student;
	student.name = newName;
	student.age = newAge;

	students.push_back(student);
}

//Finds out if student exists when name is typed in
void SchoolSystem::FindStudent()
{
	Print("Search for student: ");

	std::string input;
	std::cin >> input;
	Student student;
	std::string name = input;

	for (auto& i : students)
	{
		if (i.name != name)
		{
			Print("Student not found");
			return;
		}
	}
}


//Prints every student in the searched class
void SchoolSystem::SearchClass()
{
	std::cout << "What class are you looking for?" << "\n\n";
	std::string input;
	std::cin >> input;
	std::string classes = input;

	for (auto i : students) 
	{
		if (i.classes == classes) 
		{
			Print("Name: " + i.name);
			Print(", Age: " + i.age);
		}
	}
	
}

//Removes a student
void SchoolSystem::RemoveStudent()
{
	Print("Type the students name to remove student from system: ");

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

//Adds class or changes class for existing students
void SchoolSystem::AddStudentToClass()
{
	Print("Type the student you want to put in a class: ");
	std::string nameInput;
	std::cin >> nameInput;
	std::string name = nameInput;

	//Lägg till input för klass och lägg till elev i klassen
	Print("Add class: ");
	std::string classInput;
	std::cin >> classInput;
	std::string classes = classInput;

	for (auto& i : students)
	{
		if (i.name == name)
		{
			i.classes = classes;
			Print("Added class!");
		}
	}
}
