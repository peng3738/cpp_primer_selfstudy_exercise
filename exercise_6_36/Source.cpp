#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cout;
using std::endl;


string (&funcd())[10];

typedef string astr[10];
astr &funcd1(astr & str);

auto funcd2(astr & str)->string(&)[10];

string strd[10] = { "ar","b","da","dc","wa","mw","awe","egf","fa","fw"};
decltype(strd) &funcd3(astr & str);

astr &funcd1(astr &str)
{
	return str;
}

auto funcd2(astr&str)->string(&)[10]
{
	return str;
}

decltype(strd) &funcd3(astr & str)
{
	return str;
}

void print(astr &str)
{
	for (auto id : str)
		cout << id << " ";
	cout << endl;
}
int main()
{
	print(funcd1(strd));
	print(funcd2(strd));
	print(funcd3(strd));
	system("pause");
	return 0;
}
