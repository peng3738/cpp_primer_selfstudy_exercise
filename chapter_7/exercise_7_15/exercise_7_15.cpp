#include<iostream>
#include "Person.h"
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	Person st1 = { "good","data" };
	cout << st1.get_name() << endl;
	cout << st1.get_add() << endl;
	const Person st2 = { "you","fun" };
	cout << st2.get_name() << endl;
	cout << st2.get_add() << endl;
	Person st3;
	read(cin, st3);
	print(cout, st3);
	Person st4;
	print(cout,st4);
	Person st5("Dec");
	print(cout, st5);
	Person st6("Dec", "Fif");
	print(cout, st6);
	Person st7(cin);
	print(cout, st7);

	system("pause");
	return 0;
}
