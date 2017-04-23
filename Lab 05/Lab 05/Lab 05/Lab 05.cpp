// Lab 05 Math Tutor
// CSCI 40
// Edgar Abundiz


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	double a, b, c;  //define variables

	srand(time(NULL)); //initialize random number generator

	cout << "*****************************" << endl;  // program description
	cout << "*     Math Tutor- Addition  *" << endl;
	cout << "*****************************" << endl;

	a = rand() % 100; // first number
	b = rand() % 100; // second number
	c = a + b;        // equation

	cout << "  " << a << endl; // display question
	cout << "+ " << b << endl;
	cout << "---- " << endl;
	
	
	cout << " Press enter to check solution..." << endl; // pause before displaying solution
	cin.get();


	cout << "  " << a << endl; // display solution
	cout << "+ " << b << endl;
	cout << "---- " << endl;
	cout << "  " << c << endl;

	system("pause");
	return 0;
}

/*
*****************************
*     Math Tutor- Addition  *
*****************************
49
+ 45
----
Press enter to check solution...

49
+ 45
----
94
Press any key to continue . . .

*****************************
*     Math Tutor- Addition  *
*****************************
32
+ 64
----
Press enter to check solution...

32
+ 64
----
96
Press any key to continue . . .

*****************************
*     Math Tutor- Addition  *
*****************************
33
+ 84
----
Press enter to check solution...

33
+ 84
----
117
Press any key to continue . . .
*/