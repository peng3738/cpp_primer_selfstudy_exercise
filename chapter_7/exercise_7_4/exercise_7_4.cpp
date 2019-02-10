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
	cout<<st1.get_add()<<endl;
	const Person st2 = { "you","fun" };
	cout << st2.get_name() << endl;
	cout << st2.get_add() << endl;
	system("pause");
	return 0;
}
