#pragma once
#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
struct Person
{
	std::string name;
	std::string address;
	std::string get_name() const { return name; }
	std::string get_add() const { return address; }
};

std::istream & read(std::istream &is, Person &people)
{
	is >> people.name >> people.address;
	return is;
}
std::ostream &print(std::ostream &os, const Person &people)
{
	os << people.name << " " << people.address <<std::endl;
	return os;
}
#endif

