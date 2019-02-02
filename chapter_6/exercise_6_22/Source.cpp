#include<iostream>
using std::cout;
using std::endl;

void swap( int *&p,  int *&q)
{
    int *m = p;
	p = q;
	q = m;
}

int main()
{
    int i = 3, j = 4;
    int *ip = &i, *iq = &j;
	cout << *ip <<" "<< *iq << endl;
	swap(ip, iq);
	cout << *ip << " " << *iq << endl;
	
	system("pause");
	return 0;
}
