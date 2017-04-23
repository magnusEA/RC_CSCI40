//CSCI 40
//Term Project Rainfall
//Edgar Abundiz

#include <iostream>
#include <string>
using namespace std;

//Fuction prototype
string maxRain(double [], string [], int );
string minRain(double [], string [], int );
double totRain(double [], int );
double avgRain(double [], int );
bool again();

int main()
{
	//define variables
	double totRainfall = 0.0;
	double avgRainfall = 0.0;
	string minRainfallMonth;
	string maxRainfallMonth;

	//Define array for months
	const int SIZE = 12;
	string months[SIZE] = { "January", "February", "March", "April", "May", "June", "July", "August",
							"September", "October", "November", "December" };
	double totals[SIZE];


	//description
	cout << "For each propmt enter total rainfall for each month in inches" << endl;
	cout << "--------------------------------------------------------------" << endl;

	do
	{

		//prompt user for rainfalls each month
		for (int i = 0; i < SIZE; i++)
		{

			cout << "Enter rainfall for " << months[i] << ": ";
			cin >> totals[i];

			//prevent user from entering a negatives number for rainfall
			if (totals[i] < 0)
			{
				cout << "Number has to be positive or zero" << endl;
				cout << "Enter rainfall for " << months[i] << ": ";
				cin >> totals[i];
			}


		}

		// call functions
		maxRainfallMonth = maxRain(totals, months, SIZE);
		minRainfallMonth = minRain(totals, months, SIZE);
		totRainfall = totRain(totals, SIZE);
		avgRainfall = avgRain(totals, SIZE);
		cout << endl << endl;


		//display results
		cout << "Total rainfall: " << totRainfall << " inches" << endl;
		cout << "Average rainfall: " << avgRainfall << " inches" << endl;
		cout << "Least rainfall in: " << minRainfallMonth << endl;
		cout << "Most rainfall in: " << maxRainfallMonth << endl;
	} while (again());

	cout << endl << endl;
	system("pause");
	return 0;
}


//function definitions
double avgRain(double arr[], int size)
{
	double tot = 0.0;
	for (int i = 0; i<size; i++)
		tot += arr[i];

	return tot / size;
}

double totRain(double arr[], int size)
{
	double tot = 0.0;
	for (int i = 0; i<size; i++)
		tot += arr[i];

	return tot;
}


string maxRain(double arr[], string months[], int size)
{
	double max = arr[0];
	int idx = 0;
	for (int i = 0; i<size; i++)
	if (arr[i]>max)
	{
		max = arr[i];
		idx = i;
	}

	return months[idx];
}


string minRain(double arr[], string months[], int size)
{
	double min = arr[0];
	int idx = 0;
	for (int i = 0; i<size; i++)
	if (arr[i]<min)
	{
		min = arr[i];
		idx = i;
	}

	return months[idx];
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
For each propmt enter total rainfall for each month in inches
--------------------------------------------------------------
Enter rainfall for January: 1
Enter rainfall for February: 2
Enter rainfall for March: 3
Enter rainfall for April: 4
Enter rainfall for May: 5
Enter rainfall for June: 6
Enter rainfall for July: 7
Enter rainfall for August: 8
Enter rainfall for September: 9
Enter rainfall for October: 10
Enter rainfall for November: 11
Enter rainfall for December: 12


Total rainfall: 78 inches
Average rainfall: 6.5 inches
Least rainfall in: January
Most rainfall in: December
Repeat? (y/n): n


Press any key to continue . . .

For each propmt enter total rainfall for each month in inches
--------------------------------------------------------------
Enter rainfall for January: 1.5
Enter rainfall for February: 2.33
Enter rainfall for March: 4.2
Enter rainfall for April: 11.1
Enter rainfall for May: 12.2
Enter rainfall for June: 5.4
Enter rainfall for July: 2.3
Enter rainfall for August: 7.9
Enter rainfall for September: 11.2
Enter rainfall for October: 4.3
Enter rainfall for November: 2.2
Enter rainfall for December: 13.5


Total rainfall: 78.13 inches
Average rainfall: 6.51083 inches
Least rainfall in: January
Most rainfall in: December
Repeat? (y/n): n


Press any key to continue . . .

For each propmt enter total rainfall for each month in inches
--------------------------------------------------------------
Enter rainfall for January: -10
Number has to be positive or zero
Enter rainfall for January: 5.5
Enter rainfall for February: -8
Number has to be positive or zero
Enter rainfall for February: 10
Enter rainfall for March: -8
Number has to be positive or zero
Enter rainfall for March: 6
Enter rainfall for April: 4
Enter rainfall for May: 7
Enter rainfall for June: 8
Enter rainfall for July: 9
Enter rainfall for August: 10
Enter rainfall for September: 15
Enter rainfall for October: 22
Enter rainfall for November: 1
Enter rainfall for December: -7
Number has to be positive or zero
Enter rainfall for December: 3


Total rainfall: 100.5 inches
Average rainfall: 8.375 inches
Least rainfall in: November
Most rainfall in: October
Repeat? (y/n): n


Press any key to continue . . .
*/