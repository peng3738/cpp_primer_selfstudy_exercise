#include<fstream>
#include<string>
#include<vector>
#include<iostream>
//#include<iomanip>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;

void ReadFile(const string &fileName, vector<string>&vec)
{
	ifstream input(fileName);
	if (input)
	{
		//cout << "right" << endl;
		string temp;
		while (std::getline(input, temp))
			vec.push_back(temp);
	}
	//cout << vec.size() << endl;
	//for(auto str:vec)
	//cout<< str << endl;
}

int main()
{
	vector<string> vs;
	string fileName = "E:/Cpp/CPP_primer_5th/Data/book.txt";
	//string fileName = "book.txt";
	//ifstream input(fileName);
	//string line;
	//while (getline(input, line))
	//	cout << line << endl;
	ReadFile(fileName, vs);
	for (const auto &str : vs)
		cout << str << endl;
	/*
	ofstream outfile;
	outfile.open(fileName, ios::out);
	if (!outfile)
	{
		std::cerr << "open error!" << endl;
		system("pause");
		exit(1);
	}
	cout << "you are" << endl;
	*/
	system("pause");
	return 0;
}