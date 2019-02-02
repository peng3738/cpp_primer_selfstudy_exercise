#include<iostream>
#include<iterator>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;
bool compare(int * const pb1, int *const pe1,int * const pb2,int * const pe2)
{
	if ((pe1 - pb1)!= (pe2 - pb2))
		return false;
	else
	{
		for (int *i = pb1, *j = pb2; i < pe1&&j < pe2; ++i, ++j)
			if (*i != *j)return false;
	}
	return true;
}
int main()
{
	int arr1[10] = {1,2,4};
	int arr2[10] = { 1,2,5};
	if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "same"<<endl;
	else cout << "different"<<endl;
	cout<<"=========================="<<endl;
	vector<int> ver1 = { 1,2,4 };
	vector<int> ver2 = { 1,2,5 };
	if (ver1 == ver2)
		cout << "same"<<endl;
	else
		cout << "different"<<endl;

	system("pause");
	return 0;
}
