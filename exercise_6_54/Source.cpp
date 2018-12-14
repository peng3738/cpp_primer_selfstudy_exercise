#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

int  func(int i, int j)
{
	return i + j;
}


int main()
{
	typedef decltype(func) *pc;

	vector<pc> v1 = {10,func};
	int j = 1;
	for (auto func : v1)
	{
		static int i = 1;
		cout << func(i,j) << endl;
		++i;
	}

	system("pause");
	return 0;
}