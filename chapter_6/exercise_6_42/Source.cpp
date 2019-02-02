#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
//return the plural version of word is ctr is greater than 1
string make_plural(size_t ctr, const string &word, const string &ending="s")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	cout << make_plural(1, "success" ,"es") << endl;
	cout << make_plural(2, "success","es") << endl;
	cout << make_plural(1, "failure") << endl;
	cout << make_plural(2, "failure" ) << endl;
	system("pause");
	return 0;
}
