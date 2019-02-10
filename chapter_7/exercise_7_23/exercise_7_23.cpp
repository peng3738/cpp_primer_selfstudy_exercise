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
	system("pause");
	return 0;
}
