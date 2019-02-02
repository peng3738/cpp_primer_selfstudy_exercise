#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	/*
	string word;
	while (cin >> word)
		cout << word << endl; 
	*/
	/*
	string line;
	while (getline(cin, line))
		if(!line.empty())
            cout << line << endl;
	*/
	//for (string line; getline(cin, line); cout << line << endl);/*part a*/
	for (string line; cin >> line; cout << line << endl);/*part b*/
	system("pause");
	return 0;
}
