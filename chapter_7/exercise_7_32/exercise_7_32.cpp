#include<iostream>
#include "Screen.h"
#include<string>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main()
{
	/*
	Screen myscreen;
	char ch = myscreen.get();
	ch = myscreen.get(0, 0);
	Screen screen1;
	Screen screen2(2, 3);
	Screen screen3(2, 3, 'a');
	Screen myScreen(5, 3);
	const Screen blank(5, 3);
	myScreen.set('#').display(cout);
	blank.display(cout);
	*/
	Screen myScreen2(5, 5, 'X');
	myScreen2.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen2.display(cout);
	cout << "\n";

	system("pause");
	return 0;
}
