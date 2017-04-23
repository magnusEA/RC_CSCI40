//CSCI 40
//Edgar Abundiz

#include <iostream>
#include <iomanip>
using namespace std;


//function prototypes
int binarySearch(int[], int, int);
bool again();
void SelectionSort(int[], int);
void Display_Description();
int Prompt_User(int);
void Account_Numbers(int, int);
void display_array(int [], int );

int main()
{
	//define variables
	const int SIZE = 18;
	int AccNums[SIZE] = { 5658845, 8080152, 1005231, 4520125, 4562555, 6545231, 7895122, 5552012, 3852085, 8777541, 5050552,
		7576651, 8451277, 7825877, 7881200, 1302850, 1250255, 4581002 };

	int sAccNums, results = 0, num = 0;

	//description
	Display_Description();

	//start loop
	do
	{
		//prompt user for account number
		sAccNums = Prompt_User(num);

		//search through selection sorted array to see if account number is present
		SelectionSort(AccNums, SIZE);
		results = binarySearch(AccNums, SIZE, sAccNums);

		//display account number or not along with sorted array
		Account_Numbers(results, sAccNums);
		cout << endl;
		display_array(AccNums, SIZE);
		cout << endl;

	} while (again());


	system("pause");
	return 0;
}

//function definitions

// selection sort the numbers
void SelectionSort(int AccNums[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = AccNums[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (AccNums[index] < minValue)
			{
				minValue = AccNums[index];
				minIndex = index;
			}
		}
		AccNums[minIndex] = AccNums[startScan];
		AccNums[startScan] = minValue;
	}
}

// loop to repeat program
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

//display if account number is valid
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

// search through numbers that were sorted through bubble sort
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

void display_array(int AccNums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(16) << left << AccNums[i];
	}
}

/*
This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
1005231
Account Number: 1005231 was found in element 0 of the array.

1005231         1250255         1302850         3852085         4520125
4562555         4581002         5050552         5552012         5658845
6545231         7576651         7825877         7881200         7895122
8080152         8451277         8777541
Repeat? (y/n): y
Enter an account number to search for
456255
The number does not exist in the array.

1005231         1250255         1302850         3852085         4520125
4562555         4581002         5050552         5552012         5658845
6545231         7576651         7825877         7881200         7895122
8080152         8451277         8777541
Repeat? (y/n): n
Press any key to continue . . .

This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
4562555
Account Number: 4562555 was found in element 5 of the array.

1005231         1250255         1302850         3852085         4520125
4562555         4581002         5050552         5552012         5658845
6545231         7576651         7825877         7881200         7895122
8080152         8451277         8777541
Repeat? (y/n): y
Enter an account number to search for
5552012
Account Number: 5552012 was found in element 8 of the array.

1005231         1250255         1302850         3852085         4520125
4562555         4581002         5050552         5552012         5658845
6545231         7576651         7825877         7881200         7895122
8080152         8451277         8777541
Repeat? (y/n): n
Press any key to continue . . .

This program will detect any correct account numbers through a linear search
------------------------------------------------------------------------------

Enter an account number to search for
-5
The number does not exist in the array.

1005231         1250255         1302850         3852085         4520125
4562555         4581002         5050552         5552012         5658845
6545231         7576651         7825877         7881200         7895122
8080152         8451277         8777541
Repeat? (y/n): n
Press any key to continue . . .
*/