#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const vector<string> scores = { "F","D","C","B","A","A++" };
	int grade = 85;
	string lettergrade;
	lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
	lettergrade += grade%10 > 7 ? "+" : grade%10 < 3 ? "-" : "";
	cout << lettergrade << endl;
	system("pause");
	return 0;
}