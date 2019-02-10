#ifndef QUERY_H
#define QUERY_H
#include"Query_base.h"
#include"WordQuery.h"
#include"NotQuery.h"
#include"AndQuery.h"
#include"OrQuery.h"
class Query
{
	friend Query operator~(const Query &);
	friend Query operator|(const Query &, const Query&);
	friend Query operator&(const Query&, const Query &);
public:
	Query(const std::string&);
	QueryResult eval(const TextQuery &t)const { return q->eval(t); }
	std::string rep() const { return q -> rep(); }
	//std::
private:
	Query(std::shared_ptr<Query_base>query) :q(query) {}
	std::shared_ptr<Query_base>q;
};


#endif