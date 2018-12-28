#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using std::vector;
using std::string;
using std::map;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	map<string, size_t>word_count;
	vector<string> exclude = { "the","but","and","or","an","a","The","But","And","Or","An","A" };
	string word;
	while (cin >> word)
		if (find(exclude.begin(),exclude.end(),word) == exclude.end())
			++word_count[word];
	system("pause");
	return 0;
}