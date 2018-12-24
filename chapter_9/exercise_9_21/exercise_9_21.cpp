#include<iostream>
#include<list>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
	list<string> lst;
	vector<string> vst;
	auto iter = lst.begin();
	auto iterv = vst.begin();
	string word;
	while (cin >> word)
	{
		iter = lst.insert(iter, word);
		iterv = vst.insert(iterv, word);
	}

	for (auto ia : lst)
		cout << ia << " ";
	cout << endl;
	for (auto ia : vst)
		cout << ia << " ";
	cout << endl;
	

	system("pause");
	return 0;
}
