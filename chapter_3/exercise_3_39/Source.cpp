#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	string ser1="you are good", ser2="why";
	if (ser1 == ser2)cout << "same"<<endl;
	else cout << "different" << endl;

	char ser3[] = { 'y','o','u',' ','a','r','e',' ','g','o','o','d','\0'};
	char ser4[] = { 'w','h','y','\0' };
	if (!strcmp(ser3, ser4))cout << "same" << endl;
	else cout << "different" << endl;


	system("pause");
	return 0;

}
