//Humber.cpp
#include "Humber.h"

Humber::Humber()
{
	v = new double[1];
	v[0] = 0;
}
Humber::Humber(int N = 1)
{
	
	v = new double[N];

	for (int j = 0; j < N; j++)
		v[j] = 0;
}
double& Humber::operator[] (int j) { return v[j]; }