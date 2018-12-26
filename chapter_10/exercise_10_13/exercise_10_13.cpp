#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;


bool func(string s)
{
	return s.size() < 5;
}

int main()
{
	vector<string> vecs{ "you","are","great","why","welcome"};
	auto iter=partition(vecs.begin(), vecs.end(), func);
	//cout << *iter<<endl;
	while (iter != vecs.end())
	{
		cout << *iter << " "; 
		++iter;
	}
	system("pause");
	return 0;
}