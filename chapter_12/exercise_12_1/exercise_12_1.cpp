#include<iostream>
#include<memory>
#include<string>
#include<vector>
#include<list>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::vector;
using std::list;
using std::make_shared;

int main()
{
	shared_ptr<string> p1;
	shared_ptr<list<int>>p2;
	if (p1&&p1->empty())
		*p1 = "Hi";
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<string>p4 =make_shared<string>(10, '9');
	shared_ptr<int>p5 = make_shared<int>();
	auto p6 = make_shared<vector<string>>();

	auto p = make_shared<int>(42);
	auto q(p);

	auto r = make_shared<int>(42);
	r = q;



	system("pause");
	return 0;
}
