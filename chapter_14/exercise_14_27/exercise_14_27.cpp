#include"exercise_14_27.h"

int main()
{
	StrBlob a1{"sin", "cos", "tan"};
	StrBlobPtr p(a1);
	p.print();
	p.operator++(0);
	p.print();
	++p;
	p.print();
	cout << *p << " ";

	system("pause");
	return 0;
}