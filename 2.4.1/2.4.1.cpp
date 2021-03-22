//2.4.1.cpp
#include <iostream>
#include "Matrix.h"
#include <Windows.h> 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Matrix A(3), B(3),z;
	
	cout << "Введіть матриця 1" << endl;
	cin >> A;

	cout << "Матриця 1:" << endl;
	cout << A;

	cout << "Обчислення норми матриці 1:" << A.MatrixNorm() << endl;

	cout << "Введіть матриця 2" << endl;
	cin >> B;

	cout << "Матриця 2:" << endl;
	cout << B;

	cout << "Обчислення норми матриці 2:" << B.MatrixNorm() << endl;


	cout << "Порівняння матриць 1 і 2:" << endl;
	A.ComparisonMatrix(A, B);

	cout << "Матриця 1 - Матриця 2:" << endl;
	A + B;
	
	return 0;
}