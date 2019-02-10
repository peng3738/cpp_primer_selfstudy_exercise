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
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {};
	HasPtr(const HasPtr&HP) { *ps = *(new string(*HP.ps)); i = HP.i; };
	HasPtr &operator=(const HasPtr &HP) { *ps = *HP.ps; i = HP.i; return *this; };
	void print() { cout << *ps << " " << i; };
	~HasPtr() {}
private:
	string *ps;
	int i;

};
int main()
{
	HasPtr Hp{ "are" };
	HasPtr LS{ "you" };
	LS = Hp;
	LS.print();
	cout << endl;
	system("pause");
	return 0;
}