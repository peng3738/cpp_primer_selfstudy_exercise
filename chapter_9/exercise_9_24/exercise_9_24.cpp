#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> vi{ 1,2,3,4,5 }, ve;
	cout << vi.at(0)<<endl;
	cout << vi[0] << endl;
	cout << vi.front() << endl;
	cout << *vi.begin() << endl;

	//cout << ve.at(0) << endl;
	//cout << ve[0] << endl;
	//cout << ve.front() << endl;
	//cout << *ve.begin() << endl;

	system("pause");
	return 0;
}