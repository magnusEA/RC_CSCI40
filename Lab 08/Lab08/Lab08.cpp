// CSCI 40
// Lab 08- Loops with Input File
// Edgar Abundiz

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	// define variables 
	ifstream data;
	int num;
	int total = 0;
	int sum = 0;
	int average;

	// open input file 
	data.open("data_in_2.txt");

	// check file open successfully or not 
	if (!data)
	{
		cout << "Error, use data_in_1.txt or data_in_2.txt " << endl;
		system("pause");
		return 0;
	}

	//---- display header on sreen ---
	else
	{
		cout << " Numbers Read: " << endl;
		data >> num;
		while (!data.eof())
		{
			
			sum += num;
			total++;

			cout << setw(7) << num;
			cout << " ";
			data >> num;
			
		}
		average = sum / total;
		cout << endl << endl << endl;
		num++;
		cout << "There are " << total << " numbers " << endl;
		cout << "Sum = " << sum << endl;
		cout << "Average = " << average;

		data.close();
	}
	
	
	





	cout << endl;
	system("pause");
	return 0;
}


/*
Numbers Read:
123  456  9  -441  93


There are 5 numbers
Sum = 240
Average = 48
Press any key to continue . . .
*/

/*
Numbers Read:
74      38       2      68      74      32      98       1      63      68
58      64       4       3      56      26      36      41       5      44
 7      14      50      48      37      33      25      21      88      30
19      11      29      21      32      94      83      95      16      65
15      36      44      66      14      25      20       8      96       8
39       0      17      50      95      12      86      80      46      89
98      24      25      19      81      74      33      46      84      54
67      66      82       0      51      60      34      82      47       4
86      49      16      10      24      62      30      76      90      55
77      83      38      34      51      69      19      80      20      79
50      98      39      47      49       8       3      84      77      42
 2      25      94      83      12


There are 115 numbers
Sum = 5311
Average = 46
Press any key to continue . . .

Error, use data_in_1.txt or data_in_2.txt
Press any key to continue . . .
*/