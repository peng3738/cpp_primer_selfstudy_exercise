#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::endl;
using std::cout;
using std::cin;
int main()
{
	vector<int> val1(10, 42);
	vector<int> val2;
	for (int i = 0; i < 10; ++i)
		val2.push_back(42);
	vector <int> val3;
    
	system("pause");
	return 0;
}
