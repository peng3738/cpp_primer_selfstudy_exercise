#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<stdexcept>
#include<sstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::string;
using std::runtime_error;
using std::istringstream;

map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value))
	{
		//cout << key;
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}

	return trans_map;
}
const string &transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}

void word_transform(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	//for (auto ai : trans_map)
	//	cout << ai.first << " " << ai.second << endl;

	string text;
	//cout << "Do it";
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		//cout << text<<endl;
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
	string WTpath = "E:/Cpp/CPP_primer_5th/Data/word_transf.txt";
	string TextPath = "E:/Cpp/CPP_primer_5th/Data/input_text.txt";
	ifstream inputWT(WTpath), inputT(TextPath);
	word_transform(inputWT, inputT);
	system("pause");
	return 0;
}