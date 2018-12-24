#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

bool compare(vector<int> v1, vector<int> v2)
{
	cout << "two vecotor int:" << endl;
	return (v1 == v2) ? 1 : 0;
}

bool compare(list<int> v1, vector<int>v2)
{
	cout << "one list, one vector:" << endl;
	vector<int> v1_copy;
	v1_copy.assign(v1.begin(), v1.end());
	return compare(v1_copy, v2);
}

int main()
{
	vector<int> v1 = { 1,2 ,3,4 };
	vector<int> v2 = { 1 ,3,4 };
	vector<int> v3 = { 1 ,3,4 };
	cout << compare(v1, v2) << endl;
	cout << compare(v2, v3) << endl;

	list<int> v4 = { 1,2,3 };
	list<int> v5 = { 1,3,4 };
	cout << compare(v4, v1) << endl;
	cout << compare(v5, v2) << endl;
	system("pause");
	return 0;
}