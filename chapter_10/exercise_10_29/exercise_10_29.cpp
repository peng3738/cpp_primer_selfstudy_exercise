#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istream;
using std::ifstream;
using std::istream_iterator;

int main()
{
	//istream_iterator<int> int_it(cin);
	//istream_iterator<int> int_eof;

	ifstream inputdata("E:/Cpp/CPP_primer_5th/Data/letter_test.txt");
	istream_iterator<string> str_it(inputdata),eof;
	vector<string> vecs;
	while (str_it != eof)
	{
		//cout << *str_it << " ";
		vecs.push_back(*str_it++);
		//++str_it;
	}
	for (auto ai : vecs)
		cout << ai << " ";

	cout << endl;

	/*
	istream_iterator<int> in_iter(cin),eof;
	//istream_iterator<int> eof;
	vector<int> vec(in_iter,eof);
	//while (in_iter != eof)
	//	vec.push_back(*in_iter++);
	for (auto ai : vec)
		cout << ai << " ";
	cout << endl;
	*/
	system("pause");
	return 0;
}