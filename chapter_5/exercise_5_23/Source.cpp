#include<iostream>
#include<stdexcept>
using std::runtime_error;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int val1, val2;
	//cin >> val1 >> val2;
	/*
	if (val2 == 0)
		throw runtime_error("Denominator can not be zero;");
	cout << val1 / val2 << endl;
	*/
	
	while (cin >> val1 >> val2)
	{
		try {
			if (val2 == 0)
				throw runtime_error("divisor is 0");
			cout<<val1 / val2<<endl;
		}
		catch (runtime_error err)
		{
			cout << err.what()
				<< "\nTry Again?Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	
	}
	
	system("pause");
	return 0;
}
