#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
void reset(int *ip)
{
	*ip = 0;
	ip = 0;
}
void swap(int *p, int*q)
{
	int m = *p;
	*p = *q;
	*q = m;
}
int main()
{
	/*
	int n = 0, i = 43;
	int *p = &n, *q = &i;
	*p = 42; 
	cout << n << " " << *p<<endl;
	p = q;
	cout << n << " " << *p << endl;
	*/
	/*
	int i = 42;
	reset(&i);
	cout << "i=" << i << endl;
	*/
	int po = 3, qo = 4;
	swap(&po, &qo);
	cout <<"po "<< po << endl;
	cout << "qo " << qo << endl;
	string ad = "adea";
	//auto ret = ad.size();
	cout << ad.size() << endl;
	system("pause");
	return 0;

}