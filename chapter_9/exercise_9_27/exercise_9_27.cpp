#include<iostream>
#include<forward_list>

using std::forward_list;
using std::cout;
using std::endl;

int main()
{
	forward_list<int> fl = { 0,1,2,3,4,5,6,7,8,9 };
	auto prep = fl.before_begin();
	auto curr = fl.begin();
	while (curr!= fl.end())
		if (*curr % 2)
			curr=fl.erase_after(prep);
		else { prep = curr; ++curr; }
	
	for (auto ia : fl)
		cout << ia << " ";
	cout << endl;

	system("pause");
	return 0;
}