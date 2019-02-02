#include<iostream>
using std::cout;
using std::endl;

void f()
{
	cout << "case 1" << endl;
}

void f(int)
{
	cout << "case 2" << endl;
}

void f(int, int)
{
	cout << "case 3" << endl;
}

void f(double, double = 3.14)
{
	cout << "case 4" << endl;
}

int main()
{
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	system("pause");
	return 0;
}
