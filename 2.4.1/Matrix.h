//Matrix.h
#pragma once
#include "Humber.h"

class Matrix
{
private:
	int N;
	Humber* K;
public:
	Matrix();
	Matrix(int);
	Matrix(int N, Humber*);

	int GetN() const;

	Humber& operator[] (int);
	Matrix& operator = (const Matrix&);//
	friend ostream& operator << (ostream&, const Matrix&);//
	friend istream& operator >> (istream&, Matrix&);//
	operator string() const;//

	friend void operator + (Matrix&, Matrix&);
	friend bool operator == (Matrix&, Matrix&);

	double MatrixNorm();
	void ComparisonMatrix(Matrix&, Matrix&);
	


	~Matrix();
};
