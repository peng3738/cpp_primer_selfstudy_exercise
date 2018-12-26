#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<forward_list>
#include<list>
#include<iterator>


using std::vector;
using std::cout;
using std::endl;
using std::deque;
using std::forward_list;
using std::list;


int main()
{

	vector<int> veci{ 1,2,3,4,5,6,7,8,9 };
	deque<int> dvec;
	//forward_list<int> fvec;
	list<int> Lvec,Lvec2;
	
	copy(veci.begin(), veci.end(), front_inserter(dvec));
	copy(veci.begin(), veci.end(), back_inserter(Lvec));
	copy(veci.begin(), veci.end(), inserter(Lvec2, Lvec2.begin()));
	//copy(veci.begin(), veci.end(), inserter(fvec, fvec.begin()));
	for (auto ai : dvec)
		cout << ai << " ";
	cout << endl;
	for (auto ai : Lvec)
		cout << ai << " ";
	cout << endl;
	for (auto ai : Lvec2)
		cout << ai << " ";
	cout << endl;

	system("pause");
	return 0;
}