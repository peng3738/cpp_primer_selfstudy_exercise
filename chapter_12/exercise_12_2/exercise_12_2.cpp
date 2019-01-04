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

class StrBlob 
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string>iL);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string &front() ;
    string &back() ;
	const string &front() const;
	const string &back() const;
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

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
	vector<string> vecs{ "are","you","great" };
	//StrBlob p1(vecs)
	StrBlob ps{ "are","you","great" };
	cout << ps.front() <<" "<< ps.back() << endl;

	system("pause");
	return 0;
}
