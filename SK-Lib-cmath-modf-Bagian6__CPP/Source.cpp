#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 
*/

using namespace std;

int main() {
	int x = 5;
	double intpart, fractpart;
	fractpart = modf(x, &intpart);
	cout << x << " = " << intpart << " + " << fractpart << endl;

	_getch();
	return 0;
}