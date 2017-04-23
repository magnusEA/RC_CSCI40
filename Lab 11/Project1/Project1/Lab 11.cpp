// CSCI 40
// Edgar Abundiz
// Lab 10 - Arrays

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function Prototype
int Sum(int numbers[], int size);
int Max_Value(int numbers[], int size);

int main()
{
	// define variable
	const int SIZE = 15;
	int numbers[SIZE];
	int add = 0;
	int i;
	int index;
	int max_index = 0;
	

	// prompt user start first loop
	for (int count = 0; count < 15; count++)
	{

		cout << count + 1 << ". Enter an integer: ";
		cin >> numbers[count];
	}
	
	cout << endl;

	//display numbers
	cout << "Array elements are:" << endl;

	for ( i = 0; i < SIZE; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << setw(6) << numbers[i];
	}
	cout << endl;
	
	// calculate total
	add = Sum(numbers, SIZE);

	//display total
	cout << endl;
	cout << " Total of numbers is: " << add << endl;
	cout << endl;

	//find location of maximum value
	max_index = Max_Value(numbers, SIZE);

	//display maximum value
	cout << "number[" << max_index << "]= " << numbers[max_index] << endl;


	system("pause");
	return 0;
}

int Sum(int numbers[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += numbers[i];
	}
	return total;
}

int Max_Value(int numbers[], int size)
{
	int max_index = 0;
	for (int index = 1; index < 15; index++)
	{
		if (numbers[index] > numbers[max_index])
		{
			max_index = index;
		}
		
	}
	return max_index;
}

/*
1. Enter an integer: 1
2. Enter an integer: 2
3. Enter an integer: 3
4. Enter an integer: 4
5. Enter an integer: 5
6. Enter an integer: 6
7. Enter an integer: 7
8. Enter an integer: 8
9. Enter an integer: 9
10. Enter an integer: 10
11. Enter an integer: 11
12. Enter an integer: 12
13. Enter an integer: 13
14. Enter an integer: 14
15. Enter an integer: 15

Array elements are:

     1     2     3     4     5     6     7     8     9    10
    11    12    13    14    15

 Total of numbers is: 120

number[14]= 15
Press any key to continue . . .

1. Enter an integer: 15
2. Enter an integer: 20
3. Enter an integer: 55
4. Enter an integer: 87
5. Enter an integer: 985
6. Enter an integer: 14
7. Enter an integer: 23
8. Enter an integer: 54
9. Enter an integer: 10
10. Enter an integer: 99
11. Enter an integer: 56
12. Enter an integer: 84
13. Enter an integer: 10
14. Enter an integer: 23
15. Enter an integer: 67

Array elements are:

    15    20    55    87   985    14    23    54    10    99
    56    84    10    23    67

 Total of numbers is: 1602

number[4]= 985
Press any key to continue . . .

1. Enter an integer: 10
2. Enter an integer: 20
3. Enter an integer: 35
4. Enter an integer: 45
5. Enter an integer: 578
6. Enter an integer: 45
7. Enter an integer: 4576
8. Enter an integer: 7
9. Enter an integer: 67
10. Enter an integer: 275
11. Enter an integer: 7847
12. Enter an integer: 47527
13. Enter an integer: 8752
14. Enter an integer: 4214
15. Enter an integer: 476

Array elements are:

    10    20    35    45   578    45  4576     7    67   275
  7847 47527  8752  4214   476

 Total of numbers is: 74474

number[11]= 47527
Press any key to continue . . .

1. Enter an integer: 5
2. Enter an integer: 0
3. Enter an integer: 0
4. Enter an integer: 0
5. Enter an integer: 0
6. Enter an integer: 0
7. Enter an integer: 0
8. Enter an integer: 0
9. Enter an integer: 0
10. Enter an integer: 0
11. Enter an integer: 0
12. Enter an integer: 0
13. Enter an integer: 0
14. Enter an integer: 0
15. Enter an integer: 0

Array elements are:

     5     0     0     0     0     0     0     0     0     0
     0     0     0     0     0

 Total of numbers is: 5

number[0]= 5
Press any key to continue . . .
*/