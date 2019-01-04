#ifndef QueryResult_H
#define QueryResult_H

#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
#include<stdexcept>
#include"StrBlob.h"

using std::cout;
using std::cin;
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

class QueryResult
{
	friend ostream &print(ostream &, const QueryResult &);
public:
	using line_no = StrBlob::size_type;
	QueryResult(string wo, shared_ptr<set<line_no>> occur, StrBlob source) :\
		found(wo), LineNum(occur), Text(source) {};
private:
	//bool found;
	string found;
	shared_ptr<set<line_no>> LineNum;
	StrBlob Text;
};
#endif
