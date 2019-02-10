#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::initializer_list;

class vectorHasPtr;
class HasPtr
{
	friend void swap(HasPtr &, HasPtr &);
	//friend bool sort(HasPtr &, HasPtr &);
	friend class vectorHasPtr;
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {};
	HasPtr(const HasPtr &p) :ps(new string(*p.ps)), i(p.i) {};
	HasPtr &operator=(const HasPtr &);
	bool &operator<(const HasPtr &);
	~HasPtr() { delete ps; }
	void print() { cout << *ps << " " << i << endl; }
private:
	string *ps;
	int i;
};
class vectorHasPtr
{
	friend void swap(HasPtr &, HasPtr &);
public:
	vectorHasPtr() = default;
	vectorHasPtr(initializer_list<HasPtr> Hp) { for (auto ai : Hp)Vhp.push_back(ai); };
	void sort();
	void print() { for (auto ai : Vhp) cout << *ai.ps << " "; cout << endl; };
private:
	vector<HasPtr> Vhp;
};

void vectorHasPtr::sort()
{
	if (!Vhp.size())
		return;
	for (auto ai = Vhp.begin(); ai < Vhp.end() - 1; ++ai)
	{
		//cout <<*(ai->ps) << endl;
		for (auto bi = Vhp.end()-1 ; bi > ai; --bi)
		{
			//cout << *(bi->ps)<<endl;
			if (*(bi->ps) < *((bi-1)->ps)) swap(*(bi-1), *bi);
			//cout << "out";
		}
	}
}
HasPtr &HasPtr::operator=(const HasPtr & p)
{
	auto newp = new string(*p.ps);
	delete ps;
	ps = newp;
	i = p.i;
	return *this;
}
bool &HasPtr::operator<(const HasPtr &p)
{
	bool t = (*ps < *(p.ps));
	return t ;
}


void swap(HasPtr & Hp1, HasPtr &Hp2)
{
	cout << "swap the data" << endl;
	using std::swap;
	swap(Hp1.ps, Hp2.ps);
	swap(Hp1.i, Hp2.i);
}
int main()
{
	HasPtr hp1("cos"), hp2("sin"),hp3("tan");
	swap(hp1, hp2);
	hp1.print();
	hp2.print();
	//cout << ("a" < "ab") << endl;
	vectorHasPtr vhp{ hp1,hp2,hp3 };
	vhp.print();
	vhp.sort();
    vhp.print();
	system("pause");
	return 0;

}