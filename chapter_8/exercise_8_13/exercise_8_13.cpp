#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istringstream;
using std::ostringstream;
using std::ifstream;
using std::cerr;



struct PersonInfo
{
	string names;
	vector<string> phones;
};

bool valid(const string& str)
{
	return isdigit(str[0]);
}

string format(const string& str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
	string line, word;
	vector<PersonInfo>people;
	//istringstream record;
	string fileName = "E:/Cpp/CPP_primer_5th/Data/phone_number.txt";
	ifstream input(fileName);

	while (getline(input,line))
	{
		PersonInfo info;
		//cout << "Input information" << endl;
		//record.clear();
		//record.str(line);
		//record >> info.names;
		istringstream record(line);
		record >> info.names;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	
	for (const auto &si : people)
		cout << si.phones[0] << endl;

	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones)
		{
			if (!valid(nums))
			{
				badNums << " " << nums;
			}
			else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			cout << entry.names << " " << formatted.str() << endl;
		else
			cerr << "input error:" << entry.names << " invalid number(s)" << badNums.str() << endl;
	}
	
	system("pause");
	return 0;

}