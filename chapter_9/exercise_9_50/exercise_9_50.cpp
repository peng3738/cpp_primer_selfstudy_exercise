#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int func(vector<string>s)
{
	int sum(0);
	for (auto ai : s)
	{
		//cout << stoi(ai) << " ";
		sum += stoi(ai);
	}
	return sum;
}


int main()
{
	vector<string>s{ "1","12","8","45" };
	cout << func(s) << endl;

	system("pause");
	return 0;
}