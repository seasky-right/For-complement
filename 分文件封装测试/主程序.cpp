#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

void Position(Point p, Circle c) {
	int dx = p.Getx() - c.GetcenterX();
	int dy = p.Gety() - c.GetcenterY();
	int distanceSquared = dx * dx + dy * dy;
	int radiusSquared = c.Getr() * c.Getr();
	if (distanceSquared < radiusSquared) {
		cout << "Inside the circle" << endl; // Inside the circle
	} else if (distanceSquared == radiusSquared) {
		cout << "On the circle" << endl; // On the circle
	} else {
		cout << "Outside the circle" << endl; // Outside the circle
	}
}

int main() {

	Point p;
	p.Setx(10);
	p.Sety(10);

	Circle c;
	Point center;
	c.Setcenter(&center);
	c.Setr(5);
	center.Setx(10);
	center.Sety(10);
	
	
	Position(p, c);

	system("pause");
	return 0;
}