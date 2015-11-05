#ifndef CLASS_AREA
#define CLASS_AREA

#include <fstream>
#include "Comparator.h"
#include "Point2D.h"
#include "Point.h"

using namespace std;

class Area {
public:
	Point2D xy[4];
	double z[2];
	double coefficient;

	Area();
	Area(Point2D[], double[2], double);

	bool isContain(Point);
	void operator <<(ifstream &);

private:
	double getAreaOfTriangle(Point2D, Point2D, Point2D);
	double calculateAreaWithPoint(Point2D);
	double calculateAreaWithoutPoint();
};

#endif
