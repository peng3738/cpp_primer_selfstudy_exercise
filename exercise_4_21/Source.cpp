#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> val = { 10,4,3,2,6,7 };
	for (auto &a : val)
	{
		 a= a % 2 ? a * 2 : a;
		//cout << id << " ";
	}
	for (auto id : val) cout << id << " ";
	system("pause");
	return 0;
}