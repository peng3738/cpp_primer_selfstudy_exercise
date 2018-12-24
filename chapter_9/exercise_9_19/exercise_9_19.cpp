#include<iostream>
#include<list>
#include<string>
using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string word;
	list<string> dv;
	while (cin >> word)
		dv.push_back(word);
	/*
	for (auto iter = dv.cbegin(); iter != dv.cend(); ++iter)
		cout << *iter << endl;
	*/

	for (auto ai : dv)
		cout << ai << endl;



	system("pause");
	return 0;
}