#include<iostream>
#include<vector>
using std::vector;
using std::endl;
using std::cout;
using std::cin;
bool compare(vector<int> va1, vector<int> va2)
{
	bool eq = 1;
	for (int i = 0; i < va1.size(); ++i)
	{
		if (va1[i] != va2[i]) { return 0; }
	}
	return 1;
}

int main()
{
	vector<int> val1 = { 0,1,1,2 }, val2 = { 0,1,1,2,3,5,8 };
	int n1 = val1.size();
	int n2 = val2.size();

	if (n1 < n2)
		cout << compare(val1, val2)<<endl;
	else
		cout << compare(val2, val1)<<endl;



	system("pause");
	return 0;
}