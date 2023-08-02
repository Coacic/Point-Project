#include"Vehicle.h"
Vehicle::Vehicle(string naziv)
{
	model= model + naziv;
}

double Vehicle::Price(Vehicle& v, Path& p)
{
	return 120 + p.lengthOfTheRoad(p) * 0.1;
}

ostream& operator<<(ostream& it, Vehicle& v)
{
	cout << v.model << endl;
	return it;
}
