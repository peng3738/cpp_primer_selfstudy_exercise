#include<iostream>
#include<map>
#include<string>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::multimap;
using std::vector;

int main()
{
	multimap<string, vector<string>> family_data;
	string Last_name;
	vector<string> Children_name;
	string child_name;
	while (cin >> Last_name)
	{
		cout << "Input children's name:" << endl;

		while (cin >> child_name)
			Children_name.push_back(child_name);
		family_data.insert({ Last_name,Children_name });
		cout << "End input children's name." << endl;
	}
	for (auto ai : family_data)
	{
		cout << "Family name: " << ai.first << endl;
		for (auto di : ai.second)
			cout << "Children's name: " << di << endl;
	}
	system("pause");
	return 0;
}