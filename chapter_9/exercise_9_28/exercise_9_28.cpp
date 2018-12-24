#include<iostream>
#include<forward_list>
#include<string>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void func(forward_list<string> fls, string st1, string st2)
{
	auto prep = fls.before_begin();
	auto curr = fls.begin();
	//cout << *curr << endl;
	while (curr != fls.end())
	{
		if (*curr == st1)
		{
			++curr = fls.insert_after(curr, st2);
			break;
		}
		++curr;
		++prep;
	}
	if (curr == fls.end())  fls.insert_after(prep, st2);
	for (auto ai : fls)
		cout << ai << " ";
	cout << endl;
}
int main()
{
	forward_list<string> fls = {"you","are","great"};
	string st1{"are" }, st2{"very" }, st3{"person"};

	
	func(fls, st1, st2);
	func(fls, st2, st3);

	system("pause");
	return 0;
}