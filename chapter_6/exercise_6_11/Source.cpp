#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void reset(int &a)
{
	a = 0;
}

int main()
{
	int val = 10;
	reset(val);
	cout << val<<endl;
	system("pause");
	return 0;
}
