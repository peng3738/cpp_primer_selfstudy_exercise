#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

int add(int i, int j)
{
	return i + j;
}

int subtract(int i, int j)
{
	return i - j;
}

int multiply(int i, int j)
{
	return i * j;
}

/*
double divid(int i, int j)
{
	return double(i / j);
}
*/

int divide(int i, int j)
{
	return j ? i / j : 0;
}
int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;
	cout << multiply(1, 2) << endl;
	cout << divide(1, 2) << endl;

	typedef decltype(add) *pf;
	vector<pf> v1 = { add,subtract,multiply,divide };
	for (auto f : v1)
	cout << f(1, 2) << endl;
	system("pause");
	return 0;
}