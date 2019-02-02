#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void disp(vector<int> auz)
{
	for (auto a : auz)cout << a << endl;
}
int main()
{
	vector<int> val1;
	vector<int> sum_adj;
	vector<int> sum_twoside;
	int element;
	while (cin >> element) val1.push_back(element);
	for (decltype(val1.size()) id = 0; id < val1.size()-1; id++) sum_adj.push_back(val1[id] + val1[id + 1]);
	for (decltype(val1.size()) id = 0; id < val1.size() / 2.0; id++)sum_twoside.push_back(val1[id] + val1[val1.size() - id - 1]);
	//cout << val1.size() / 2.0;
	//cout << (2 < val1.size() / 2.0);

	disp(val1);
	disp(sum_adj);
	disp(sum_twoside);

	system("pause");
	return 0;
}
