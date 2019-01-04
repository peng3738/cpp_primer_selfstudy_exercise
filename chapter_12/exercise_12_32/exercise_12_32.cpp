#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
#include<stdexcept>
#include"TestQuery.h"
#include "QueryResult.h"
#include"StrBlob.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::shared_ptr;
using std::map;
using std::set;
using std::cerr;
using std::ostream;
using std::make_shared;

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	do
	{
		cout << "enter word to look for, or q to quit:";
		string s;
		if (!(cin >> s) || s == "q")break;
		QueryResult QR = tq.Query(s);
		print(cout, QR) << endl;
	} while (true);
}

int main()
{
	string fileName = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream Input(fileName);

	TextQuery TQ(Input);
	QueryResult QR = TQ.Query("you");
	print(cout, QR);
	//print(cout,TQ.Query("you"));
	//runQueries(Input);

	system("pause");
	return 0;
}


