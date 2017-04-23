//Csci 40
// Lab 12 - Two Dimensional Array
// Edgar Abundiz

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Global Constants
const int ROW = 3;
const int COL = 5;

// Function Prototype
void Sum_Rows(const int numbers[][COL], int row);
void Sum_Col(const int numbers[][COL], int row);

int main()
{
	// define variables
	int row, col;
	int numbers[ROW][COL] = { { 12, 24, 32, 21, 42 }, { 14, 61, 87, 65, 90 }, { 19, 7, 24, 12, 8 } };
	
	// start loop to display numbers and get the total for rows
	 Sum_Rows(numbers, ROW);
	 cout << "  ---- ---- ---- ---- ---- + ---- " << endl;

	// display and add numbers for columns
    Sum_Col( numbers, COL);
	cout << endl;


	system("pause");
	return 0;
}

// Functions
void Sum_Rows(const int numbers[][COL], int row)
{
	for (row = 0; row < ROW; row++)
	{
		int sum = 0;
		for (int col = 0; col < COL; col++)
		{
			sum += numbers[row][col];
			cout << setw(5) << numbers[row][col];
		}
		cout << "  |   " << sum << endl;
	}
}
void Sum_Col(const int numbers[][COL], int row)
{
	int total = 0;

	for (int col = 0; col < COL; col++)
	{
		int sum = 0;
		for (row = 0; row < ROW; row++)
		{
			sum += numbers[row][col];
		}
		
		cout << setw(5) << sum;
		total += sum;
	}
	cout << setw(5) << "  " << total;
}
/*
   12   24   32   21   42  |   131
   14   61   87   65   90  |   317
   19    7   24   12    8  |   70
  ---- ---- ---- ---- ---- + ----
   45   92  143   98  140     518
Press any key to continue . . .

   12   24   32   21   42  |   131
   14   61   87   65   90  |   317
   19    7   24   12    8  |   70
  ---- ---- ---- ---- ---- + ----
   45   92  143   98  140     518
Press any key to continue . . .

   12   24   32   21   42  |   131
   14   61   87   65   90  |   317
   19    7   24   12    8  |   70
  ---- ---- ---- ---- ---- + ----
   45   92  143   98  140     518
Press any key to continue . . .
*/
