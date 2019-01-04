#include<iostream>
#include<string>
#include<memory>

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;

int main()
{
	//part 1
	/*
	unique_ptr<double> p1;
	unique_ptr<int> p2(new int(42));

	unique_ptr<string> p3(new string("Stegosaurus"));
	//unique_ptr<string> p4(p3);
	unique_ptr<string> p5;
	//p5 = p3;

	unique_ptr<string>p6(p3.release());
	cout << *p6 << endl;
	unique_ptr<string>p7(new string("Trex"));
	p6.reset(p7.release());
	cout << *p6 << endl;
	*/
	//part 2
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef unique_ptr<int> IntP;
	//IntP p0(ix);
	//IntP p1(pi);
	//IntP p2(pi2);
	//IntP p3(&ix);
	IntP p4(new int(2048));
	//IntP p5(p2.get());
	//cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;
	system("pause");
	return 0;
}