#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	//part 1
	/*
	string concatenation;
	for (string line; cin >> line; concatenation += line)
		cout << concatenation;
	*/
	//part 2
	string concatenation;
	/*
	for (string line; getline(cin, line); concatenation += line)
		cout << concatenation << endl;
	*/
	for (string line; cin >> line; concatenation += (concatenation.empty() ? "" : " ") + line);
	cout << concatenation << endl;
	system("pause");
	return 0;
}
