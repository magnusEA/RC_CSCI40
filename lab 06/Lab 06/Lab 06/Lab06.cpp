// Quadratic Solutions
// CSCI 40
// Edgar Abundiz

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//Declare Variables
	double x, x1, x2, a, b, c, discriminant;

	// get input for a, b, c
	cout << "**************************************" << endl;
	cout << "*  SOLUTION OF A QUADRATIC EQUATION  *" << endl;
	cout << "*     ax^2 + bx + c = 0              *" << endl;
	cout << "**************************************" << endl;
	cout << " Enter the coefficients of a quadratic equation" << endl;
	cout << " (a, b, and c separated by a space): ";
	cin >> a >> b >> c;

	//get solution
	discriminant = pow(b, 2) - (4 * a * c);

	// enter if statements and display results
	if (discriminant > 0)
{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);

		cout << "\t" << a << "x^2 " << "+ " << b << "x " << "+ " << c << endl;
		cout << endl;
		cout << "There are two real solutions:" << endl;
		cout << "\t" << "x= " << x1 << endl;
		cout << endl;
		cout << "\t" << "x= " << x2 << endl;
}

	else if (discriminant == 0)
{
		x1 = (-b + sqrt(discriminant)) / (2 * a);

		cout << "\t" << a << "x^2 " << "+ " << b << "x " << "+ " << c << endl;
		cout << endl;
		cout << "There is one real solution:" << endl;
		cout << "\t" << "x=" << x1 << endl;
}
	else if (discriminant < 0)
{
		x1 = -b  / (2 * a);
		x2 = sqrt(-discriminant) / (2 * a);

		cout << "There are two complex solutions:" << endl;
		cout << endl;
		cout << "x1 = " << x1 << " + " << x2 << "i" << endl;
		cout << endl;
		cout << "x2 = "<< x1 << " - " << x2 << "i" << endl;

}
	system("pause");
	return 0;
}

/*
**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 2 5 -12
2x^2 + 5x + -12

There are two real solutions:
x=1.5

x=-4
Press any key to continue . . .

**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 1 2 3
There are two complex solutions:

x1 = -1 + 1.41421i

x2 = -1 - 1.41421i
Press any key to continue . . .

**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 4 -12 9
4x^2 + -12x + 9

There is one real solution:
x=1.5
Press any key to continue . . .

**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 5 -3 3
There are two complex solutions:

x1 = 0.3 + 0.714143i

x2 = 0.3 - 0.714143i
Press any key to continue . . .

**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 2 5 3
2x^2 + 5x + 3

There are two real solutions:
x= -1

x= -1.5
Press any key to continue . . .

**************************************
*  SOLUTION OF A QUADRATIC EQUATION  *
*     ax^2 + bx + c = 0              *
**************************************
Enter the coefficients of a quadratic equation
(a, b, and c separated by a space): 1 -6 9
1x^2 + -6x + 9

There is one real solution:
x=3
Press any key to continue . . .
*/