#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<string>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::string;


int main()
{
	/*
	int val = 42;
	vector<int> vec{ 1,2,3,4,42,43,50 };
	auto result = find(vec.cbegin(), vec.cend(), val);
	cout << "The value " << val << (result == vec.cend() ? " is not present" : " is present") << endl;
	*/
	//part 1
	vector<int> vect;
	cout << "Input the find value:";
	int special;
	cin >> special;
	int element;
	cout << "Input the vector:";
	while (cin >> element)
		vect.push_back(element);

	auto result = count(vect.cbegin(), vect.cend(), special);
	cout << "The  element "<<special<<" is present "<< result <<" times."<< endl;

	//part 2
	list<string>lstr{"1","2","4","5","8"};
	//int finding=4;
	//cout << count(lstr.begin(), lstr.end(), finding) << endl;
	cout << count(lstr.begin(), lstr.end(), "4") << endl;
	system("pause");
	return 0;

}