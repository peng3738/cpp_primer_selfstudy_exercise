#include<iostream>
#include<vector>
#include<iterator>
using std::iterator;
using std::vector;
using std::cout;
using std::endl;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
	if (beg != end)
	{
		cout << *beg<<" ";
		return print(++beg, end);
	}
}

int main()
{
	vector<int> v1 = { 1,2,3,4,5,6 };
	print(v1.begin(), v1.end());
	system("pause");
	return 0;
}
