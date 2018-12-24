#include<iostream>
#include<string>
using std::istream;

istream & func(istream &input1)
{
	std::string lsd;
	while (input1 >> lsd)
	{
		std::cout << lsd << " " << std::endl;
	}
	input1.clear();
	return input1;
}

int main()
{
	istream &is=func( std::cin);
	std::cout << is.rdstate() << std::endl;
	system("pause");
	return 0;
}
