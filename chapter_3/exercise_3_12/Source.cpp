#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	vector<int> v1(10);
	vector<int> v2{ 10 };
	vector<int> v3(10, 1);
	vector<int> v4{ 10,1 };
	vector<string> v5{ "hi" };
	//vector<string> v6("hi");
	vector<string> v7{ 10 };
	vector<string> v8{ 10,"hi" };
	cout << v8[0];

	/*
	cout<< v1 << endl;
	cout<< v2 << endl;
	cout<< v3 << endl;
	cout<< v4 << endl;
	cout<< v5 << endl;
	//cout << v6 << endl;
	cout<< v7 << endl;
	cout<< v8 << endl;
	*/
	system("pause");
	return 0;
}
