/*
#ifndef Exercise_13_39_H
#define Exercise_13_39_H
//#include<iostream>
#include<string>
#include<memory>

//using std::cout;
//using std::endl;
using std::string;
using std::allocator;
using std::pair;

class StrVec{
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {};
	StrVec(const StrVec&);
	StrVec &operator=(const StrVec &);
	~StrVec();
	void push_back(const string &);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	void reserve(size_t n);
	void resize(size_t n);
	void resize(size_t n, const string &t);
	string *begin() const{ return elements; }
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
*/
#pragma once
#ifndef CP5_EX_13_39_H_

#define CP5_EX_13_39_H_



#include <memory>

#include <string>
using std::string;



class StrVec

{

public:

	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }

	StrVec(const StrVec&);

	StrVec& operator=(const StrVec&);

	~StrVec();



	void push_back(const std::string&);

	size_t size() const { return first_free - elements; }

	size_t capacity() const { return cap - elements; }

	std::string *begin() const { return elements; }

	std::string *end() const { return first_free; }



	void reserve(size_t new_cap);

	void resize(size_t count);

	void resize(size_t count, const std::string&);



private:

	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);

	void free();

	void chk_n_alloc() { if (size() == capacity()) reallocate(); }

	void reallocate();

	void alloc_n_move(size_t new_cap);



private:

	std::string *elements;

	std::string *first_free;

	std::string *cap;

	std::allocator<std::string> alloc;

};



#endif
