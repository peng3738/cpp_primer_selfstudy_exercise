#include<iostream>
#include<vector>
//#include<algorithm>
#include<numeric>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> vec{ 1,2,3,4,5,6 };
	cout << "Sum of elements in vec: " << accumulate(vec.cbegin(), vec.cend(), 0) << endl;

	system("pause");
	return 0;

}