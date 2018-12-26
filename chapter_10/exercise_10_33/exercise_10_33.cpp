#include<iostream>
#include<vector>
#include<iterator>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
	
	ifstream inputData("E:/Cpp/CPP_primer_5th/Data/integers.txt");
	istream_iterator<int> input(inputData), eof;
	vector<int> vecOdd, vecEven;

	ofstream outputDataOdd("E:/Cpp/CPP_primer_5th/Data/integersOdd.txt");
	ofstream outputDataEven("E:/Cpp/CPP_primer_5th/Data/integersEven.txt");

	ostream_iterator<int> outputOdd(outputDataOdd, ",");
	ostream_iterator<int> outputEven(outputDataEven, ",");

	while (input != eof)
	{
		*input % 2 ? vecOdd.push_back(*input) : vecEven.push_back(*input);
		if (*input % 2)
		{
			*outputOdd++ = *input;
		}
		else
		{
			*outputEven++ = *input;
		}
		++input;
	}
	for (auto ai : vecOdd)
		cout << ai << " ";
	cout << endl;
	for (auto ai : vecEven)
		cout << ai << " ";
	cout << endl;

	system("pause");
	return 0;

}