#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

string func(string &name, string const & prefix, string const & suffix)
{
	//auto currB = name.begin(), currE = name.end();
	//name.insert(name.begin(), prefix.begin(), prefix.end());
	//name.insert(name.end(), suffix.begin(), suffix.end());
	name.insert(0, prefix);
	name.insert(name.size(), suffix);
	//name.append(suffix);
	return name;
}

int main()
{
	string name = "Great";
	cout << func(name, "Mr.", " Jr.") << endl;
	system("pause");
	return 0;
}