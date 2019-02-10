#include "StrVec.h"
//#include<iostream>
//using std::cout;
//using std::endl;

StrVec::StrVec(const initializer_list<string>& iL)
{
	for (auto ai : iL)
	{
		chk_n_alloc();
		alloc.construct(first_free++, ai);
	}
}

void StrVec::push_back(const string &s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

std::pair<string *, string *> StrVec::alloc_n_copy(const string *b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return { data,uninitialized_copy(b,e,data) };
}

void StrVec::free()
{
	//cout << "free" << endl;
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
	//cout << "free end" << endl;
}

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator =(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
void StrVec::alloc_n_move(size_t n)
{
	auto newdata = alloc.allocate(n);
	auto dest = newdata;
	auto elem = elements;
	//cout << "alloc_n_move" << endl;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();

	elements = newdata;
	first_free = dest;
	cap = elements + n;
}


void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	alloc_n_move(newcapacity);

	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;

}



void StrVec::reserve(size_t n)
{
	if (n <= capacity())
		return;
	//cout << "reserve" << endl;
	alloc_n_move(n);
}

void StrVec::resize(size_t n)
{
	resize(n, string());
}

void StrVec::resize(size_t n, const string &t)
{
	//cout << "resize" << endl;
	if (size() < n)
	{
		if (capacity() < n) reserve(2 * n);
		for (size_t it = 0; it < n - size(); ++it)
			alloc.construct(first_free++, t);
	}
	else if (n < size())
	{
		//for (auto p = first_free; p != elements + n; --p)
		//	alloc.destroy(p);
		//alloc.deallocate(elements+n, size()-n);
		while (first_free != elements + n)
			alloc.destroy(--first_free);
	}
	//cout << "resize end" << endl;
}