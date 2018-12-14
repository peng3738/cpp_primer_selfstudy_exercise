#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int fCnt = 0;
	char chb=' ',che,ch;

	while (cin >> ch)
	{
		che = ch;
		switch (chb)
		{
		case 'f':
			switch (che)
			{
			case'f':
			case'l':
			case'i':
				++fCnt;
				break;
			}
		}
		chb = ch;
	}
	cout << "The number of ff,fl and fi:" << fCnt << endl;
	system("pause");
	return 0;
}