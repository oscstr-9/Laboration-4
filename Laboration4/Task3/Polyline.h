#pragma once
#include "Point2D.h"
class Polyline
{
	Point2D *polylineArray;
	int sizeOfPolyline;
	int currentSize;

public:
	Polyline(int sizeOfPolylineIn);
	virtual ~Polyline();

	int addPoint(Point2D &p);
	Point2D getPoint(int i);
	void removeLastPoint();
	bool hasPoints();
	int currentSizeInArr();
	float length();
	void coords();
};

