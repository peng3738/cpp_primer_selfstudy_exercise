#include<iostream>
#include<string>
#include"Sales_data.h"
using std::endl;
using std::string;
using std::cout;
using std::cin;


int main()
{
	cout << "1. default way: " << endl;
	cout << "----------------" << endl;
	Sales_data s1;
	cout << "\n2. use std::string as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s2("CPP-Primer-5th");
	cout << "\n3. complete parameters: " << endl;
	cout << "----------------" << endl;
	Sales_data s3("CPP-Primer-5th", 3, 25.8);
	cout << "\n4. use istream as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s4(std::cin);
	return 0;
	system("pause");
	return 0;
}
