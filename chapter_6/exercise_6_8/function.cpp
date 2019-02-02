#include"Chapter6.h"

#include<iostream>
using std::endl;
using std::cout;
using std::cin;
unsigned absd(int id)
{ 
	/*
	int totalP=1;
	for (int i = id; id > 0; --id)
		totalP *= i;
	return totalP;
	*/
	return (id > 0 ? id : -id);
}
