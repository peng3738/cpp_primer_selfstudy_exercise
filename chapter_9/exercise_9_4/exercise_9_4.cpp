#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

bool func(vector<int> va1,int a)
{
	vector<int>::iterator begin = va1.begin(), end = va1.end();
	while (begin != end)
	{
		if (*begin == a)
			return 1;
		else
			++begin;
	}
	return 0;
}
int main()
{
	vector<int> va1{ 1,2,3,4,5,6,7,8,9,10 };
	int a = 6, b = 12;
	cout << func(va1, a) << endl;
	cout << func(va1, b) << endl;

	system("pause");
	return 0;
}
