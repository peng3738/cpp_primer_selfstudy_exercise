#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include<set>
#include<map>

using std::cout;
using std::cin;
using std::ifstream;
using std::string;
using std::vector;
using std::shared_ptr;
using std::endl;
using std::set;
using std::map;
using std::make_shared;

int main()
{
	/*
	string namePath = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream input(namePath);
	string line;
	using line_no=vector<string>::size_type ;
    shared_ptr<vector<string>> Data;

	vector<string> vs;
	while (getline(input, line))
	{
		vs.push_back(line);
	}
	Data = make_shared<vector<string>>(vs);

	for (auto ai : *Data)
		cout << ai << " ";
	cout << endl;
	*/

	string st1{ "you" }, st2{ "are great" };
	cout << st1.size() << " " << st2.size() << endl;
	//string st3 = st1 + st2;
	//cout << st3.size() << endl;
	char *cp = new char[st1.size()+st2.size()];
	for (string::size_type q = 0; q != st1.size() + st2.size(); ++q)
	{
		if (q < st1.size())
			*(cp + q) = st1[q];
		else
			*(cp + q) = st2[q - st1.size()];
	}
	cout << *cp <<" "<<*(cp+11)<< endl;
	delete[] cp;


	system("pause");
	return 0;
}