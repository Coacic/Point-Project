#include "Point.h"

Point::Point(int xx, int yy)
{
	x = xx;
	y = yy;
}

bool Point::operator==(Point& t1)
{
	if (x == t1.x && y == t1.y) {
		cout << "Points are equal!" << endl;
		return true;
	}
	cout << "Points are not equal!" << endl;
	return false;
}

double Point::distanceBetweenTwoPoints(Point& t1)
{
	return sqrt(pow(t1.x - x, 2) + pow(t1.y - y, 2));
}

ostream& operator<<(ostream& it, Point& t)
{
	cout << "(" << t.x << ", " << t.y << ")" << endl;
	return it;
}
