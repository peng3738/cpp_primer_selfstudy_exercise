#include<iostream>
#include<vector>
#include<string>
#include<memory>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> func(vector<int> vect)
{
	return make_shared<vector<int>>(vect);
}

shared_ptr<vector<int>> read(shared_ptr<vector<int>> vec)
{
	int p;
	while (cin >> p)
		vec->push_back(p);
	return vec;
}

void print(shared_ptr<vector<int>>vec)
{
	for (auto ai : *vec)
		cout << ai << " ";
}

int main()
{
	vector<int> vect{ 1,2,3,4 };
	shared_ptr<vector<int>> vec = func(vect);
	for (auto ai : *vec)
		cout << ai << " ";
	read(vec);
	print(vec);
	system("pause");
	return 0;
}

