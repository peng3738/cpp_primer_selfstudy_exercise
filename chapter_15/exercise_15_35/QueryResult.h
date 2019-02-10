#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include<vector>
#include<string>
#include<iostream>
#include<set>
class QueryResult {
	using line_no = std::vector<std::string>::size_type;
	friend std::ostream &print(std::ostream &, const QueryResult&);
public:
	QueryResult(std::string s, std::shared_ptr<std::set<line_no>>p, std::shared_ptr<std::vector<std::string>>f) :
		sought(s), lines(p), file(f) {}
	std::set<line_no>::iterator begin() { return lines->begin(); }
	std::set<line_no>::iterator end() { return lines->end(); }
	const std::shared_ptr<std::vector<std::string>>& get_file() const { return file; }
private:
	std::string sought;
	std::shared_ptr<std::set<line_no>> lines;
	std::shared_ptr<std::vector<std::string>> file;
};

#endif