// Lab 14 Pointers
// CSCI 40
// Edgar Abundiz

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
bool again();
void init_array(int *oddptr, int size);
void  Display_Array(int *oddptr, int size);
int *allocate_array(int size);

int main()
{
	//define variables
	int *oddptr;
	int size;

	cout << " This program dynamically allocates an array of integers." << endl;
	cout << "---------------------------------------------------------" << endl;

	// start repeating loop
	do
	{
		//prompt user for number of integers
		cout << "How many numbers?: ";
		cin >> size;

		//allocate array
		oddptr = allocate_array(size);
		

		//fill array with odd numbers
		init_array(oddptr, size);

		//display array
		Display_Array(oddptr,  size);


		// to prevent memory leak
		delete[] oddptr;

		cout << endl;
	} while (again());


	
	system("pause");
	return 0;
}




//Function definitions
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

void init_array(int *oddptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		oddptr[i] = 2 * (i + 1) - 1;
	}
}

void  Display_Array(int *oddptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(8) << oddptr[i];
	}
}

int *allocate_array(int size)
{
	int *iptr;
	iptr= new int[size];
	 return iptr;
}

/*
This program dynamically allocates an array of integers.
---------------------------------------------------------
How many numbers?: 41
1       3       5       7       9      11      13      15      17      19
21      23      25      27      29      31      33      35      37      39
41      43      45      47      49      51      53      55      57      59
61      63      65      67      69      71      73      75      77      79
81
Repeat? (y/n): y
How many numbers?: 75
1       3       5       7       9      11      13      15      17      19
21      23      25      27      29      31      33      35      37      39
41      43      45      47      49      51      53      55      57      59
61      63      65      67      69      71      73      75      77      79
81      83      85      87      89      91      93      95      97      99
101     103     105     107     109     111     113     115     117     119
121     123     125     127     129     131     133     135     137     139
141     143     145     147     149
Repeat? (y/n): n
Press any key to continue . . .

This program dynamically allocates an array of integers.
---------------------------------------------------------
How many numbers?: 100
1       3       5       7       9      11      13      15      17      19
21      23      25      27      29      31      33      35      37      39
41      43      45      47      49      51      53      55      57      59
61      63      65      67      69      71      73      75      77      79
81      83      85      87      89      91      93      95      97      99
101     103     105     107     109     111     113     115     117     119
121     123     125     127     129     131     133     135     137     139
141     143     145     147     149     151     153     155     157     159
161     163     165     167     169     171     173     175     177     179
181     183     185     187     189     191     193     195     197     199

Repeat? (y/n): y
How many numbers?: 20
1       3       5       7       9      11      13      15      17      19
21      23      25      27      29      31      33      35      37      39

Repeat? (y/n): n
Press any key to continue . . .

*/