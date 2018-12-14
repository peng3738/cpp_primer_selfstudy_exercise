#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool find_char(const string &s, char c)
{
	for (auto a : s)if (a == c) return 1;
	return 0;
}

void ChangedToLower(string & s)
{
	for (auto &a : s) if (!islower(a))a = tolower(a);
}

int main()
{ 
	string asva = "steaega aea ageaeffvhaeing";
	cout << find_char(asva, 'c') << endl;
	cout << find_char(asva, 'v') << endl;
	string asvb = "DAWfgaeA afdAd";
	ChangedToLower(asvb);
	cout << asvb << endl;
	system("pause");
	return 0;
}