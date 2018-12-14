#include<iostream>
#include<initializer_list>
using std::initializer_list;
using std::cout;
using std::endl;

int sum(initializer_list<int> ls)
{
	int total = 0;
	for (auto beg = ls.begin(); beg != ls.end(); ++beg)
		total += *beg;
	return total;
}

int main()
{
	auto it = { 1,2,3,4,5,6 };
	cout << sum(it)<<endl;
	system("pause");
	return 0;
}