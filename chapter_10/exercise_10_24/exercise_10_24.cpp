#include<iostream>
#include<vector>
#include<string>
#include<functional>
#include<algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using namespace std::placeholders;

/*
bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}
*/
bool check_size(const int &s, const string &sz)
{
	return s >= sz.size();
}

int main()
{
	vector<int>veci{ 1,2,3,4,5,6,7 };
	string st{ "Great" };
	auto check5 = bind(check_size, _1, st);
	//auto wc = find_if(vecs.begin(), vecs.end(), check5);
	auto wc = find_if(veci.begin(), veci.end(), check5);
	cout << *wc << endl;
	system("pause");
	return 0;
}