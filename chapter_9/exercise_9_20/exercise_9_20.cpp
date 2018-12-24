#include<iostream>
#include<deque>
#include<list>

using std::deque;
using std::list;
using std::cout;
using std::endl;

int main()
{
	list<int> Lv = { 1,2,3,4,5,6,7,8 };
	deque<int> evenQ, oddQ;
	for (auto v : Lv) v % 2 ? oddQ.push_back(v) : evenQ.push_back(v);
	for (auto v : evenQ) cout << v << " ";
	cout << endl;
	for (auto v : oddQ) cout << v << " ";
	cout << endl;


	system("pause");
	return 0;
}