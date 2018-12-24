#include<iostream>
#include<string>
#include"Sales_data.h"
using std::endl;
using std::string;
using std::cout;
using std::cin;


int main()
{
	Sales_data total(cin);
	if (!total.isbn().empty())
	{
		
		std::istream &is = cin;
		int i = 1;
		while (is)
		{
			Sales_data trans(is);
			if (!is)break;
			if (total.isbn() == trans.isbn())
			{
				add(total, trans);
				cout << "Same ISBN" << endl;
				print(cout, total) << endl;
			}
			else
			{
				cout << "Different ISBN" << endl;
				print(cout, total) << endl;
				total = trans;
			}
			cout << ++i << endl;
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
