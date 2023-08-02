#include<iostream>
#include<math.h>
using namespace std;
#pragma once
#ifndef _POINT_H_
#define _POINT_H_
class Point {
	int x;
	int y;
public:
	Point(int xx, int yy);
	bool operator==(Point& t1);
	friend ostream& operator<<(ostream& it, Point& t);
	double distanceBetweenTwoPoints(Point& t1);
};
#endif//!_POINT_H