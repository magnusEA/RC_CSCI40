// Lab 04 temperature conversion
// Edgar Abundiz
// CSCI 40

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	double Celsius, Fahrenheit;

	cout << "******************************************" << endl;
	cout << "*  This program will convert temperature *" << endl;
	cout << "*  from Celsius to Fahrenheit.           *" << endl;
	cout << "******************************************" << endl;
	
	cout << " Enter a degree in Celsius: " << endl;
	cin >> Celsius;

	Fahrenheit = 9.00 / 5.00 * Celsius + 32.00;
	
	cout << fixed << setprecision(2);
	cout << " Temperature is " << Celsius << "C = " << Fahrenheit << "F " << endl;

	system("pause");
	return 0;
}
/* You said first 4 test cases were ok
******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
 Enter a degree in Celsius:
100
 Temperature is 100C = 212F
Press any key to continue . . .

******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
Enter a degree in Celsius:
0
Temperature is 0C = 32F
Press any key to continue . . .

******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
Enter a degree in Celsius:
37
Temperature is 37C = 98.6F
Press any key to continue . . .

******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
Enter a degree in Celsius:
54.2
Temperature is 54.2C = 129.56F
Press any key to continue . . .

******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
Enter a degree in Celsius:
74.21
Temperature is 74.21C = 165.58F
Press any key to continue . . .

******************************************
*  This program will convert temperature *
*  from Celsius to Fahrenheit.           *
******************************************
Enter a degree in Celsius:
99
Temperature is 99.00C = 210.20F
Press any key to continue . . .
*/