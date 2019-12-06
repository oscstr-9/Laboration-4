#include "Point2D.h"
#include <IOstream>

using namespace std;

void main() {
	Point2D p1(8,7);
	Point2D p2(2,1);
	Point2D p3(p1);
	Point2D p4(p3+p2);
	Point2D p5 = p4;
	float distP1P2 = p1.DistanceOfPoints(p2);
	float distP2P3 = p2.DistanceOfPoints(p3);
	float distP1P4 = p1.DistanceOfPoints(p4);
	bool isEqualP1P3 = p1 == p3;
	bool isEqualP2P3 = p2 == p3;
	bool isEqualP1P4 = p1 == p4;
	bool isEqualP2P4 = p2 == p4;
	bool isEqualP3P4 = p3 == p4;
	string stringPointP1 = p1.toString();
	string stringPointP2 = p2.toString();
	string stringPointP3 = p3.toString();
	string stringPointP4 = p4.toString();
	string stringPointP5 = p5.toString();


	cout << "Distance between P1 and P2: " << distP1P2 << endl;
	cout << "Distance between P2 and P3: " << distP2P3 << endl;
	cout << "Distance between P1 and P4: " << distP1P4 << endl;
	
	cout << "Point 1: " << stringPointP1 << endl;
	cout << "Point 2: " << stringPointP2 << endl;
	cout << "Point 3: " << stringPointP3 << endl;
	cout << "Point 4: " << stringPointP4 << endl;
	cout << "Point 5: " << stringPointP5 << endl;
	
	cout << "If P1 == P3: " << isEqualP1P3 << endl;
	cout << "If P2 == P3: " << isEqualP2P3 << endl;
	cout << "If P1 == P4: " << isEqualP1P4 << endl;
	cout << "If P2 == P4: " << isEqualP2P4 << endl;
	cout << "If P3 == P4: " << isEqualP3P4 << endl;
	
	system("pause");
}