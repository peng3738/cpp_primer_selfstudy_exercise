#include<iostream>
#include<vector>
#include<string>
#include<utility>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::pair;

int main()
{
	vector<pair<string, int>> total;
	pair<string, int> p;
	p.first = "you";
	p.second = 3;
	total.push_back(p);
	cout << total[0].first << " " << total[0].second << " ";
	cout << endl;

	system("pause");
	return 0;
}