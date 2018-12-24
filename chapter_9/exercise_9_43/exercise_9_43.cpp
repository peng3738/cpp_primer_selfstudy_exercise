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
	for (auto curr = sw.begin(); curr != sw.end() - oldVal.size(); )
	{
		if (oldVal == string{ curr,curr + oldVal.size()})
		{
			curr = sw.erase(curr,curr+oldVal.size());
			curr = sw.insert(curr, newVal.begin(),newVal.end());
			curr += newVal.size();
		}
		else
			++curr;
		
	}
	return sw;

}


int main()
{
	/*
	string s("Hello World");
	cout << s << endl;
	string s2 = s.substr(0, 5);
	cout << s2 << endl;
	string s3 = s.substr(6);
	cout << s3 << endl;
	string s4 = s.substr(6, 11);
	cout << s4 << endl;
	//string s5 = s.substr(12);
	//cout << s5 << endl;
	cout << "******************* "<< endl;
	s.insert(s.size(), 5, '!');
	cout << s << endl;
	s.erase(s.size() - 5, 5);
	cout << s << endl;
	const char *cp = "Stately,plump Buck";
	s.assign(cp, 7);
	cout << s << endl;
	s.insert(s.size(), cp + 7);
	cout << s << endl;
	cout << "*********************" << endl;
	s="C++ Primer", s2 = s;
	s.insert(s.size(), " 4th Ed.");
	cout << s << endl;
	s2.append(" 4th Ed.");
	cout << s2 << endl;
	s.erase(11, 3);
	cout << s << endl;
	s.insert(11, "5th");
	cout << s << endl;
	s2.replace(11, 3, "5th");
	cout << s2 << endl;
	cout << "********************" << endl;
	*/
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