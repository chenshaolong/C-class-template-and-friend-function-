// abstract base class and class inheritence

#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	{
		cout << "2D points: \n";
		Point2D p1(1.0, 2.0);
		cout << "P1 "; 
		p1.show();
		cout << "P1's distance to origin = " << p1.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point2D p2(p1);
		cout << "P2 "; 
		p2.show();
		cout << "P2's distance to origin = " << p2.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point2D p3 = p1;
		cout << "P3 "; 
		cout << p3;
		cout << "P3's distance to origin = " << p3.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";


		cout << "\n3D points: \n";
		Point3D p4(3.0, 3.0, 3.0);
		cout << "P4 "; 
		p4.show();
		cout << "P4's distance to origin = " << p4.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point3D p5(p4);
		cout << "P5 "; 
		cout << p5;
		cout << "P5's distance to origin = " << p5.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";

		Point3D p6 = p5;
		cout << "P6 "; 
		cout << p6;
		cout << "P6's distance to origin = " << p6.distanceToOrigin() << endl;
		cout << "~~~~~~~~~~~\n";
	}

	cout << "\nDone.\n";
	return 0;
}