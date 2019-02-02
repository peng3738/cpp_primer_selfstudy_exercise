#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string str1, prestr=" ";
	bool se = 0;
	while (cin >> str1)
	{
		if (prestr == str1)
		{
			cout << str1<<" occurs twice in succession" << endl;
			se = 1;
			break;
		}
		prestr = str1;
	}
	if (!se)cout << "no word was repeated" << endl;
	system("pause");
	return 0;
}
