//CSCI 40
// Lab 07 Geometry Calculator
// Edgar Abundiz

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables 
	double length, width, area, base, height, radius;
	int choice;
	double pi = 3.14159;

	//make menu
	cout << "Geometry Calculator" << endl;
	cout << " 1. Calculate the Area of a Cricle" << endl;
	cout << " 2. Calculate the Area of a Rectangle" << endl;
	cout << " 3. Calculate the Area of a Triangle" << endl;
	cout << " 4. Quit " << endl;
	cout << " " << endl;
	cout << " Enter your choice (1-4): ";
	cin >> choice; 
	cout << "" << endl;

	// choices
	switch (choice)
	{
		// area of a cricle
		case 1:
			cout << "Calculating the Area of a Circle " << endl;
			cout << " Enter the radius: ";
			cin >> radius;

			if (radius < 0)
			{
				cout << " Invalid input, radius can't be negative" << endl;
			}

			else if (radius >= 0)
			{
				area = pi*(pow(radius, 2.0));
				cout << "area = " << area << endl;

			}		
			break;

		// area of a rectangle
		case 2:
			cout << "Calculating the Area of a Rectangle " << endl;
			cout << " Enter length and width separated by a space: ";
			cin >> length >> width;

			if (length > 0 && width > 0)
			{
				area = length * width;
				cout << "area = " << area << endl;
			}
			else if (length < 0 || width < 0)
			{
				cout << "Invalid input, length or width can't be negative " << endl;
			}
			break;

		//area of a triangle
		case 3:
			cout << " Calculating the Area of a Triangle " << endl;
			cout << " Enter the base and height separated by a space: ";
			cin >> base >> height;

			if (base > 0 && height > 0)
			{
				area = base * height * 0.5;
				cout << "area = " << area << endl;
			}
			else if (base < 0 || height < 0)
			{
				cout << " Invalid input, base or height can't be negative" << endl;
			}
			break;

		//quiting the program
		case 4:
			cout << " Quiting the program " << endl;
			break;

		//invalid input for choosing a number that isn't 1-4

		default:
			cout << " Please choose a number 1-4 only " << endl;
			break;
	}





	system("pause");
	return 0;
	
}

/*
Geometry Calculator
1. Calculate the Area of a Cricle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4): 1

Calculating the Area of a Circle
Enter the radius: 10
area = 314.159
Press any key to continue . . .

Geometry Calculator
1. Calculate the Area of a Cricle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4): 2

Calculating the Area of a Rectangle
Enter length and width separated by a space: 10 5
area = 50
Press any key to continue . . .

Geometry Calculator
1. Calculate the Area of a Cricle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4): 3

Calculating the Area of a Triangle
Enter the base and height separated by a space: 10 5
area = 25
Press any key to continue . . .

Geometry Calculator
1. Calculate the Area of a Cricle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4): 4

Quiting the program
Press any key to continue . . .

Geometry Calculator
1. Calculate the Area of a Cricle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4): 1

Calculating the Area of a Circle
Enter the radius: -5
Invalid input, radius can't be negative
Press any key to continue . . .

*/