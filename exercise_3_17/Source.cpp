#include<iostream>
#include<string>
#include<vector>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main()
{
	vector<string> text;
	string word;
	while (cin >> word)text.push_back(word);
	for (auto astring : text)cout << astring<<endl;
	for (auto &astring : text)
		for(auto &element:astring)
			element = toupper(element); 
	int j = 0;
	for (auto astring : text)
	{
		cout << astring<<" ";
		++j;
		if (j == 8)
		{
			j = j - 8;
			cout << endl;
		}
	}


	system("pause");
	return 0;
}