
#include "ex13_39.h"
#include<iostream>


void StrVec::push_back(const std::string &s)

{

	chk_n_alloc();

	alloc.construct(first_free++, s);

}



std::pair<std::string*, std::string*>

StrVec::alloc_n_copy(const std::string *b, const std::string *e)

{

	auto data = alloc.allocate(e - b);

	return{ data, std::uninitialized_copy(b, e, data) };

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

/*
void StrVec::free()

{

	if (elements) {

		for (auto p = first_free; p != elements;)

			alloc.destroy(--p);

		alloc.deallocate(elements, cap - elements);

	}

}
*/


StrVec::StrVec(const StrVec &rhs)

{

	auto newdata = alloc_n_copy(rhs.begin(), rhs.end());

	elements = newdata.first;

	first_free = cap = newdata.second;

}



StrVec::~StrVec()

{

	free();

}

StrVec &StrVec::operator =(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

/*
StrVec& StrVec::operator = (const StrVec &rhs)

{

	auto data = alloc_n_copy(rhs.begin(), rhs.end());

	free();

	elements = data.first;

	first_free = cap = data.second;

	return *this;

}
*/

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



/*
void StrVec::alloc_n_move(size_t new_cap)

{

	auto newdata = alloc.allocate(new_cap);

	auto dest = newdata;

	auto elem = elements;

	for (size_t i = 0; i != size(); ++i)

		alloc.construct(dest++, std::move(*elem++));

	free();

	elements = newdata;

	first_free = dest;

	cap = elements + new_cap;

}
*/
void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	alloc_n_move(newcapacity);
	/*
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
	*/
}

/*
void StrVec::reallocate()

{

	auto newcapacity = size() ? 2 * size() : 1;

	alloc_n_move(newcapacity);

}
*/
void StrVec::reserve(size_t n)
{
	if (n <= capacity())
		return;
	//cout << "reserve" << endl;
	alloc_n_move(n);
}


/*
void StrVec::reserve(size_t new_cap)

{

	if (new_cap <= capacity()) return;

	alloc_n_move(new_cap);

}
*/

void StrVec::resize(size_t n)
{
	resize(n, string());
}

/*
void StrVec::resize(size_t count)

{

	resize(count, std::string());

}
*/

/*
void StrVec::resize(size_t count, const std::string &s)

{

	if (count > size()) {

		if (count > capacity()) reserve(count * 2);

		for (size_t i = size(); i != count; ++i)

			alloc.construct(first_free++, s);

	}

	else if (count < size()) {

		while (first_free != elements + count)

			alloc.destroy(--first_free);

	}

}
*/

void StrVec::resize(size_t n, const string &t)
{
	//cout << "resize" << endl;
	if (size() < n)
	{
		if (capacity() < n) reserve(2 * n);
		for (size_t it = 0; it < n - size(); ++it)
			alloc.construct(first_free++, t);
	}
	else if(n<size())
	{
		//for (auto p = first_free; p != elements + n; --p)
		//	alloc.destroy(p);
		//alloc.deallocate(elements+n, size()-n);
		while (first_free != elements + n)
			alloc.destroy(--first_free);
	}
	//cout << "resize end" << endl;
}



int main()
{
	StrVec SV;
	std::cout << SV.capacity() << std::endl;
	SV.resize(5, "a");
	SV.push_back("cos");
	system("pause");
	return 0;

}