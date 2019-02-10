#include<iostream>
#include<string>
#include"Sales_data.h"
using std::endl;
using std::string;
using std::cout;
using std::cin;


int main()
{
	Sales_data total;
	if (read(cin,total))
	{
		Sales_data trans;
		while (read(cin,trans))
		{
			if (total.isbn() == trans.isbn())
				add(total, trans);
			else 
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		std::cerr << "No data?!" << endl;
		system("pause");
		return -1;
	}

	system("pause");
	return 0;
}
