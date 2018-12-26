#include<iostream>
#include<vector>
#include<algorithm>
#include"E:/Cpp/CPP_primer_5th/chapter_7/exercise_7_26/Sales_data.h"
using std::cout;
using std::endl;
using std::vector;
/*
bool compareIsbn(const Sales_data sd1, const Sales_data sd2)
{
	return sd1.isbn() < sd2.isbn();
}
*/

int main()
{
	Sales_data sd1("SIA", 2, 9.0), sd2("IA", 3, 15), sd3("La", 1, 19), sd4("Me", 2, 10);
	vector<Sales_data> vect{ sd1,sd2,sd3,sd4 };
	//sort(vect.begin(), vect.end(), compareIsbn);
	sort(vect.begin(), vect.end(), [](const Sales_data sd1, const Sales_data sd2) {\
		return sd1.isbn() < sd2.isbn(); });
	for (auto ai : vect)
	{
		print(cout, ai);
		cout << endl;
	}
	system("pause");
	return 0;
}
