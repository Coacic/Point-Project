#include"Path.h"
#include<string>
#pragma once
#ifndef _VEHICLE_H_
#define _VEHICLE_H_

class Vehicle {
	string model="";
public:
	Vehicle(string naziv);
	double Price(Vehicle& v, Path& p);
	friend ostream& operator<<(ostream& it, Vehicle& v);
};

#endif//!_VEHICLE_H