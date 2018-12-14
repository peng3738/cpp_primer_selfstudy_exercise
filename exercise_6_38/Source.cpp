#include<iostream>
//#include<>
using std::cout;
using std::endl;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) &arrPtr(int i)
{
	return((i % 2) ? odd : even);
}

int main()
{
	//decltype(odd) id=arrPtr(4);
	//for (auto ia : id)cout << ia << " ";
	cout << arrPtr(4) << endl;
	for (auto ia : arrPtr(4))cout << ia << " " ;
	cout << endl;
	cout << arrPtr(3) << endl;
	for (auto ia : arrPtr(3))cout << ia << " ";
	cout << endl;
	system("pause");
	return 0;
}