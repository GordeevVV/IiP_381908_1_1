#include "Vector3D.h"
#include <iostream>
#include<locale.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	Vector3D V1, V2,V3;
	cout << "V1(x,<enter>,y,<enter>,z,<enter>)=" << endl;
	cin >> V1;
	cout << "V1=" << endl<< V1 << endl;
	cout << "V2(x,<enter>,y,<enter>,z,<enter>)=" << endl;
	cin >> V2;
	cout << "V2=" << endl << V2 << endl;
	V3 = V2;
	cout << "����� �������� (V1+V3)" << endl;
	cout << V1 + V3 << endl;
	cout << "�������� �������� (V1-V2)" << endl;
	cout << V1 - V2 << endl;
	cout << "������������ ��������(V1*V3)" << endl;
	cout << V1 * V3 << endl;
	cout << "������� ����� �����" << endl;
	cin >> k;
	cout << "��������� ������� �� �����(V1*k)" << endl;
	cout << V1.sclumn(k) << endl;
	cout << " ��������� �������� (V1 and V3)" << endl;
	cout << V1.sravnenie(V3) << endl;
	return 0;
		
}