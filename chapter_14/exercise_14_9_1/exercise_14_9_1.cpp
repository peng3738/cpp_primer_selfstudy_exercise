#include<iostream>
//#include<>

using std::cout;
using std::endl;

class SmallInt
{
public:
	SmallInt(int i = 0) :val(i) 
	{
		cout << "construct" << endl;
		if (i < 0 || i>255)
			throw std::out_of_range("Bad SmallInt value");
	}
	//explicit operator int() const { cout << "operator "<<endl; return val; }
	operator int() const { cout << "operator " << endl; return val; }
private:
	std::size_t val;
};

int main()
{
	SmallInt si(3);
	//cout << si << endl;
	si = 4;
	//static_cast<int>(si) + 3;
	cout << si << endl;
	cout<<si + 3<<endl;

	//SmallInt Si = 3.14;
	//cout << Si << endl;
	//cout << Si + 4 << endl;

	system("pause");
	return 0;
}