#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> iv{ 1,2,3,4,5,6,7,8,9 };
	int some_val = 4;
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	int Nmid = iv.size() / 2;
	while (iter != iv.begin()+Nmid)
	{
		if (*iter == some_val)
		{
			iter = iv.insert(iter, 2 * some_val);
			++iter;
			++Nmid;
		}
		++iter;
	}
	for (auto ia : iv)
		cout << ia << " ";
	cout << endl;
	system("pause");
	return 0;
}