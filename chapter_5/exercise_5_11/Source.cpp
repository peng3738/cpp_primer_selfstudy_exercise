#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,bCnt=0,tCnt=0,nCnt=0;
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
			++aCnt;
			break;
		case'e':
			++eCnt;
			break;
		case'i':
			++iCnt;
			break;
		case'o':
			++oCnt;
			break;
		case'u':
			++uCnt;
			break;
		case' ':
			++bCnt;
			break;
		case'\t':
			++tCnt;
			break;
		case'\n':
			++nCnt;
			break;
		}
	}
	cout << "Number of volel a:\t" << aCnt << '\n';
	cout << "Number of volel e:\t" << eCnt << '\n';
	cout << "Number of volel i:\t" << iCnt << '\n';
	cout << "Number of volel o:\t" << oCnt << '\n';
	cout << "Number of volel u:\t" << uCnt << '\n';
	cout << "Number of volel blank spaces:\t" << bCnt << '\n';
	cout << "Number of volel tabs:\t" << tCnt << '\n';
	cout << "Number of volel newlines:\t" << nCnt << '\n';
	system("pause");
	return 0;
}
