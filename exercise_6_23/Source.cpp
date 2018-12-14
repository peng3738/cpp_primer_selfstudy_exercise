#include<iostream>
using std::begin;
using std::end;
using std::endl;
using std::cout;

/*
void print(const int *ip)
{
	if(ip)
	cout << *ip << endl;
     
}
*/
void print(const int *beg, const int *end)
{
	while (beg != end)
		cout << *beg++ << endl;
}

void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size; ++i)
		cout << ia[i] << endl;
}

void print(int(&arr)[2])
{
	for (auto elem : arr)
		cout << elem << endl;
}

int main()
{
	int i = 0, j[2] = { 0,1 };
	//print(&i);
	print(j, end(j) - begin(j));
	//print(j);
	print(begin(j), end(j));
	//print(j);
	print(j);
	system("pause");
	return 0;
}
