//CSCI 40
//Edgar Abundiz

#include <iostream>
#include <iomanip>
using namespace std;


//function prototypes
bool again();
int binarySearch(int[], int, int);
void Display_Description();
int Prompt_User(int);
void Account_Numbers(int , int );

int main()
{
	//define variables
	const int SIZE = 18;
	int AccNums[SIZE] = { 1005231, 1250255, 1302850, 3852085, 4520125, 4562555, 4581002,
	5050552, 5552012, 5658845, 6545231, 7576651, 7825877, 7881200, 7895122, 8080152, 8451277, 8777541};

	int sAccNums, results, num = 0;

	//description
	Display_Description();

	//start loop
	do
	{
		//prompt user for account number
		sAccNums = Prompt_User(num);
		
		//search through previously ordered array to see if account number is present
		results = binarySearch(AccNums, SIZE, sAccNums);

		//display account number or not 
		 Account_Numbers(results, sAccNums);
		
	} while (again());


	system("pause");
	return 0;
}

//function definitions
int binarySearch(int array[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
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

void Display_Description()
{
	cout << " This program will detect any correct account numbers through a linear search " << endl;
	cout << "------------------------------------------------------------------------------" << endl << endl;
}

int Prompt_User(int num)
{
	
	cout << "Enter an account number to search for " << endl;
	cin >> num;
	return num;
}

void Account_Numbers(int results, int sAccNums)
{
	if (results == -1)
		cout << "The number does not exist in the array.\n";
	else
	{
		cout << "Account Number: " << sAccNums << " was found in element "
			<< results << " of the array.\n";
	}
}

/*
This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
1005231
Account Number: 1005231 was found in element 0 of the array.
Repeat? (y/n): y
Enter an account number to search for
1250255
Account Number: 1250255 was found in element 1 of the array.
Repeat? (y/n): n
Press any key to continue . . .

This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
8777541
Account Number: 8777541 was found in element 17 of the array.
Repeat? (y/n): y
Enter an account number to search for
8451277
Account Number: 8451277 was found in element 16 of the array.
Repeat? (y/n): y
Enter an account number to search for
8080152
Account Number: 8080152 was found in element 15 of the array.
Repeat? (y/n): n
Press any key to continue . . .

This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
7576651
Account Number: 7576651 was found in element 11 of the array.
Repeat? (y/n): n
Press any key to continue . . .
*/