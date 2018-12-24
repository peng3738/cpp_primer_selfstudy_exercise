#include<iostream>
#include<string>
#include<fstream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

int main()
{
	string fileName("E:/Cpp/CPP_primer_5th/Data/letter_test.txt");
	ifstream inputLetter(fileName);
	if (!inputLetter)
		return -1;
	string word;
	string ascender("bdfBDFF");
	string descender("pgPG");
	string longestW;
	while (inputLetter>>word)
		//cout << word << "*";
		if ((word.find_first_of(ascender) == string::npos) && (word.find_first_of(descender) == string::npos))
			//longestW = (longestW.size() > word.size()) ? longestW : word;
		{
			cout << longestW.size() << endl;
			if (word.size() > longestW.size())  longestW = word;
		}
	cout << longestW << endl;

	system("pause");
	return 0;



}