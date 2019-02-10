#include<iostream>
#include<string>
#include<stdexcept>
#include<memory>
#include<vector>
#include <initializer_list>

using std::cout;
using std::endl;
using std::runtime_error;
using std::string;
using std::weak_ptr;
using std::shared_ptr;
using std::vector;
using std::make_shared;
using std::out_of_range;
using std::initializer_list;
using std::ifstream;
using std::istringstream;

class ConstStrBlobPtr;
//*************************
class StrBlob
{
	friend class ConstStrBlobPtr;
public:
	ConstStrBlobPtr begin() const;
	ConstStrBlobPtr end() const;
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string>iL);
	StrBlob(const StrBlob &);
	StrBlob &operator=(const StrBlob &);
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



//*************************
class ConstStrBlobPtr
{
public:
	ConstStrBlobPtr() :curr(0) {};
	ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {};
	bool operator!=(const ConstStrBlobPtr& p) { return p.curr != curr; }
	const string &deref() const;
	ConstStrBlobPtr &incr();
private:
	size_t curr;
	weak_ptr<vector<string>> wptr;
	shared_ptr<vector<string>> check(size_t, const string&) const;

};

//****************************
ConstStrBlobPtr StrBlob::begin() const
{
	return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::end() const
{
	return ConstStrBlobPtr(*this, data->size());
}

StrBlob::StrBlob() :data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string>iL) : data(make_shared<vector<string>>(iL)) {}
StrBlob::StrBlob(const StrBlob &SB)
{
	data = make_shared<vector<string>>(*SB.data);
}
StrBlob &StrBlob::operator=(const StrBlob&  SB)
{
	data = make_shared<vector<string>>(*SB.data);
	return *this;
}

void StrBlob::check(size_type i, const string &msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}

string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}
//************************
shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}
const string &ConstStrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}
ConstStrBlobPtr &ConstStrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

const string & StrBlob::front() const
{
	check(0, "back on empty StrBlob");
	return data->front();
}

const string &StrBlob::back() const
{
	check(0, "pop_back on empty StrBlob");
	return data->back();
}

int main()
{
	const StrBlob ps{ "are","you","great" };
	//cout << ps.front() << " " << ps.back() << endl;
	for (auto Beg(ps.begin()), End(ps.end()); Beg != End; Beg.incr())
		cout << Beg.deref() << " ";
	system("pause");
	return 0;
}