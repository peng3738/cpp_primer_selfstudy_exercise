#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	vector<int> vec1;
	int unit_value;
	while (cin >> unit_value)
	{
		vec1.push_back(unit_value);
	}
	for (decltype(vec1.size()) ix = 0; ix != vec1.size(); ++ix)
		cout << vec1[ix] << endl;


	system("pause");
	return 0;
}