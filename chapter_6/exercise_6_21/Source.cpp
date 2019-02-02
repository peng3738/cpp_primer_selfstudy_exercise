#include<iostream>
using std::endl;
using std::cout;
int Max(const int t, const int *p)
{
	return (t > *p ? t : *p);
}

int main()
{
	int id=3, ij=4;
	int *ip = &ij;
	cout << Max(id, ip) << endl;
	system("pause");
	return 0;
}
