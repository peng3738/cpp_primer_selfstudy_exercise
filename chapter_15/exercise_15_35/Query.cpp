#include"Query.h"
inline Query::Query(const std::string &s) :q(new WordQuery(s)) {}
inline Query operator ~(const Query &operand)
{
	std::shared_ptr<Query_base>tmp(new NotQuery(operand));
	return Query(tmp);
}
inline Query operator&(const Query &lhs, const Query &rhs)
{
	std::shared_ptr<Query_base>tmp(new AndQuery(lhs, rhs));
	return Query(tmp);
}
inline Query operator|(const Query &lhs, const Query &rhs)
{
	return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}