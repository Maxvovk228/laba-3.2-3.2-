#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	if (x < 0 && b != 0)
		F = a - x / (10 + b );
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = 3 * x + (c / 2.0 );
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
