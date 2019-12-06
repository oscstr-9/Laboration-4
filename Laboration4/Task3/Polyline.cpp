#include <IOstream>
#include "Polyline.h"
using namespace std;


Polyline::Polyline(int sizeOfPolylineIn){
	sizeOfPolyline = sizeOfPolylineIn;
	polylineArray = new Point2D[sizeOfPolyline];
	currentSize = 0;
}

int Polyline::addPoint(Point2D &p) {
	
	if (currentSize < sizeOfPolyline) {
		polylineArray[currentSize] = p;
		currentSize++;
	}
	else {
		cout << "Polyline is full!" << endl;
	}
	return currentSize;
}

Point2D Polyline::getPoint(int i) {
	if (i >= currentSize) {
		cout << "Out of index!" << endl;
		return Point2D();
	}
	else {
		return polylineArray[i];
	}
}

void Polyline::removeLastPoint() {
	if (currentSize != 0) {
		currentSize--;
	}
	else {
		cout << "Polyline is empty!" << endl;
	}
}

bool Polyline::hasPoints() {

	if (currentSize == 0) {
		return false;
	}
	else{
		return true;
	}
}

float Polyline::length() {
	float distance = 0;
	for (int i = 0; i < currentSize - 1; i++) {
		distance += getPoint(i).DistanceOfPoints(getPoint(i + 1));
	}
	return distance;
}

int Polyline::currentSizeInArr() {
	return currentSize;
}

void Polyline::coords() {
	for (int i = 0; i < currentSizeInArr(); i++) {
		cout << getPoint(i).toString() << endl;
	}
}

Polyline::~Polyline(){
	delete[] polylineArray;
}
