#include<iostream>
#include<unordered_map>
#include<string>
#include<fstream>
#include<stdexcept>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::unordered_map;
using std::string;
using std::ifstream;
using std::runtime_error;
using std::istringstream;

const string &transform(const string &s, const unordered_map<string, string>&m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else return s;
}
unordered_map<string, string> buildMap(ifstream &map_file)
{
	unordered_map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for" + key);
	return trans_map;
}

void word_transform(ifstream&map_file, ifstream&input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word)
		{
			if (firstword)
				firstword = false;
			else
				cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}

}
int main()
{
	//part 1;
	/*
	unordered_map<string, size_t> word_count;
	string word;
	while (cin >> word)
		++word_count[word];
	for (const auto &ai : word_count)
		cout << ai.first << " occurs " << ai.second << ((ai.second > 1) ? " times" : " time") << endl;
	*/
	//******************************
	//part 2
	string WTpath = "E:/Cpp/CPP_primer_5th/Data/word_transf.txt";
	string TextPath = "E:/Cpp/CPP_primer_5th/Data/input_text.txt";
	ifstream inputWT(WTpath), inputT(TextPath);
	word_transform(inputWT, inputT);

	system("pause");
	return 0;
}
