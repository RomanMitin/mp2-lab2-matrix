// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

using namespace std;

void main()
{
	 
	bool flag = true;
	while (flag)
	{
		cout << "Enter size of matirix\n";
		int N;
		cin >> N;
		TMatrix<double> a(N), b(N);
		cout << "Enter matrix a\n";
		cin >> a;
		cout << "Enter matrix b\n";
		cin >> b;
		
		cout << "Enter what you want to do\n";
		char s;
		cin >> s;
		switch (s)
		{
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		default:
			cout << "Wrong operation";
			break;
		}
		cout << "\nType 0 for finish\n";
		cin >> flag;
	}
}
//---------------------------------------------------------------------------
