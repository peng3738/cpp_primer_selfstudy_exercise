#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::vector;
using std::string;
//using std::ostream;
using std::cout;
using std::endl;


/*
void biggies(vector<string> &words, vector<string>::size_type sz, ostream&os = cout, char c = ' ')
{
	for_each(words.begin(),words.end(), [&, c](const string &s) {os << s << c; });
	for_each(words.begin(), words.end(), [=, &os](const string &s) {os << s << c; });
}
*/

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2)\
		{return s1.size() < s2.size(); });
	//auto wc = find_if(words.begin(), words.end(), [sz](const string &a)\
	{return a.size() >= sz; });
	//auto wc = stable_partition(words.begin(), words.end(), [sz](const string &s1)\
	{ return s1.size() < sz; });
	auto wc = count_if(words.begin(), words.end(), [sz](const string &s1)\
	{ return s1.size() > sz; });
	cout << wc << endl;
	//auto count = words.end() - wc;
	//cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	//for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	//cout << endl;
}

void func(vector<string> &words, vector<string>::size_type sz)
{
	auto wc = count_if(words.begin(), words.end(), [sz](const string &s1)\
	{ return s1.size() > sz; });
	cout << wc << endl;
}

int main()
{
	vector<string> vecs{ "you","are","great","why","welcome" };
	//biggies(vecs, 5);
	func(vecs, 6);

	system("pause");
	return 0;
}