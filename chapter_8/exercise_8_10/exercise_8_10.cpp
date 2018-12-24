#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<fstream>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::istringstream;
using std::ifstream;


int main()
{
	string fileName = "E:/Cpp/CPP_primer_5th/Data/book.txt";
	vector<string> vec;
	ifstream input(fileName);
	if (input)
	{
		//cout << "right" << endl;
		string temp;
		while (input >> temp)
			vec.push_back(temp);
	}


	
	for (auto & line : vec)
	{
		istringstream record(line);
		string word;
		while (record >> word)
			cout << word << endl;
	}

	system("pause");
	return 0;
}