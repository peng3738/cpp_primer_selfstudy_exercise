#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using std::endl;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::begin;
using std::end;

int main()
{
	int ai[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11} };
	//range for 
	for (int(&id)[4] : ai)
	{
		for (int & ia : id)
		{
			cout << ia << " ";
		}
		cout << endl;
	}
	// ordinary for loop
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ai[i][j]<<" ";
		}
		cout << endl;
	}
	//ordinary for loop using pointers
	for (int (*p)[4] = begin(ai); p != end(ai); ++p)
	{
		for (int *q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}
