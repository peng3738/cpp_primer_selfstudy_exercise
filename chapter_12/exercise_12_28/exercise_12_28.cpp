#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<fstream>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;

int main()
{
	string fileName = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream Input(fileName);
	string line;
	vector<string> content;
	map<string, set<size_t>> Imap;
	size_t Nline = 0;
	while (getline(Input, line))
	{
		content.push_back(line);
		//cout << line << " ";
		string word;
		istringstream isInput(line);
		while (isInput >> word)
		{
			//cout << word << " " << Nline << " ";
			Imap[word].insert(Nline);
			
		}
		++Nline;
	}
	/*
	for (auto iq = Imap["are"].begin(); iq != Imap["are"].end(); ++iq)
		cout << *iq << " ";
	*/
	cout << "Input the search word:" << endl;
	string found;
	cin >> found;
	//found = "are";
	auto entries = Imap.count(found);
	auto iter = Imap.find(found);
	if (entries == 0)
	{
		cout << "Can not find " << found;
		return 1;
	}
	auto Fset = iter->second;
	//cout << Fset.size() << " ";
	
	for (auto it = Fset.begin(); it!= Fset.end(); ++it)
	{
		//cout << *(Fset + it) << " " << endl;
		cout << *it<<" "<< content[*it]<<endl;
	}


	system("pause");
	return 0;
}


