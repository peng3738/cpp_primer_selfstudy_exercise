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
void swap(int &p, int&q)
{
	int m = p;
	p = q;
	q = m;
}
int main()
{
	int po = 3, qo = 4;
	swap(po, qo);
	cout << "po " << po << endl;
	cout << "qo " << qo << endl;
	system("pause");
	return 0;

}