#include<iostream>
using std::cout;
using std::cin;
using std::endl;

size_t count_calls()
{
	static size_t ctr = 0;
	return ctr++;
}

int main()
{
	size_t id;
	while (cin >> id)cout << count_calls() << endl;
	system("pause");
	return 0;
}