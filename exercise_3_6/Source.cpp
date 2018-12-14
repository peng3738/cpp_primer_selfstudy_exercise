#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str("absfefea");

	for (auto &a : str)
		a = 'X';
	cout<<str;
	system("pause");
	return 0;
}