#include<iostream>
#include<list>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &words)
{
	words.sort();
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
	 words.unique();
	for (auto ai : words)
		cout << ai << " ";
	cout << endl;
}
int main()
{
	list<string> Lst{ "you","are","great","red","red","the","the","why","welcome","why" };
	elimDups(Lst);
	system("pause");
	return 0;
}