#ifndef PERSON_H
#define PERSON_H
#include<string>
struct Person
{
	std::string name;
	std::string address;
	std::string get_name() const { return name; }
	std::string get_add() const{ return address; }
};
#endif
