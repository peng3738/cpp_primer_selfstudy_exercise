#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

vector<int> *func(vector<int> vect)
{
	return new auto(vect);
}

vector<int>* read(vector<int>* vec)
{
	int p;
	while (cin >> p)
		vec->push_back(p);
	return vec;
}

void print(vector<int>*vec)
{
	for (auto ai : *vec)
		cout << ai << " ";
}

int main()
{
	/*
	int *pi = new int;
	string *ps = new string;
	
	int *pit = new int(1024);
	string *pst = new string(10, '9');
	vector<int> *pv = new vector<int>{ 0,1,2,3,4,5,6,7,8,9 };

	int obj=0;
	auto p1 = new auto(obj);
	//auto p2 = new auto{a, b, c};

	const int*pci = new const int(1024);
	const string *pcs = new const string;
	delete pi, ps, pit, pst, pv, p1, pci, pcs;
	*/
	vector<int> vect{ 1,2,3,4 };
	vector<int>*vec = func(vect);
	for (auto ai : *vec)
		cout << ai << " ";
	read(vec);
	print(vec);
	delete vec;
	system("pause");
	return 0;
}

