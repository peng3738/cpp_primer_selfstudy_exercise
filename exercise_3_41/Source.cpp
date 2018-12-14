#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	vector<int> vec1(begin(arr1),end(arr1));
	//for (auto id = begin(arr1); id < end(arr1); ++id)vec1.push_back(*id);
	for (auto id : vec1)cout << id<<endl;
	cout << vec1.size() << endl;
	//const unsigned idx = vec1.size();
	//int arr2[idx];
	int arr2[5];
	for (int id = 0; id < vec1.size(); ++id)arr2[id] = arr1[id];
	for (auto id : arr2)cout << id << endl;
	system("pause");
	return 0;
}