//Spectral Analysis
//CSCI 40
// Edgar Abundiz

#include<iostream>
#include <string>
#include <cstdlib>
#include<iomanip>
using namespace std;

//Function Prototype
bool again();
void Display_Description();
double Radio_Wave(double wavelength);
double Micro_Wave(double wavelength);
double Infrared_Wave(double wavelength);
double Visible_Light(double wavelength);
double Ultra_Violet(double wavelength);
double X_Ray(double wavelength);
double Gamma_Rays(double wavelength);

int main()
{
	//define variable
	double wavelength;
	
	//show what program does
	Display_Description();

	//start loop for each answer
	do
	{

		//promt the user
		cout << "Enter the wavelength (in meters): ";
		cin >> wavelength;
		
		Radio_Wave(wavelength);

		Micro_Wave(wavelength);

		Infrared_Wave( wavelength);

		Visible_Light(wavelength);

		Ultra_Violet(wavelength);

		X_Ray(wavelength);

		Gamma_Rays(wavelength);

		if (wavelength >= 1 || wavelength <= -1)
			cout << "Please enter a number less than 1 and greater than 0 " << endl;
	} while (again()); //ask user if they want to repeat the process

	cout << endl;
	system("pause");

	return 0;
}

// Function Definitions
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
	cout << "This program will let you know what kind of wave it is" << endl;
	cout << "-------------------------------------------------------" << endl << endl;
}

double Radio_Wave(double wavelength)
{
	if (wavelength >= 0.01 && wavelength < 1)
		cout << "The wave is a Radio Wave " << endl;
	return wavelength;
}

double Micro_Wave(double wavelength)
{
	if (wavelength < 0.01 && wavelength >= 0.001)
		cout << "The wave is a Microwave " << endl;
	return wavelength;
}

double Infrared_Wave(double wavelength)
{
	if (wavelength < 0.001 && wavelength >= 0.0000007)
		cout << "The wave is Infrared " << endl;
	return wavelength;
}

double Visible_Light(double wavelength)
{
	if (wavelength < 0.0000007 && wavelength >= 0.0000004)
		cout << "The wave is Visible Light " << endl;
	return wavelength;
}

double Ultra_Violet(double wavelength)
{
	if (wavelength < 0.0000004 && wavelength >= 0.00000001)
		cout << "The wave is Ultraviolet " << endl;
	return wavelength;
}

double X_Ray(double wavelength)
{
	if (wavelength < 0.00000001 && wavelength > 0.00000000001)
		cout << "The wave is an X-Ray " << endl;
	return wavelength;
}

double Gamma_Rays(double wavelength)
{
	if (wavelength <= 0.00000000001 && wavelength > -1)
		cout << "The wave is a Gamma Ray " << endl;
	return wavelength;
}


/*
This program will let you know what kind of wave it is
-------------------------------------------------------

Enter the wavelength (in meters): .1
The wave is a Radio Wave
Repeat? (y/n): y
Enter the wavelength (in meters): .001
The wave is a Microwave
Repeat? (y/n): y
Enter the wavelength (in meters): .00001
The wave is Infrared
Repeat? (y/n): y
Enter the wavelength (in meters): .0000004
The wave is Visible Light
Repeat? (y/n): y
Enter the wavelength (in meters): .00000004
The wave is Ultraviolet
Repeat? (y/n): y
Enter the wavelength (in meters): .000000004
The wave is an X-Ray
Repeat? (y/n): y
Enter the wavelength (in meters): .00000000005
The wave is an X-Ray
Repeat? (y/n): y
Enter the wavelength (in meters): .000000000004
The wave is a Gamma Ray
Repeat? (y/n): n


Press any key to continue . . .


This program will let you know what kind of wave it is
-------------------------------------------------------

Enter the wavelength (in meters): -5
Please enter a number less than 1 and greater than 0
Repeat? (y/n): y
Enter the wavelength (in meters): 55
Please enter a number less than 1 and greater than 0
Repeat? (y/n): n

Press any key to continue . . .
*/