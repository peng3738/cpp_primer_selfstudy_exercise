#ifndef EXERCISE_13_44_H
#define EXERCISE_13_44_H
#include<memory>

class string
{
public:
	string() :begE(nullptr), endE(nullptr) {};
	string(const char *);
	string(const string &);
	string &operator=(const string &);
	//string &operator+(const string &);
	~string();
	size_t size() const { return endE - begE; };
	char *begin() const { return begE; };
	char *end() const { return endE; };
	void print() { if(begE!=endE)std::cout << begE << " "; }
private:
	std::allocator<char> alloc;
	std::pair<char*, char*>alloc_n_copy(const char*, const char*);
	void free();
	char *begE;
	char *endE;
};




string::string(const char *cp)
{
	char * ch = const_cast<char *>(cp);
	//std::cout << *ch;
	while (*ch)
	{
		//std::cout << *ch << " ";
		++ch;
	}
	auto data=alloc_n_copy(cp, ++ch);
	begE = data.first;
	endE = data.second;
	
}

std::pair<char*, char*> string::alloc_n_copy(const char* cca, const char*ccb)
{
	auto data = alloc.allocate(ccb - cca);
	return{ data,std::uninitialized_copy(cca,ccb,data) };
}

string::string(const string & sp)
{
	auto newdata = alloc_n_copy(sp.begin(), sp.end());
	begE = newdata.first;
	endE = newdata.second;
}

void string::free()
{
	if (begE)
	{
		for (auto p = endE; p != begE;)
			alloc.destroy(--p);
		alloc.deallocate(begE, endE - begE);
	}
}
string::~string()
{
	free();
}

string &string::operator=(const string &sp)
{
	auto data = alloc_n_copy(sp.begin(), sp.end());
	free();
	begE = data.first;
	endE = data.second;
	return *this;

}

#endif
