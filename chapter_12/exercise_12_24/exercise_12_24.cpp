#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string st1;
	cin >> st1;
	char *cp = new char[st1.size()];
	for (string::size_type it = 0; it < st1.size(); ++it)
	{
		*(cp + it) = st1[it];
		cout << *(cp + it);
	}
	
	//cout << cp << endl;
	

	delete[]cp;

	system("pause");
	return 0;
}

