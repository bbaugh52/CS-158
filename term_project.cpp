#include <iostream>
#include <string>
using namespace std;

// matts notes delete before submitting - use return function to output from a function call
// if function returns a value define a data type (string/int etc) if it doesnt use void
// when changing arrays, its not done sequentially, ask the user which one they want to do it to by either number or ID
// record number is good name for request

// functions
void newStudentRecord();
void deleteStudentRecord();
void displayStudentRecords();
void showRecordByID();
void editStudentRecord();

// global variables
const int SIZE = 20;

// global arrays
int studentID[SIZE];
string studentFirstName[SIZE];
string studentLastName[SIZE];
float midtermGrade[SIZE];
float finalGrade[SIZE];

int main()
{
	// menu selection variable
	int opt;

	//input
	do
	{
		cout << "=========================================================================================================\n";
		cout << "Please select one of the following options:\n";
		cout << "[1]: Add a new student record.\n";
		cout << "[2]: Delete a student record.\n";
		cout << "[3]: Display all student records.\n";
		cout << "[4]: Show a student record by ID.\n";
		cout << "[5]: Edit a student record.\n";
		cout << "[6]: Exit.\n";
		cout << "=========================================================================================================\n";

		cin >> opt;

		if (opt == 1)
		{
			newStudentRecord();
		}
		else if (opt == 2)
		{
			deleteStudentRecord();
		}
		else if (opt == 3)
		{
			displayStudentRecords();
		}
		else if (opt == 4)
		{
			showRecordByID();
		}
		else if (opt == 5)
		{
			editStudentRecord();
		}
		else if (opt == 6)
		{
			cout << "Exiting program \n";
		}
		else
		{
			cout << "You have entered an invalid option" << endl;
		}

	} while (opt != 6);
}

void newStudentRecord()
{
	int rNumber;
	cout << "Please enter the following information to add a new student record: \n";
	cout << "Enter the student ID: \n";
	cin >> rNumber;
	studentID[rNumber - 1] = rNumber;
	cout << "Enter first name: \n";
	cin >> studentFirstName[rNumber - 1];
	cout << "Enter last name: \n";
	cin >> studentLastName[rNumber - 1];
	cout << "Enter the midterm grade: \n";
	cin >> midtermGrade[rNumber - 1];
	cout << "Enter the final grade: \n";
	cin >> finalGrade[rNumber - 1];
}

void deleteStudentRecord()
{
	int rNumber;
	cout << "Please enter a record number to delete." << endl;
	cin >> rNumber;

	studentID[rNumber - 1] = 0;
	studentFirstName[rNumber - 1] = "";
	studentLastName[rNumber - 1] = "";
	midtermGrade[rNumber - 1] = 0;
	finalGrade[rNumber - 1] = 0;

}
void displayStudentRecords()
{
	cout << "=========================================================================================================\n";
	cout << "ID \t \t" << "First Name \t" << "Last Name \t" << "Midterm Grade \t" << "Final Grade \n";
	for (int i = 0; i < SIZE; i++)
		cout << studentID[i] << "\t \t" << studentFirstName[i] << "\t \t" << studentLastName[i] << "\t\t\t" << midtermGrade[i] << "\t\t" << finalGrade[i] << endl;
	cout << "=========================================================================================================\n";

}
void showRecordByID()
{
	int rNumber;
	cout << "=========================================================================================================\n";
	cout << "Please enter a student ID: \n";
	cin >> rNumber;
	cout << "ID \t \t" << "First Name \t" << "Last Name \t" << "Midterm Grade \t" << "Final Grade \n";
	cout << studentID[rNumber - 1] << "\t \t" << studentFirstName[rNumber - 1] << "\t\t" << studentLastName[rNumber - 1] << "\t\t\t" << midtermGrade[rNumber - 1] << "\t\t" << finalGrade[rNumber - 1] << endl;
	cout << "=========================================================================================================\n";
}
void editStudentRecord()
{
	int rNumber;
	cout << "Please enter the ID of the student you want to edit: ";
	cin >> rNumber;
	cout << "Enter first name: \n";
	cin >> studentFirstName[rNumber - 1];
	cout << "Enter last name: \n";
	cin >> studentLastName[rNumber - 1];
	cout << "Enter the midterm grade: \n";
	cin >> midtermGrade[rNumber - 1];
	cout << "Enter the final grade: \n";
	cin >> finalGrade[rNumber - 1];
	cout << "Student information modified successfully";

}



