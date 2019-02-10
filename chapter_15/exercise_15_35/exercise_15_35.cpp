#include<iostream>
#include<vector>
#include<memory>
#include<set>
#include<map>

#include"AndQuery.h"
#include"NotQuery.h"
#include"OrQuery.h"
#include"WordQuery.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::vector;
using std::string;


int main()
{
	string fileName = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream Input(fileName);

	TextQuery TQ(Input);
	QueryResult QR = TQ.Query("you");
	print(cout, QR);
	//print(cout,TQ.Query("you"));
	system("pause");
	return 0;
}