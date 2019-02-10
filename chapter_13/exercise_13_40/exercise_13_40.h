#pragma once
#ifndef EXERCISE_13_40_H
#define EXERCISE_13_40_H
//#include<iostream>
#include<string>
#include<memory>

//using std::cout;
//using std::endl;
using std::string;
using std::allocator;
using std::pair;
using std::initializer_list;

class StrVec {
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {};
	StrVec(const initializer_list<string> &);
	StrVec(const StrVec&);
	StrVec &operator=(const StrVec &);
	~StrVec();
	void push_back(const string &);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	void reserve(size_t n);
	void resize(size_t n);
	void resize(size_t n, const string &t);
	string *begin() const { return elements; }
	string *end() const { return first_free; }
	//void print() { for (auto ai = elements; ai < first_free; ++ai) cout << *ai << " ";}
private:
	allocator<string> alloc;
	void chk_n_alloc() { if (size() == capacity()) reallocate(); }
	pair<string *, string *> alloc_n_copy(const string *, const string *);
	void free();
	void reallocate();
	void alloc_n_move(size_t n);

	string *elements;
	string *first_free;
	string *cap;
};


#endif