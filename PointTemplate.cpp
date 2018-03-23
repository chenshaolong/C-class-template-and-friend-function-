#include <iostream>
#include "PointTemplate.h"
using namespace std;

int main()
{
	{
		cout << "double type: \n";
		Point<double> p1(1.0, 2.0);
		cout << "P1 "; 
		p1.show();
		cout << "\nP1's distance to origin = " << p1.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point<> p2(p1);
		cout << "P2 "; 
		p2.show();
		cout << "\nP2's distance to origin = " << p2.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point<double> p3 = p1;
		cout << "P3 "; 
		cout << p3;
		cout << "\nP3's distance to origin = " << p3.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";
	}


	{
		cout << "\nint type: \n";
		Point<int> p4(3, 3);
		cout << "P4 "; 
		p4.show();
		cout << "\nP4's distance to origin = " << p4.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point<int> p5(p4);
		cout << "P5 "; 
		cout << p5;
		cout << "\nP5's distance to origin = " << p5.distanceToOrigin() << endl;
	cout << "~~~~~~~~~~~\n";
	}


	cout << "\nDone.\n";
	return 0;
}