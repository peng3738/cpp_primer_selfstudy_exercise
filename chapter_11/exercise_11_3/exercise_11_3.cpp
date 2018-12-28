#include<iostream>
#include<map>
#include<set>
#include<string>

using std::string;
using std::cout;
using std::endl;
using std::map;
using std::cin;
using std::set;

int main()
{
	/*
	//part 1
	map<string, size_t>word_count;
	string word;
	while (cin >> word)
		++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time.") << endl;
	*/
	//part 2
	map<string, size_t> word_count;
	set<string> exclude = { "The","But","And","Or","An","A","the","but","and","or","an","a" };
	string caseIgnore{ ",._" };

	string word;
	while (cin >> word)
	{
		for (auto &ai : word)
		{
			ai = tolower(ai);
		}
		auto iter=word.find_first_of(caseIgnore);
		if (iter != string::npos)
		{
			//cout << "exist" << endl;
			word.erase(iter, 1);
		}
		++word_count[word];
	}

	/*
		if (exclude.find(word) == exclude.end())
			++word_count[word];
	*/
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time.") << endl;
	system("pause");
	return 0;
}