#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	/*
	for (string str; getline(cin, str); cout << endl)
		for(auto i:str)
		    if(!ispunct(i))cout<<i;
	*/
	string line;
	while (getline(cin, line))
		for(auto &c:line)
		     c=((ispunct(c))? 'a':c);
	cout << line<<endl;
	system("pause");
	return 0;
}
