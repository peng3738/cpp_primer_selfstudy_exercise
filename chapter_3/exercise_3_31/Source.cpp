#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int varr[10];
	for (int i = 0; i < 10; ++i)varr[i] = i;
	for (auto ad : varr) cout << ad << endl;

	vector<int> vvec;
	for (int i = 0; i < 10; ++i)vvec.push_back(i);
	for (auto ad : vvec)cout << ad << endl;
	system("pause");
	return 0;
}
