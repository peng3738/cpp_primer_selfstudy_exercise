#include"exercise_14_2.h"
#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	Sales_data sd("01-11", 10, 4), sds("01-11", 20, 5);
	Sales_data s3=sd + sds;
	 sd += sds;
	 cout << sd << endl;
	 cout << s3 << endl;
	system("pause");
	
	return 0;
}