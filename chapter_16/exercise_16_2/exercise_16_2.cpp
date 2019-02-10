#include<iostream>

using std::cout;
using std::endl;

template<typename T>
int compare(const T &v1, const T &v2)
{
	if (v1 < v2) return -1;
	if (v2 < v1)return 1;
	return 0;
}

template<unsigned N,unsigned M>
int compare(const char(&p1)[N], const char(&p2)[M])
{
	return strcmp(p1, p2);
}

int main()
{
	cout << compare(1, 0) << endl;
	cout << compare("hi", "mom")<<endl;
	system("pause");
	return 0;
}