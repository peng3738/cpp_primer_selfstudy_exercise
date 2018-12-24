#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout;
using std::endl;


int main()
{
	vector<char> vc{ 'a','b','c','d','e' };
	for (auto ai : vc)
		cout << ai << " ";
	//char *p = &vc[0];
	//string si(p, vc.size());
	string si(vc.begin(), vc.end());
	cout << si << endl;
	cout << endl;

	const char*cp = "Hello World!!!";
	char noNull[] = { 'H','i' };
	string s1(cp);
	cout << s1 << endl;
	string s2(noNull, 2);
	cout << s2 << endl;
	string s3(noNull);
	cout << s3 << endl;
	string s4(cp + 6, 5);
	cout << s4 << endl;
	string s5(s1, 6, 5);
	cout << s5 << endl;
	string s6(s1, 6);
	cout << s6 << endl;
	string s7(s1, 6, 20);
	cout << s7 << endl;
	//string s8(s1, 16);
	//cout << s8 << endl;

	system("pause");
	return 0;
}