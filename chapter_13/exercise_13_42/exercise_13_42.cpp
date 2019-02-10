#include <iostream>
#include "StrVec.h"
#include "TestQuery.h"
#include "QueryResult.h"
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