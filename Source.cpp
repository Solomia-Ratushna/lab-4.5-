#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,R;
	cout << " 'R':"; cin >> R;
	cout << endl;
	;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((y > -R && x < R / 2) && y > -(x * 2)) || ((y > -R && x > R / 2) && y > -((R - x) * 2)))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = (2*R)  * rand() / RAND_MAX - R;
		y = (2*R) * rand() / RAND_MAX - R;
		if (((y > -R && x < R / 2) && y > -(x * 2)) || ((y > -R && x > R / 2) && y > -((R - x) * 2)))
			
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}