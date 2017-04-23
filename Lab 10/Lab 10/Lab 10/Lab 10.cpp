// CSCI 40 
// Edgar Abundiz
// Lab 10- Functions

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

// Function Prototype
void describe_program();
void prompt_user();
double get_double();
void sum_and_average(double a, double b, double c, double &sum, double &avg);
void display_result(double a, double b, double c, double sum, double avg);
bool again();

int main()
{
	//define variables
	double a, b, c, sum, avg;
	
	/* describe what this program does */
	describe_program();
	cout << endl;

	do
	{

		/* get program input */
		prompt_user();

		/* prompt and scan three numbers*/
		a = get_double();
		b = get_double();
		c = get_double();
		cout << endl;

		/* call function sum_and_average( ) */
		sum_and_average(a, b, c, sum, avg);
		

		/* display result */
		display_result(a, b, c, sum, avg);

	} while (again());


	system("pause");
	return 0;
}

void describe_program()
{
	cout << " *********************************" << endl;
	cout << " This program calculates the sum " << endl;
	cout << " and average of three numbers" << endl;
	cout << " *********************************" << endl;
}

void prompt_user()
{
	cout << " Enter three real numbers: " << endl;
}

double get_double()
{
	double x;
	cin >> x;
	return x;
}

void sum_and_average(double a, double b, double c, double &sum, double &avg)
{
	sum = a + b + c;
	avg = sum / 3;
}

void display_result(double a, double b, double c, double sum, double avg)
{
	cout << "The sum is : " << sum << endl;
	cout << "The average is: " << avg << endl;
}

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

/*
*********************************
This program calculates the sum
and average of three numbers
*********************************

Enter three real numbers:
5
1
2

The sum is : 8
The average is: 2.66667
Repeat? (y/n): y
Enter three real numbers:
5
6
1

The sum is : 12
The average is: 4
Repeat? (y/n): n
Press any key to continue . . .

*/