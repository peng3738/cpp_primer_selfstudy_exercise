#include<iostream>
#include<string>
#include<vector>
using std::endl;
using std::cout;
using std::cin;
using std::vector;
using std::string;

int main()
{
	vector<int> val1;
	int element;
	while (cin >> element)val1.push_back(element);
	auto beg = val1.begin();
	auto end = val1.end();
	vector<int>val2;
	while (beg < end-1&&beg!=end)
	{
		//cout << *beg << endl;
		val2.push_back(*(beg + 1) + *beg);
		++beg;
	}
	for (auto belement : val2)cout << belement << endl;
	system("pause");
	return 0;
}
