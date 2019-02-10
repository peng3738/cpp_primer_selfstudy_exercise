#include<iostream>
#include "Screen.h"
#include<string>
using std::endl;
using std::cout;
using std::cin;
using std::string;
int main()
{
	Screen myscreen;
	char ch = myscreen.get();
	ch = myscreen.get(0, 0);
	Screen screen1;
	Screen screen2(2, 3);
	Screen screen3(2, 3, 'a');

	system("pause");
	return 0;
}
