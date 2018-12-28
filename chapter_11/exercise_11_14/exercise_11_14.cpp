#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::pair;
using std::map;

int main()
{
	map<string, vector<pair<string,string>>> family_data;
	string Last_name;
	vector<pair<string, string>> Children_info;
	//vector<string> Children_name;
	string child_name;
	string birthday;
	pair<string, string> child_info;
	while (cin >> Last_name)
	{
		cout << "Input children's name and birthday:" << endl;
		while (cin >> child_name>>birthday)
			family_data[Last_name].push_back(pair<string,string>(child_name,birthday));
		cout << "End input children's name." << endl;
	}
	
	for (auto ai : family_data)
	{
		cout << "Family name: " << ai.first << endl;
		for (auto di : ai.second)
			cout << "Children's name: " << di.first<<" "<<di.second << endl;
	}
	

	system("pause");
	return 0;
}