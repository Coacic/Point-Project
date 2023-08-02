#include"Vehicle.h"
using namespace std;
int main() {
	double x, x2;
	bool pom = false;
	string xx;
	Path p;
	p = Path();
	Point t1(3,5);
	Point t2(-2, 4);
	p += t1;
	p += t2;
	x = p.lengthOfTheRoad(p);
	cout << x << endl;
	cout << p << endl;
	return 0;
}