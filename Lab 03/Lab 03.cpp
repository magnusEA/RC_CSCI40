// CSCI 40
// Lab 03 Converting seconds to hours, minutes, and seconds
//Edgar Abundiz

#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int H, seconds, M, S;
	cout << "************************************************************************" << endl;
	cout << " This program will convert seconds to hours, minutes, and seconds" << endl;
	cout << "************************************************************************" << endl;
	
	cout << "Enter the seconds:";
	cin >> seconds;

	M = seconds / 60;
	S = seconds % 60;
	H = M / 60;
	M = M % 60;

	cout << H << " Hours " << M << " Minutes " << S << " Seconds " << endl;
		
	system("pause");
	return 0;
}
/*************************************************************************
 This program will convert seconds to hours, minutes, and seconds
************************************************************************
Enter the seconds:12345
3 Hours 25 Minutes 45 Seconds
Press any key to continue . . .
************************************************************************
This program will convert seconds to hours, minutes, and seconds
************************************************************************
Enter the seconds:2250
0 Hours 37 Minutes 30 Seconds
Press any key to continue . . .
************************************************************************
This program will convert seconds to hours, minutes, and seconds
************************************************************************
Enter the seconds:1555550
432 Hours 5 Minutes 50 Seconds
Press any key to continue . . .
*/