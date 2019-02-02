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
		if (ch == 'a')
			++aCnt;
		else if (ch == 'e')
			++eCnt;
		else if (ch == 'i')
			++iCnt;
		else if (ch == 'o')
			++oCnt;
		else if (ch == 'u')
			++uCnt;
	}
	cout << "Number of vowel a:\t" << aCnt << '\n';
	cout<< "Number of vowel e:\t" << eCnt << '\n';
	cout << "Number of vowel i:\t" << iCnt << '\n';
	cout << "Number of vowel o:\t" << oCnt << '\n';
	cout << "Number of vowel u:\t" << uCnt << '\n';

	system("pause");
	return 0;
}
