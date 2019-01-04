#include<iostream>
#include<memory>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::make_shared;

shared_ptr<int> clone(int p)
{
	return shared_ptr<int>(new int(p));
}
void process(shared_ptr<int>ptr)
{
	cout << ptr.use_count() << " ";
}

int main()
{
	shared_ptr<double>p1;
	shared_ptr<int> p2(new int(42));
	//shared_ptr<int> p3 = new int(1024);
	shared_ptr<int> p4(new int(1024));

	shared_ptr<int>p(new int(42));
	cout << p.use_count() << " ";
	process(p);
	int i = *p;
	cout<<p.use_count()<<" ";
	
	process(shared_ptr<int>(p));
	cout << p.use_count() << " ";

	process(shared_ptr<int>(p.get()));
	cout << p.use_count() << " ";


	/*
	auto sp = make_shared<int>();
	auto ps = sp.get();
	delete ps;
	*/
	system("pause");
	return 0;
}