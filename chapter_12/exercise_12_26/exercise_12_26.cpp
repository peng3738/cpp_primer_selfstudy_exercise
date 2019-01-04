#include<iostream>
#include<string>
#include<memory>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::allocator;

int main()
{
	size_t n = 10;
	//string *const p = new string[n];
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	string s;
	string *q = p;
	while (cin >> s && q != p + n)
	{
		alloc.construct(q++,s);
	}
	const size_t size = q - p;
	for (auto it = 0; it < size; it++)
		cout << *(p + it) << " ";

	//delete[] p;
	while (q != p)
		alloc.destroy(--q);

	/*
	allocator<string> alloc;
	auto const p1 = alloc.allocate(n);
	auto q1 = p1;
	alloc.construct(q1++);
	//cout << *q1 << endl;
	alloc.construct(q1++, 10, 'c');
	//cout << *q1 << endl;
	alloc.construct(q1++, "hi");
	cout << *p1 << endl;
	//cout << *q1 << endl;
	while (q != p)
		alloc.destroy(--q);
	*/

	system("pause");
	return 0;
}