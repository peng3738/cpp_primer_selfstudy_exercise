#ifndef TestQuery_H
#define TestQuery_H 
class QueryResult;
class StrBlob;

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

class TextQuery
{
public:
	TextQuery(ifstream &);
	QueryResult Query(const string & word) const;
	using line_no = StrBlob::size_type;
private:
	StrBlob SB;
	map<string, shared_ptr<set<line_no>>> Imap;

};
#endif