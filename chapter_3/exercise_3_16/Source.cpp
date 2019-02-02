#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
void disp(vector<int> v)
{
	if (v.empty())
		cout << "empty";
	else
	{
		//for (decltype(v.size()) id = 0; id < v.size(); cout << v[id++]<<endl);
		for (auto i : v)cout << i << endl;
	}
}
void dispstring(vector<string> vstring)
{
	if (vstring.empty())
		cout << "empty" << endl;
	else
		for (auto i : vstring) cout << i << endl;
}
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string> v6{ 10 };
	vector<string> v7{10,"hi" };
	cout << v1.size()<< endl;
	disp(v1);
	cout << v2.size() << endl;
	disp(v2);
	cout << v3.size() << endl;
	disp(v3);
	cout << v4.size() << endl;
	disp(v4);
	cout << v5.size() << endl;
	disp(v5);
	cout << v6.size() << endl;
	dispstring(v6);
	cout << v7.size() << endl;
	dispstring(v7);
	
	system("pause");
	return 0;
}
