#include<iostream>
#include<string>
//#include<>

using std::cout;
using std::endl;
using std::string;

class HasPtr
{
public:
	HasPtr() = default;
	HasPtr(const string &s = string()):ps(new string(s)), i(0) {};
	HasPtr(const HasPtr&HP) { *ps = *(new string(*HP.ps)); i = HP.i; };
	void print() { cout << *ps << " " << i; };
private:
	string *ps;
	int i;

};
int main()
{
	HasPtr Hp{ "are" };
	HasPtr LS{"you"};
	LS = Hp;
	LS.print();
	system("pause");
	return 0;
}