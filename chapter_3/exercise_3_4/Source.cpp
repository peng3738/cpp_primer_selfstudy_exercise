#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	//part 1
	/*
	if (s1 == s2)
		cout << s1 << "=" << s2 << endl;
	else if (s1 < s2)
	{
		cout << s1 << "<" << s2 << endl;
		cout << s2 << " is larger" << endl;
	}
	else
	{
		cout << s1 << ">" << s2 << endl;
		cout << s1 << " is larger" << endl;
	}
	*/
	//part 2
	if (s1.size() == s2.size())
		cout << "same size"<<endl;
	else if (s1.size() < s2.size())
		cout << s2 <<"  is longer than " << s1 << endl;
	else cout << s1 <<"  is longer than " << s2 << endl;

	system("pause");
	return 0;
}
