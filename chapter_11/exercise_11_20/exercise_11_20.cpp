#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int main()
{
	map<string, size_t> word_count;
	string word;
	//while (cin >> word)
	//	++word_count[word];
	while (cin >> word)
	{
		auto ret=word_count.insert({ word,1 });
		if (!ret.second)
			++ret.first->second;
	}
	for (const auto & w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;

	system("pause");
	return 0;
}