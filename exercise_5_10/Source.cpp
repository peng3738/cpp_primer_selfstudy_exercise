#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case'A': 
			++aCnt; 
			break; 
		case'e':
		case'E':
			++eCnt;
			break;
		case'i':
		case'I':
			++iCnt;
			break;
		case'o':
		case'O':
			++oCnt;
			break;
		case'u':
		case'U':
			++uCnt;
			break;
		}
	}
	cout << "Number of volel a:\t" << aCnt << '\n';
	cout << "Number of volel e:\t" << eCnt << '\n';
	cout << "Number of volel i:\t" << iCnt << '\n';
	cout << "Number of volel o:\t" << oCnt << '\n';
	cout << "Number of volel u:\t" << uCnt << '\n';
	system("pause");
	return 0;
}