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
	vector<int> val1(10);
	for (auto id=val1.begin(); id != val1.end(); ++id)cin >> *id;
	for (auto aelement : val1) cout << aelement << endl;
	for (auto bel = val1.begin(); bel != val1.end(); ++bel) *bel=2*(*bel);
	for (auto aelement : val1) cout << aelement << endl;
	system("pause");
	return 0;
}
