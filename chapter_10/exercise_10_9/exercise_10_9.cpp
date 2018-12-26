#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::sort;

void elimDups(vector<string>&words)
{
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
	sort(words.begin(), words.end());
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
	auto end_unique = unique(words.begin(), words.end());
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
	words.erase(end_unique, words.end());
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
}
int main()
{
	vector<string> vecs { "quick", "fox","jumps","over","red","red","slow","the",\
		"the","turtle" };
	elimDups(vecs);

	system("pause");
	return 0;
}