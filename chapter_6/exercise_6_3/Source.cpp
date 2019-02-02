#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int fact(int nt)
{
	int rn = 1;
	for (int id = nt; id > 0; --id)
		rn *= id;
	return rn;
}

int main()
{
	cout << fact(5) << endl;
	int rd;
	cout << "Input an integer:" << endl;
	cin >> rd;
	cout << fact(rd) << endl;

	system("pause");
	return 0;
}
