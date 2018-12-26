#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<string>
#include<list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9 };
	for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl;
	sort(vec.begin(), vec.end());
	for (auto ai : vec)
		cout << ai << " ";
	cout << endl;
	sort(vec.rbegin(), vec.rend());
	for (auto ai : vec)
		cout << ai << " ";
	cout << endl;
	string line{ "you are great,why." };
	auto comma = find(line.cbegin(), line.cend(), ',');
	cout << string(line.cbegin(), comma) << endl;
	auto rcomma = find(line.crbegin(), line.crend(), ',');
	cout << string(rcomma.base(), line.cend())<< endl;

	//part 10.36
	list<int> lvec{ 1,2,3,4,5,6,7,8,0,1,0,2,0,3 };
	auto lastPosition=find(lvec.rbegin(), lvec.rend(), 0);
	cout << *lastPosition << endl;
	//part 10.37
	vector<int> vect{ 1,2,3,4,5,6,7,8,9,10 };
	list<int> Lvec;
	copy(vect.crbegin() + 3, vect.crend() - 3, inserter(Lvec,Lvec.begin()));
	for (auto ai : Lvec)
		cout << ai << " ";
	cout << endl;
	system("pause");
	return 0;
}