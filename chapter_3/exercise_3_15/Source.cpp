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
	vector<string> string_series;
	string word;
	while (cin >> word)
		string_series.push_back(word);
	for (decltype(string_series.size()) ix=0; ix < string_series.size(); ++ix)
		cout << string_series[ix] << endl;

	system("pause");
	return 0;

}
