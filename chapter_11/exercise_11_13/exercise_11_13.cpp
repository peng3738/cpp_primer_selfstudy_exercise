#include<iostream>
#include<string>
#include<utility>

using std::cout;
using std::endl;
using std::string;
using std::pair;
using std::make_pair;

int main()
{
	pair<string, int> P1("you", 3);
	pair<string, int> P2 = { "you",3 };
	pair<string, int> P3 = make_pair("you", 3);
	cout << P1.first << " "<<P1.second << endl;
	cout<< P2.first << " " << P2.second << endl;
	cout << P3.first << " " << P3.second << endl;

	system("pause");
	return 0;
}
