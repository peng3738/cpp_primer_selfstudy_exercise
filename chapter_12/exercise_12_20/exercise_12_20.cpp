#include<iostream>
#include<string>
#include<stdexcept>
#include<memory>
#include<vector>
#include <initializer_list>
#include<fstream>
#include<sstream>

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

class StrBlobPtr;
//*************************
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
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};



//*************************
class StrBlobPtr
{
public:
	StrBlobPtr() :curr(0) {};
	StrBlobPtr(StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {};
	bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
	string &deref() const;
	StrBlobPtr &incr();
private:
	size_t curr;
	weak_ptr<vector<string>> wptr;
	shared_ptr<vector<string>> check(size_t, const string&) const;

};

//****************************
StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this, data->size());
}

StrBlob::StrBlob() :data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string>iL) : data(make_shared<vector<string>>(iL)) {}
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
shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}
string &StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}
StrBlobPtr &StrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

int main()
{
	string filePath = "E:/Cpp/CPP_primer_5th/Data/letter_test.txt";
	ifstream input(filePath);
	string line;
	StrBlob Sb;
	while (getline(input, line))
	{
		Sb.push_back(line);
		//cout << line << "* ";
	}
	//cout <<Sb.front()<<" "<<Sb.back()<< endl;
	//cout << Sb.back() << endl;
	
	StrBlobPtr Sbp(Sb);
	for(StrBlobPtr Beg(Sb.begin()), End(Sb.end()); Beg!= End;Beg.incr())
	{
		cout << Beg.deref()<<" ";
	}
	system("pause");
	return 0;
}