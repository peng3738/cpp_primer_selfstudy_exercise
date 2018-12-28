#include<iostream>
#include<list>
#include<iterator>
#include<vector>
#include<map>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::iterator;
using std::map;

int main()
{
	map<vector<int>::iterator, int> obv;
	map<list<int>::iterator, int> obL;

	vector<int> dataV{ 1,2,3,4 };
	list<int> dataL{ 1,2,3,4 };
	obv[dataV.begin()]= 1;
	//obL[dataL.begin()] = 2;

	system("pause");
	return 0;
}