#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using std::vector;
using std::string;
using std::cout;
using std::endl;


void elimDups(vector<string>&words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	vector<string> vecs{ "quick", "fox","jumps","over","red","red","slow","the",\
		"the","turtle" };
	elimDups(vecs);
	stable_sort(vecs.begin(), vecs.end(), isShorter);
	for (auto ai : vecs)
		cout << ai << " ";
	cout << endl;

	system("pause");
	return 0;
}