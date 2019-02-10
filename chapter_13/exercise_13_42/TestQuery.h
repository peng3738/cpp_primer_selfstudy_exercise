#ifndef TestQuery_H
#define TestQuery_H 
class QueryResult;
class StrVec;

#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<fstream>
#include<sstream>
#include<map>
#include<set>
#include<stdexcept>
#include"StrVec.h"

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
	//using line_no = StrVec::size_t;
private:
	//StrBlob SB;
	StrVec SV;
	map<string, shared_ptr<set<size_t>>> Imap;

};
#endif