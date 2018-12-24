#include<iostream>
#include<vector>
#include<string>
#include<list>

using std::string;
using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
	list<const char*> dt = {"you","are","great"};
	//string s;
	vector<string> vs;
	vs.assign(dt.cbegin(), dt.cend());
	for (auto ms : vs)
		cout << ms << endl;
	system("pause");
	return 0;
}
