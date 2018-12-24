#include<iostream>
#include<string>
//#include<cstddef>
#include <iterator>

using std::endl;
using std::cout;
using std::string;

string func(string &sw, string const & oldVal, string const & newVal)
{
	//if (oldVal.empty())
	//	return;
	//int Nov = oldVal.size(),Nev=newVal.size();
	for (size_t np =0; np != sw.size() - oldVal.size();)
	{
		if (sw[np] == oldVal[0] && sw.substr(np, oldVal.size()) == oldVal)
		{
			sw.replace(np, oldVal.size(), newVal);
			np = np + newVal.size();
		}
		else ++np;
	}
	
	return sw;

}


int main()
{
	string sw = "You are great. You go thro this bridge, even tho it is dangeous.";
	string  oldVal = "tho";
	string newVal = "though";
	cout << func(sw, oldVal, newVal) << endl;
	oldVal = "thro"; newVal = "through";
	cout << func(sw, oldVal, newVal) << endl;
	//**********************

	//**********************

	system("pause");
	return 0;
}