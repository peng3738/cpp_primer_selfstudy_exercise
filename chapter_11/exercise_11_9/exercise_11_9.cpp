#include<iostream>
#include<map>
#include<string>
#include<list>
#include<sstream>

using std::map;
using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::list;
using std::istringstream;

int main()
{
	map < string, list<int> > data;
	string line;
	string word;
	int Nline = 1;
	while (getline(cin, line))
	{
		istringstream record(line);
		while(record>>word)
		data[word].push_back(Nline);
		++Nline;
		//cout << line<<endl;
		//cout << Nline << endl;
	}
	for (auto ai : data)
	{
		cout << ai.first<<" ";
		for (auto bi : ai.second)
			cout << bi << " ";
		cout << endl;
	}
	
	system("pause");
	return 0;
}