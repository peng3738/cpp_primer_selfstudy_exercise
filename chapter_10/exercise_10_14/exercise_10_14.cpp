#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}
/*
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
*/
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	//stable_sort(words.begin(), words.end(), isShorter);
	stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2)\
		->bool {return s1.size() < s2.size(); });
	auto wc=find_if(words.begin(), words.end(), [sz](const string &a)\
	{return a.size() >= sz; });
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vecs{ "you","are","great","why","welcome" };
	biggies(vecs, 5);
	cout << endl;

	auto f = [](int a, int b) {return a + b; };
	cout << f(2, 3) << endl;
	int dig = 5;
	auto fsum = [dig](int a) {return dig + a; };
	cout << fsum(3) << endl;
	system("pause");
	return 0;
}