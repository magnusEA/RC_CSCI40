// Monthly Payment
// CSCI 40
// Edgar Abundiz

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

// Function Prototype
float Monthly_Rate(float annual, float monthlyrate);
float Monthly_Payments(float monthlyrate, float L, float monthly, int n);
float Percentage_rate(float monthlyrate, float percentrate);
void Display_Description();
bool again();

int main()
{
	//define variables
	float L, monthly, interest, amount, annual, monthlyrate;
	monthlyrate = 0;
	monthly = 0;
	float percentrate = 0;
	int n;

	//display what program does
	Display_Description();

	// prompt user for numbers
	do
	{
		cout << "Enter the loan amount: $";
		cin >> L;
		cout << "Enter the yearly interest rate percent in decimal form: ";
		cin >> annual;
		cout << "Enter the number of payments: ";
		cin >> n;

		//calculate numbers
		monthlyrate = Monthly_Rate(annual, monthlyrate);
		monthly = Monthly_Payments(monthlyrate, L, monthly, n);
		amount = monthly * n;
		interest = amount - L;
		percentrate = Percentage_rate(monthlyrate, percentrate);

		//display report
		cout << endl << endl;
		cout << "Loan Amount:                  $" << setprecision(2) << fixed << L << endl;
		cout << "Monthly Interest Rate:         " << setprecision(2) << fixed << percentrate << "%" << endl;
		cout << "Number Of Payments:            " << setprecision(2) << fixed << n << endl;
		cout << "Monthly Payment:              $" << setprecision(2) << fixed << monthly << endl;
		cout << "Amount Paid Back:             $" << setprecision(2) << fixed << amount << endl;
		cout << "Interest Paid:                $" << setprecision(2) << fixed << interest << endl;
		cout << endl << endl;
	} while (again());


	system("pause");
	return 0;
}

//Function Definitions
float Monthly_Rate(float annual, float monthlyrate)
{
	monthlyrate = annual / 12;
	return monthlyrate;
}

float Monthly_Payments(float monthlyrate, float L, float monthly, int n)
{
	monthly = (monthlyrate *(L * pow(monthlyrate + 1, n))) / (pow(1 + monthlyrate, n) - 1);
	return monthly;
}

void Display_Description()
{
	cout << "This program calculates monthy payments on a loan." << endl << endl;
}

float Percentage_rate(float monthlyrate, float percentrate)
{
	percentrate = monthlyrate * 100;
	return percentrate;
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

/*
This program calculates monthy payments on a loan.

Enter the loan amount: $10000
Enter the yearly interest rate percent in decimal form: .12
Enter the number of payments: 36


Loan Amount:                  $10000.00
Monthly Interest Rate:         1.00%
Number Of Payments:            36
Monthly Payment:              $332.14
Amount Paid Back:             $11957.15
Interest Paid:                $1957.15


Repeat? (y/n):
----------------------------------------------------------------------
This program calculates monthy payments on a loan.

Enter the loan amount: $500
Enter the yearly interest rate percent in decimal form: .50
Enter the number of payments: 12


Loan Amount:                  $500.00
Monthly Interest Rate:         4.17%
Number Of Payments:            12
Monthly Payment:              $53.79
Amount Paid Back:             $645.51
Interest Paid:                $145.51


Repeat? (y/n): y
Enter the loan amount: $50000
Enter the yearly interest rate percent in decimal form: .17
Enter the number of payments: 24


Loan Amount:                  $50000.00
Monthly Interest Rate:         1.42%
Number Of Payments:            24
Monthly Payment:              $2472.10
Amount Paid Back:             $59330.47
Interest Paid:                $9330.47


Repeat? (y/n): n
Press any key to continue . . .
----------------------------------------------------------------------
This program calculates monthy payments on a loan.

Enter the loan amount: $27500
Enter the yearly interest rate percent in decimal form: .15
Enter the number of payments: 36


Loan Amount:                  $27500.00
Monthly Interest Rate:         1.25%
Number Of Payments:            36
Monthly Payment:              $953.29
Amount Paid Back:             $34318.53
Interest Paid:                $6818.53


Repeat? (y/n): n
Press any key to continue . . .
*/