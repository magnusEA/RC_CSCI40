// Word Game
//CSCI 40
// Edgar Abundiz

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Function Prototype
bool again();
void Display_Description();
void Get_Name();
void Get_City();
void Get_Profession();

int main()
{
	//display a header
	Display_Description();

	//Define variables
	string Name, City, College, Profession, Animal, PetName;
	int Age;
	
	//prompt user for inputs and start loop
	do
	{
		cout << endl;
		Get_Name();

		Get_City();

		cout << "Age (numbers only): ";
		cin >> Age;

		cout << "College: ";
		cin.ignore(100, '\n');
		getline(cin, College);

		Get_Profession();

		cout << "Animal: ";
		getline(cin, Animal);

		cout << "Pet Name: ";
		getline(cin, PetName);
		cout << endl;

		// display story with user inputs
		cout << "There once was a person named " << Name << " who lived in " << City << "." << endl;
		cout << "At the age of " << Age;
		cout << ", " << Name << " went to college at " << College << ". " << endl;
		cout << Name << " graduated and went to work as a " << Profession << "."  << endl<< "Then, ";
		cout << Name << " adopted a(n) " << Animal << " named " << PetName << "." << endl;
		cout << "They both lived happily ever after!" << endl;
	} while (again());

	
	
	system("pause");
	return 0;
}

//Function Definitions
bool again()
{
	char y;
	cout << "Repeat? (y/n): ";
	
	cin >> y;
	if (y == 'y' || y == 'Y')
		return true;
	else
		return false;

}

void Display_Description()
{
	cout << " ******************************************************************************" << endl;
	cout << " Let's play a game! Input an answer for each prompt and press enter to advance." << endl;
	cout << " ******************************************************************************" << endl;
}

void Get_Name()
{
	cin.ignore(100, '\n');
	cout << "Name (first then last): ";
	getline(cin, Name);
}

void Get_City()
{
	cout << "City: ";
	getline(cin, City);
}

void Get_Profession()
{
	cout << "Profession: ";
	getline(cin, Profession);
}

/*
******************************************************************************
Let's play a game! Input an answer for each prompt and press enter to advance.
******************************************************************************


Name (first then last): Edgar Abundiz
City: Reedley
Age (numbers only): 21
College: Reedley College
Profession: Programmer
Animal: cat
Pet Name: Tuna

There once was a person named Edgar Abundiz who lived in Reedley.
At the age of 21, Edgar Abundiz went to college at Reedley College.
Edgar Abundiz graduated and went to work as a Programmer.
Then, Edgar Abundiz adopted a(n) cat named Tuna.
They both lived happily ever after!
Repeat? (y/n): n
Press any key to continue . . .
--------------------------------------------------------------------------------
******************************************************************************
Let's play a game! Input an answer for each prompt and press enter to advance.
******************************************************************************


Name (first then last): Carl Jones
City: Tampa
Age (numbers only): 47
College: Harvard
Profession: Doctor
Animal: dog
Pet Name: Barky

There once was a person named Carl Jones who lived in Tampa.
At the age of 47, Carl Jones went to college at Harvard.
Carl Jones graduated and went to work as a Doctor.
Then, Carl Jones adopted a(n) dog named Barky.
They both lived happily ever after!
Repeat? (y/n): y

Name (first then last): Allen Howe
City: Detriot
Age (numbers only): 33
College: Yale
Profession: Accountant
Animal: bird
Pet Name: Chirpy

There once was a person named Allen Howe who lived in Detriot.
At the age of 33, Allen Howe went to college at Yale.
Allen Howe graduated and went to work as a Accountant.
Then, Allen Howe adopted a(n) bird named Chirpy.
They both lived happily ever after!
Repeat? (y/n): n
Press any key to continue . . .
--------------------------------------------------------------------------------
******************************************************************************
Let's play a game! Input an answer for each prompt and press enter to advance.
******************************************************************************


Name (first then last): Ness T
City: Onett
Age (numbers only): 12
College: Twoson
Profession: Mastermind
Animal: dragon
Pet Name: Pyro

There once was a person named Ness T who lived in Onett.
At the age of 12, Ness T went to college at Twoson.
Ness T graduated and went to work as a Mastermind.
Then, Ness T adopted a(n) dragon named Pyro.
They both lived happily ever after!
Repeat? (y/n): n
Press any key to continue . . .
*/