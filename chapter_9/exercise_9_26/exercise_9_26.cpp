#include<iostream>
#include<vector>
#include<list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	int ia[] = { 0,1,1,2,3,4,8,13,21,55,89 };
	vector<int> vi;
	list<int> Li;
	for (auto a : ia)
	{
		vi.push_back(a);
		Li.push_back(a);
	}
	//cout << vi[0] << endl;

	auto iv = vi.begin();
	auto iL = Li.begin();

	while (iv != vi.end())
		if (*iv % 2)iv=vi.erase(iv);
		else ++iv;
	
	while (iL != Li.end())
		if (!(*iL % 2))iL=Li.erase(iL);
		else ++iL;
	for (auto it : vi)
		cout << it << " ";
	cout << endl;
	for (auto it : Li)
		cout << it << " ";
	cout << endl;

	system("pause");
	return 0;
}