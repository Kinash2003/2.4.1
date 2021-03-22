//Matrix.cpp
#include <Windows.h> 
#include "Matrix.h"

Matrix::Matrix()
{
	N = 1;

	K = new Humber[N];
	K[0] = Humber(N);
}

Matrix::Matrix(int N = 1)
{
	
	this->N = N < 3 ? 3 : N;

	K = new Humber[this->N];
	for (int i = 0; i < this->N; i++) { K[i] = Humber(this->N); }
}

Matrix::Matrix(int N, Humber* A)
{
	this->N = N;
	K = A;
}

int Matrix::GetN() const { return N; }

Humber& Matrix::operator[] (int i) { return K[i]; }
Matrix& Matrix::operator = (const Matrix& A)
{
	N = A.N;
	
	K = A.K;
	return *this;
}

Matrix::operator string() const
{
	stringstream ss;
	for (int i = 0; i < this->GetN(); i++)
	{
		for (int j = 0; j < this->GetN(); j++)
		{
			ss << K[i].v[j] << "  ";
		}
		ss << endl;
	}
	return ss.str();
}

ostream& operator << (ostream& out, const Matrix& A)
{
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Matrix& A)

{
	for (int i = 0; i < A.GetN(); i++)
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		cout << "Введіть рядок " << A.GetN() << " елементів " << endl;
		for (int j = 0; j < A.GetN(); j++)
		{
			in >> A.K[i].v[j];
		}
		
	}
	return in;
}

void operator + (Matrix& A, Matrix& B)
{
	Matrix Result(A.GetN());

	for (int i = 0; i < A.GetN(); i++)
		for (int j = 0; j < B.GetN(); j++)
			Result[i][j] = A[i][j] - B[i][j];
	cout << Result;
}

bool operator == (Matrix& A, Matrix& B)
{
	int Counter = 0;

	for (int i = 0; i < A.GetN(); i++)
		for (int j = 0; j < A.GetN(); j++)
			if (A[i][j] == B[i][j])
				Counter++;
	return Counter == A.GetN() * A.GetN() ? true : false;
}

double Matrix::MatrixNorm()
{
	double SumToSquare = 0;

	for (int i = 0; i < this->GetN(); i++)
		for (int j = 0; j < this->GetN(); j++)
			SumToSquare += this->K[i][j] * this->K[i][j];

	return sqrt(SumToSquare);
}

void Matrix::ComparisonMatrix(Matrix& A, Matrix& B)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	if (A == B) cout << "Матриці рівні" << endl;
	else cout << "Матриці не рівні" << endl;
}

Matrix::~Matrix()
{
	for (int i = 0; i < N; i++)
		if (K[i].v != nullptr)
			delete[](K[i].v);

	if (K != nullptr)
		delete[] K;
}