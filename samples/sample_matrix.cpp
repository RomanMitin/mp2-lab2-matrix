// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

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
