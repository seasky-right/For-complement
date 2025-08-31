#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle
{
public:
	void Setr(int a);

	int Getr();

	void Setcenter(Point* p);

	int GetcenterX();

	int GetcenterY();

private:
	int r;
	Point* center;
};
