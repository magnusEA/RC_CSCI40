//CSCI 40
// ch 8 lab A - sort names
// Name: Edgar Abundiz
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Function Prototype
void display_array(string[], int size);
void selectionSort(string[], int size);

int main(void)
{
	// Define Variables and Array elements
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
		"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
		"Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
		"Looney, Joe", "Wolfe, Bill", "James, Jean",
		"Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
		"Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
		"Pike, Gordon", "Holland, Beth" };

	// program description
	cout << "************************" << endl;
	cout << "*      Name Sorter     *" << endl;
	cout << "************************" << endl;

	// display names unsorted
	cout << " ------Unsorted Names----- " << endl;
	display_array(names, NUM_NAMES);
	cout << endl << endl;

	 //display names sorted
	selectionSort(names, NUM_NAMES);
	 cout << "-----Sorted Names----- " << endl;
	 display_array(names, NUM_NAMES);
	 cout << endl << endl;


	system("pause");
	return 0;
}


// Function Definitions
void display_array(string names[], int size)
{
	for (int i = 0; i < size; i++)
	{
				cout << setw(16) << left << names[i];
	}
}

void selectionSort(string array[], int size)
{
	int startScan, minIndex;
	string minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

/*
************************
*      Name Sorter     *
************************
------Unsorted Names-----
Collins, Bill   Smith, Bart     Allen, Jim      Griffin, Jim    Stamey, Marty
Rose, Geri      Taylor, Terri   Johnson, Jill   Allison, Jeff   Looney, Joe
Wolfe, Bill     James, Jean     Weaver, Jim     Pore, Bob       Rutherford, Greg
Javens, Renee   Harrison, Rose  Setzer, Cathy   Pike, Gordon    Holland, Beth


-----Sorted Names-----
Allen, Jim      Allison, Jeff   Collins, Bill   Griffin, Jim    Harrison, Rose
Holland, Beth   James, Jean     Javens, Renee   Johnson, Jill   Looney, Joe
Pike, Gordon    Pore, Bob       Rose, Geri      Rutherford, GregSetzer, Cathy
Smith, Bart     Stamey, Marty   Taylor, Terri   Weaver, Jim     Wolfe, Bill


Press any key to continue . . .

************************
*      Name Sorter     *
************************
------Unsorted Names-----
Collins, Bill   Smith, Bart     Allen, Jim      Griffin, Jim    Stamey, Marty
Rose, Geri      Taylor, Terri   Johnson, Jill   Allison, Jeff   Looney, Joe
Wolfe, Bill     James, Jean     Weaver, Jim     Pore, Bob       Rutherford, Greg
Javens, Renee   Harrison, Rose  Setzer, Cathy   Pike, Gordon    Holland, Beth


-----Sorted Names-----
Allen, Jim      Allison, Jeff   Collins, Bill   Griffin, Jim    Harrison, Rose
Holland, Beth   James, Jean     Javens, Renee   Johnson, Jill   Looney, Joe
Pike, Gordon    Pore, Bob       Rose, Geri      Rutherford, GregSetzer, Cathy
Smith, Bart     Stamey, Marty   Taylor, Terri   Weaver, Jim     Wolfe, Bill


Press any key to continue . . .

************************
*      Name Sorter     *
************************
------Unsorted Names-----
Collins, Bill   Smith, Bart     Allen, Jim      Griffin, Jim    Stamey, Marty
Rose, Geri      Taylor, Terri   Johnson, Jill   Allison, Jeff   Looney, Joe
Wolfe, Bill     James, Jean     Weaver, Jim     Pore, Bob       Rutherford, Greg
Javens, Renee   Harrison, Rose  Setzer, Cathy   Pike, Gordon    Holland, Beth


-----Sorted Names-----
Allen, Jim      Allison, Jeff   Collins, Bill   Griffin, Jim    Harrison, Rose
Holland, Beth   James, Jean     Javens, Renee   Johnson, Jill   Looney, Joe
Pike, Gordon    Pore, Bob       Rose, Geri      Rutherford, GregSetzer, Cathy
Smith, Bart     Stamey, Marty   Taylor, Terri   Weaver, Jim     Wolfe, Bill


Press any key to continue . . .
*/
