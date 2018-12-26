#include<iostream>
#include<list>
#include<string>
#include<algorithm>
#include<vector>

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
	list<string> vecs{"you","are","red","great","why","welcome","red","red","good","red"};
	list<string> new_vecs;

	unique_copy(vecs.begin(), vecs.end(), back_inserter(new_vecs));
	for (auto ai : new_vecs)
		cout << ai << " ";
	cout << endl;
	cout <<vecs.size()<< " "<<new_vecs.size()<<endl;

	vector<int> veci{ 1,2,3,4,5,5,4,3,2,1 };
	list<int> new_veci;
	unique_copy(veci.begin(), veci.end(), back_inserter(new_veci));
	for (auto ai : new_veci)
		cout << ai << " ";
	cout << endl;
	cout << veci.size() << " " << new_veci.size() << endl;

	system("pause");
	return 0;
}