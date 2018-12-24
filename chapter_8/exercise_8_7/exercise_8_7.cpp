#include<iostream>
#include<string>
#include "Sales_data.h"
#include<fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cerr;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv)
{
	ifstream input(argv[1]);
	ofstream out(argv[2]);
	//ofstream out(argv[2],ofstream::app);
	Sales_data total;
	if (input)
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(out,total);
				//print(cout, total);
				total = trans;
			}
		}
		print(out,total);
		//print(cout, total);
	}
	else
	{
		cerr << "No data?!" << endl;

	}
	system("pause");
	return 0;
}