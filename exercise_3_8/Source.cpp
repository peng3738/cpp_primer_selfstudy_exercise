#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string str("string will");
	decltype(str.size()) i = 0;
	cout << str.size()<<endl;
	while (i < str.size()) str[i++] = 'X';
	cout << str << endl;
	for (i = 0; i < str.size(); ++i)
		str[i] = 'X';
	cout << str << endl;
	system("pause");
	return 0;
}