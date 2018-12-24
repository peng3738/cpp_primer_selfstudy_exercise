#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	/*
	string name("AnnaBelle");
	auto pos1 = name.find("Anna");
	cout << pos1 << endl;

	string numbers("0123456789"), name2("r2d2");
	auto pos2 = name2.find_first_of(numbers);
	cout << pos2 << endl;

	string dept("03714p3");
	auto pos3 = dept.find_first_not_of(numbers);
	cout << pos3 << endl;

	name = "s2d3";
	string::size_type pos = 0;
	while ((pos = name.find_first_of(numbers, pos)) != string::npos)
	{
		cout << "found number at index: " << pos << " element is " << name[pos] << endl;
		++pos;
	}

	string river("Mississippi");
	auto first_pos = river.find("is");
	auto last_pos = river.rfind("is");
	cout << first_pos << endl;
	cout << last_pos << endl;
	*/

	string test("ab2c3d7R4E6");
	string numeric("0123456789");
	string::size_type index = 0;
	while ((index = test.find_first_of(numeric, index)) != string::npos)
		cout << test[index] << " ",++index;
	string::size_type indexN = 0;
	cout << endl;
	while ((indexN = test.find_first_not_of(numeric, indexN)) != string::npos)
		cout << test[indexN] << " ",++indexN;
	cout << endl;
	system("pause");
	return 0;
}