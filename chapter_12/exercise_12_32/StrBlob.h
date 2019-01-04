#ifndef StrBlob_H
#define StrBlob_H

#include<iostream>
#include<memory>
#include<string>
#include<initializer_list>
#include<stdexcept>
#include<vector>


using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::initializer_list;
using std::out_of_range;
using std::vector;
using std::make_shared;
using std::weak_ptr;
using std::runtime_error;

class StrBlobPtr;
//*************************8
class StrBlob
{
	friend class StrBlobPtr;
public:
	StrBlobPtr begin();
	StrBlobPtr end();
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string>iL);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string &front();
	string &back();
	const string &front() const;
	const string &back() const;
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

class StrBlobPtr
{
public:
	StrBlobPtr() :curr(0) {};
	StrBlobPtr(const StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {};
	bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
	string &deref() const;
	StrBlobPtr &incr();
private:
	size_t curr;
	weak_ptr<vector<string>> wptr;
	shared_ptr<vector<string>> check(size_t, const string&) const;

};

#endif