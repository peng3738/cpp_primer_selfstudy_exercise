#include<iostream>
#include<sstream>
#include<string>
using std::istream;
using std::istringstream;
using std::string;

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
	string line{"you are great."};
	istringstream record(line);
	//istringstream record;
	istream &is = func(record);
	std::cout << is.rdstate() << std::endl;
	system("pause");
	return 0;
}
