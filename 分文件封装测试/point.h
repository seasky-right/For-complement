#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	void Setx(int a);

	int Getx();

	void Sety(int a);

	int Gety();

private:
	int x, y;
};