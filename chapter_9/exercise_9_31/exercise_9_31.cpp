#include<iostream>
#include<list>
#include<forward_list>

using std::list;
using std::forward_list;
using std::cout;
using std::endl;

void funcLs(list<int> vi)
{
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			int mi = *iter;
			++iter;
			iter = vi.insert(iter, mi);
			++iter;
		}
		else iter = vi.erase(iter);
	}
	for (auto ai : vi)
		cout << ai << " ";
	cout << endl;
}
////////
void funcFL(forward_list<int> fL)
{
	auto prep = fL.before_begin();
	auto curr = fL.begin();
	//cout << *curr << endl;
	while (curr != fL.end())
	{
		if (*curr % 2)
		{
			prep = curr;
			//++curr;
			//cout << *curr << "*";
			curr = fL.insert_after(curr, *prep);
			//cout << *curr << "%";
			prep = curr;
			++curr;
		}
		else
		{
			curr=fL.erase_after(prep);
			//++prep;
			//++curr;
		}
		//cout << *curr << " ";

	}

	for (auto ai : fL)
		cout << ai << " ";
	cout << endl;
}


int main()
{
	list<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	funcLs(vi);

	forward_list<int> fL = { 0,1,2,3,4,5,6,7,8,9 };
	funcFL(fL);

	system("pause");
	return 0;
}