#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

vector<int>::iterator func(vector<int> va1, int a)
{
	vector<int>::iterator begin = va1.begin(), end = va1.end();
	while (begin != end)
	{
		if (*begin == a)
			return begin;
		else
			++begin;
	}
	return end;
}
int main()
{
	vector<int> va1{ 1,2,3,4,5,6,7,8,9,10 };
	int a = 6, b = 12;
	//cout << *func(va1, a) << endl;
	//func(va1, b)
	func(va1, a);
	system("pause");
	return 0;
}
