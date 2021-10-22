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

// global arrays
int studentID[20];
string studentFirstName[20];
string studentLastName[20];
float midtermGrade[20];
float finalGrade[20];

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

		if (opt = 1)
		{
			newStudentRecord();
		}
		else if (opt = 2)
		{
			deleteStudentRecord();
		}
		else if (opt = 3)
		{
			displayStudentRecords();
		}
		else if (opt = 4)
		{
			showRecordByID();
		}
		else if (opt = 5)
		{
			editStudentRecord();
		}
		else
		{
			cout << "You have entered an invalid option, please close the program and try again." << endl;
		}
			
	} 
	while (opt != 6);
}

void newStudentRecord()
{
	int studentID;
	int requestedDataSlot;
	cout << "Please enter the following information to add a new student record: \n";
	cout << "This program has a storage limit of 20 entrys, please enter which entry slot you would like this to be stored in." << endl;
	cout << "Enter the slot you would like to occupy (between 1 - 20)" << endl;
	cin >> requestedDataSlot;
	cout << "Enter the student ID:" << endl;
	cin >> studentID[requestedDataSlot]; // need to figure this out
	cout << "Enter first name: \n";
	cin >> studentFirstName[i];
	cout << "Enter last name: \n";
	cin >> studentLastName[i];
	cout << "Enter the midterm grade: \n";
	cin >> midtermGrade[i];
	cout << "Enter the final grade: \n";
	cin >> finalGrade[i];
}

void deleteStudentRecord()
{
	int recordNumber;
		cout << "Please enter a record number to delete." << endl;
		cin >> recordNumber;

		studentID[recordNumber] = 0;
		studentFirstName[recordNumber] = "";
		studentLastName[recordNumber] = "";
		midtermGrade[recordNumber] = 0;
		finalGrade[recordNumber] = 0;

}
void displayStudentRecords()
{

}
void showRecordByID()
{

}
void editStudentRecord()
{

}

void newStudentRecord()
{
}





