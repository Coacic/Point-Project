#include "Path.h"

Path::Path()
{
}

double Path::lengthOfTheRoad(Path& p)
{
	int i = 0;
	double d = 0;
	while ( i < p.list.size()-1) {
		d = d+ p.list[i].distanceBetweenTwoPoints(p.list[i+1]);
		i++;
	}
	return d;
}

Path& operator+=(Path& p, Point& t)
{
	p.list.push_back(t);
	return p;
}

ostream& operator<<(ostream& it, Path& p)
{
	for (int i = 0; i < p.list.size(); i++) {
		cout << p.list[i]<<endl;
	}
	return it;
}
