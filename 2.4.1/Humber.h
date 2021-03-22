//Humber.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Humber
{
public:
	double* v;

	Humber();
	Humber(int);
	double& operator [] (int);
};
