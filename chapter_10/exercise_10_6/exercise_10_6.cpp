#include<iostream>
#include<numeric>
#include<vector>
#include<list>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::begin;
using std::end;
using std::list;


int main()
{
	//part 1
	vector<int> vec{ 1,2,3,4,5 };
	fill(vec.begin(), vec.end(), 0);
	for (auto ai : vec)
		cout << ai << " ";

	cout << endl;
	//part 2
	vector<int> vect(15,1);
	fill_n(vect.begin(), 10, 0);
	for (auto ai : vect)
		cout << ai << " ";
	cout << endl;
	//part 3
	vector<int> vecc;
	auto it = back_inserter(vecc);
	*it = 42;
	fill_n(back_inserter(vecc), 10, 0);
	for (auto ai : vecc)
		cout << ai << " ";
	cout << endl;
	//part 4
	int a1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int a2[sizeof(a1) / sizeof(*a1)];
	auto ret = copy(begin(a1), end(a1), a2);
	for (auto ai : a2)
		cout << ai << " ";
	cout << endl;
	//part 5
	list<int> ilst{1,2,3,4,5,0,4};
	replace(ilst.begin(), ilst.end(), 0, 42);
	for (auto ai : ilst)
		cout << ai << " ";
	cout << endl;
	system("pause");
	return 0;

}