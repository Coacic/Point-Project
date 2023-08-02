#include"Point.h"
#include<iostream>
#include<vector>
using namespace std;
#pragma once
#ifndef _PATH_H_
#define _PATH_H_
class Path {
	vector<Point> list;
public:
	Path();
	~Path() {
		list.empty();
	}
	friend Path& operator+=(Path& p, Point& t);
	double lengthOfTheRoad(Path& p);
	friend ostream& operator<<(ostream& it, Path& p);
};
#endif//!_PATH_H