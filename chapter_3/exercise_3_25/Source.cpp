#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto beg = scores.begin();
	auto end = scores.end();
	while (cin >> grade)
		++*(beg + grade / 10);
	while (beg != end)
	{
		cout << *beg << endl;
		++beg;
	}
	system("pause");
	return 0;
}
