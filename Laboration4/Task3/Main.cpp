#include "Point2D.h"
#include "Polyline.h"
#include <IOstream>

using namespace std;

void main() {

	Point2D p1(6, 7), p2(1, 2), p3(3, 0), p4(4, 9), p5(5, 8);
	Polyline polyline(4);

	cout << polyline.hasPoints() << endl;

	polyline.addPoint(p1);
	cout << polyline.getPoint(0).toString() << endl;
	polyline.addPoint(p2);
	polyline.addPoint(p3);
	polyline.addPoint(p4);
	polyline.addPoint(p5);

	cout << polyline.getPoint(2).toString() << endl;
	polyline.removeLastPoint();
	cout << polyline.hasPoints() << endl;
	cout << polyline.currentSizeInArr() << endl;

	cout << polyline.length() << endl;

	polyline.coords();

	system("pause");
}