#include <iostream>

using namespace std;

int factorial(int a);
int fibonach(int a;)
int main()
{
	setlocale(0, "");
	int a = 0, fac = 1, fib = 0;
	cout << "������� �����:";
	cin >> a;
	fac = factorial(a);
	fib = fibonach(a);
	cout << "��������� �����: " << fac << endl;
	cout << "����� ��������� �����: " << fib << endl;
	if (fib > fac)
		cout << "����� ��������� ������" << endl;
	else
		cout << "��������� ������" << endl;
	return 0;
}

int factorial(int a)
{
	int res = 1;
	for (int i = 1; i <= a; i++)
		res *= i;
	return res;
}

int fibonach(int a)
{
	res = 0;
	if (a < 1)
		return 0;
	if (i == 1)
		return 1;
	res = fibonach(a - 1) + fibonach(a - 2);
	return res;
}
