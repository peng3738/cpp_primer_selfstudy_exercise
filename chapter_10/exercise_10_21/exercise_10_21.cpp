#include<iostream>
#include<algorithm>

using std::cout;
using std::endl;

int main()
{
	int it=3;
	auto f = [&it]() {return it > 0 ? --it : -1; };
	//cout << f()<<endl;
	while (f())
		cout << it << " ";
	system("pause");
	return 0;
}