#include<iostream>
//#include<fstream>
#include<string>
#include<sstream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istringstream;


struct PersonInfo
{
	string names;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo>people;
	istringstream record;
	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.names;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	system("pause");
	return 0;
}