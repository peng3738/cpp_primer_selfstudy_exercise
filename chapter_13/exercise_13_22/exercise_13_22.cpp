#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class HasPtr 
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(const HasPtr& HP) { ps =new string(*HP.ps); i = HP.i; }
	HasPtr &operator =(const HasPtr &HP) { auto newp = new string(*HP.ps); delete ps; ps = newp; i = HP.i; return *this; }
	~HasPtr() { delete ps; }
private:
	string *ps;
	int i;
};

int main()
{
	system("pause");
	return 0;
}