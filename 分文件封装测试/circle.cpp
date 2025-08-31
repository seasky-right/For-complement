#include"circle.h"
#include"point.h"

void Circle::Setr(int a) {
	r = a;
}
int Circle::Getr() {
	return r;
}

void Circle::Setcenter(Point* p) {
	center = p;
}
int Circle::GetcenterX() {
	return center->Getx();
}
int Circle::GetcenterY() {
	return center->Gety();
}