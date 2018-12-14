#include<iostream>
#include<iterator>
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;
int main()
{
	int ai[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11} };
	//range for 
	//using int_array = int[4];
	for (auto &id : ai)
	{
		for (auto ia : id)
		{
			cout << ia << " ";
		}
		cout << endl;
	}
	// ordinary for loop
	for (auto i = 0; i < 3; i++)
	{
		for (auto j = 0; j < 4; j++)
		{
			cout << ai[i][j] << " ";
		}
		cout << endl;
	}
	//ordinary for loop using pointers
	for (auto p = begin(ai); p != end(ai); ++p)
	{
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";
		cout << endl;
	}


	system("pause");
	return 0;
}