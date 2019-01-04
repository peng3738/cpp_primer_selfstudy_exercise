#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
#include<stdexcept>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::shared_ptr;
using std::map;
using std::set;
using std::cerr;
using std::ostream;
using std::make_shared;

class QueryResult;

class TextQuery
{
public:
	TextQuery(ifstream &);
	QueryResult Query(const string & word) const;
	using line_no = vector<string>::size_type;
private:
	shared_ptr<vector<string>> Data;
	map<string, shared_ptr<set<line_no>>> Imap;
};

class QueryResult
{
	friend ostream &print(ostream &, const QueryResult &);
	
public:
	using line_no = vector<string>::size_type;
	using ResultIter = set<line_no>::iterator;
	QueryResult(string wo, shared_ptr<set<line_no>> occur, shared_ptr<vector<string>> source) :\
		found(wo), LineNum(occur), Text(source) {};
	ResultIter begin() { return LineNum->begin(); }
	ResultIter end() { return LineNum->end(); }
	shared_ptr<vector<string>> get_file() const{ return Text; }
private:
	//bool found;
	string found;
	shared_ptr<set<line_no>> LineNum;
	shared_ptr<vector<string>> Text;
};

TextQuery::TextQuery(ifstream &Input)
{
	string line;
	int Nline = 0;
	vector<string> vs;
	while (getline(Input, line))
	{
		//cout << line << endl;
		vs.push_back(line);
		//int n = Data->size() - 1;
		//cout << n << endl;
		//cout << line << endl;
		string word;
		istringstream IsInput(line);
		while (IsInput >> word)
		{
			//cout << word << endl;
			auto &lines = Imap[word];
			if (!lines)
				lines.reset(new set<line_no>);
			Imap[word]->insert(Nline);
		}
		++Nline;
	}
	Data = make_shared<vector<string>>(vs);

}

QueryResult TextQuery::Query(const string & word) const
{
	auto iter = Imap.find(word);
	if (iter == Imap.end())
		cerr << word << "is not in the map" << endl;
	else return QueryResult(word, iter->second, Data);

}

ostream &print(ostream &output, const QueryResult &QR)
{
	output << QR.found << " occurs " << QR.LineNum->size() << " " << endl;
	for (auto num : *QR.LineNum)
		output << "\t(line" << num + 1 << ")" << *(QR.Text->begin() + num) << endl;
	return output;
}

int main()
{
	string fileName = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream Input(fileName);

	TextQuery TQ(Input);
	QueryResult QR = TQ.Query("you");
	print(cout, QR);
	//print(cout,TQ.Query("you"));
	system("pause");
	return 0;
}

