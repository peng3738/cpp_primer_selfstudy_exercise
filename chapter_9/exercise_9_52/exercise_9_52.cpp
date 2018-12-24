#include<iostream>
#include<stack>
#include<string>

using std::cout;
using std::endl;
using std::stack;
using std::string;

string func(string s)
{
	stack<char> CStack;
	bool seen;
	string Letter;
	for (auto ai : s)
	{
		if (ai == '(') { seen = 1; continue; }
		else if (ai == ')')seen = 0;
		if (seen)CStack.push(ai);
	}
	while (!CStack.empty())
	{
		char aa = CStack.top();
		Letter += aa;
		CStack.pop();
	}
	return Letter;
}
int main()
{
	stack<int>intStack;
	for (size_t ix = 0; ix != 10; ++ix)
		intStack.push(ix);
	
	while (!intStack.empty())
	{
		int value = intStack.top();
		cout << value << " ";
		intStack.pop();
	}

	system("pause");
	return 0;
}