#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

struct X
{
	X() { cout << "X()" << endl; }
	X(const X&) { cout << "X(const X&)" << endl; }
	X& operator=(const X&) { cout << "copy operator"<<endl; return *this; }
	~X() { cout << "Destructor is called" << endl; };

};
void func(X &x1, X x2)
{
	X x3;
	cout << "x3" << endl;
	vector<X> vec;
	vec.push_back(x1);
	vec.push_back(x2);
}

int main()
{
	X *p = new X;
	func(*p, *p);
	delete p;
	system("pause");
	return 0;
}