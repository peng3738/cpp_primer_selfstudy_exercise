
#include<iostream>
#include<string>
#include<cstring>
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	const char ser1[] = "you are good";
	const char ser2[] = "why";
	//constexpr size_t new_size = strlen(ser1) + strlen(" ") + strlen(ser2)+1;
	constexpr size_t new_size = 12 + 3 + 1 + 1;
	char ser3[new_size];
	strcpy_s(ser3, ser1);
	strcat_s(ser3, " ");
	strcat_s(ser3, ser2);
	for (auto id : ser3)cout << id;
	system("pause");
	return 0;
}

/*
#include <iostream>
#include <cstring>



const char cstr1[] = "Hello";

const char cstr2[] = "world!";



int main()

{

	constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;

	char cstr3[new_size];



	strcpy(cstr3, cstr1);

	strcat(cstr3, " ");

	strcat(cstr3, cstr2);



	std::cout << cstr3 << std::endl;
	return 0;

}
*/