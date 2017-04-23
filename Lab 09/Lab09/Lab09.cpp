//CSCI 40
//Lab09-while and for loop trig tables
// Edgar Abundiz

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#define PI 3.1415
using namespace std;

int main()
{
	//define variables used
	const float deg_to_rad = PI / 180;
	int degree = 0, degree2 = 0;
	double radian, radian2;

	//display table header
	cout << "        Degree" << "\t" << "\t    sin " << "\t" << "\t  cos " << endl;

	//begin while table loop
	while (degree <= 360)
	{
		radian = degree * deg_to_rad;
		cout << "\t" << setw(4) << degree << setw(21) <<
		setprecision(4) << fixed << right << sin(radian) << setw(21) <<
		setprecision(4) << fixed  <<  right << cos(radian) << endl;
		degree = degree + 15;
	}

	// start for loop
	cout << endl << endl << endl;
	cout << "        Degree" << "\t" << "\t    sin " << "\t" << "\t  cos " << "\t\t       tan " << endl;

	for (degree2; degree2 <= 360; degree += 15)
	{
		radian2 = degree2 * deg_to_rad;
		cout << "\t" << setw(4) << degree2 << setw(21) <<
		setprecision(4) << fixed << right << sin(radian2) << setw(21) <<
		setprecision(4) << fixed << right << cos(radian2);
		
		// show angles that are undefined at tanget
		if (degree2 == 90 || degree2 == 270)
			cout << setw(21) << "undefined" << endl;

		else
			//tanget statement
			cout << setw(21) << setprecision(4) << fixed << right << tan(radian2) << endl;

			//then counter degree2+=15
		degree2 += 15;
	}


	system("pause");
	return 0;
}

/*
        Degree              sin                   cos
           0               0.0000               1.0000
          15               0.2588               0.9659
          30               0.5000               0.8660
          45               0.7071               0.7071
          60               0.8660               0.5000
          75               0.9659               0.2589
          90               1.0000               0.0000
         105               0.9659              -0.2588
         120               0.8661              -0.4999
         135               0.7072              -0.7071
         150               0.5001              -0.8660
         165               0.2589              -0.9659
         180               0.0001              -1.0000
         195              -0.2587              -0.9660
         210              -0.4999              -0.8661
         225              -0.7070              -0.7072
         240              -0.8660              -0.5001
         255              -0.9659              -0.2589
         270              -1.0000              -0.0001
         285              -0.9660               0.2587
         300              -0.8661               0.4999
         315              -0.7072               0.7070
         330              -0.5001               0.8659
         345              -0.2590               0.9659
         360              -0.0002               1.0000



        Degree              sin                   cos                  tan
           0               0.0000               1.0000               0.0000
          15               0.2588               0.9659               0.2679
          30               0.5000               0.8660               0.5773
          45               0.7071               0.7071               1.0000
          60               0.8660               0.5000               1.7319
          75               0.9659               0.2589               3.7315
          90               1.0000               0.0000            undefined
         105               0.9659              -0.2588              -3.7329
         120               0.8661              -0.4999              -1.7323
         135               0.7072              -0.7071              -1.0001
         150               0.5001              -0.8660              -0.5775
         165               0.2589              -0.9659              -0.2680
         180               0.0001              -1.0000              -0.0001
         195              -0.2587              -0.9660               0.2678
         210              -0.4999              -0.8661               0.5772
         225              -0.7070              -0.7072               0.9998
         240              -0.8660              -0.5001               1.7316
         255              -0.9659              -0.2589               3.7301
         270              -1.0000              -0.0001            undefined
         285              -0.9660               0.2587              -3.7342
         300              -0.8661               0.4999              -1.7327
         315              -0.7072               0.7070              -1.0003
         330              -0.5001               0.8659              -0.5776
         345              -0.2590               0.9659              -0.2681
         360              -0.0002               1.0000              -0.0002
Press any key to continue . . .

*/
