#include<iostream>
#include <iterator>
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int array[] = { 0,0,0 };
	int *p = array;
	*p = 1;
	cout << array[0] << endl;

	int series[10];
	int *begser = begin(series);
	int *endser = end(series);
	while (begser != endser)
	{
		*begser = 0;
		++begser;

	}
	for (auto i : series)cout << i << endl;

	system("pause");
	return 0;
}
