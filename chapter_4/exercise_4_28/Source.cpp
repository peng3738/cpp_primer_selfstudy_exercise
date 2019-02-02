#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	bool a1;
	char a2;
	wchar_t a3;
	char16_t a4;
	char32_t a5;
	short a6;
	int a7;
	long a8;
	long long a9;
	float a10;
	double a11;
	long double a12;
	cout << sizeof(a1) << endl;
	cout << sizeof(a2) << endl;
	cout << sizeof(a3) << endl;
	cout << sizeof(a4) << endl;
	cout << sizeof(a5) << endl;
	cout << sizeof(a6) << endl;
	cout << sizeof(a7) << endl;
	cout << sizeof(a8) << endl;
	cout << sizeof(a9) << endl;
	cout << sizeof(a10) << endl;
	cout << sizeof(a11) << endl;
	cout << sizeof(a12) << endl;
	cout << sizeof(nullptr) << endl;

	int x[10];
	int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	system("pause");
	return 0;

}
