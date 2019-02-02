#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

void print(vector<int> v1)
{
#ifndef NDEBUG
	cout << "vector size " << v1.size() << endl;
#endif
	if (v1.size() > 1)
	{
		cout << v1[0] << " ";
		vector<int> v2;
		for (int i = 1; i < v1.size(); ++i)
			v2.push_back(v1[i]);
		//cout << v2.size() << " ";
		return print(v2);
	}
	else
	{
		cout << v1[0] << " ";
	}

}
int main()
{
	vector<int> v = { 1,2,3,4,5,6 };
	print(v);

	system("pause");
	return 0;
}
