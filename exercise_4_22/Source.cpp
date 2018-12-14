#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int scores=85;
	string finalgrade1 = (scores > 90) ? "high pass" : (scores < 60) ? "fail" : (scores <= 75 && scores >= 60) ? "low pass" : "pass";
	cout << finalgrade1 << endl;
	string finalgrade2;
	if (scores > 90)
		finalgrade2 = "high pass";
	else if (scores > 75)
		finalgrade2 = "pass";
	else if (scores >= 60)
		finalgrade2 = "low pass";
	else
		finalgrade2 = "fail";

	
	cout << finalgrade2 << endl;
	string finalgrade3 = ((scores > 90) ? "high pass" : (scores < 60)) ? "fail" : "pass";
	cout << finalgrade3<<endl;
	system("pause");
	return 0;
}