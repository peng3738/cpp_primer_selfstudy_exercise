#include<iostream>
using std::endl;
using std::cout;
using std::cin;

unsigned absd(int id)
{
	return (id >= 0 ? id : -id);
}

int main()
{
	cout << absd(5) << endl;
	cout << absd(-5) << endl;
	system("pause");
	return 0;
}