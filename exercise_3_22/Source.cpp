#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::string;
using std::vector;
using std::cin;
using std::endl;

int main()
{

	vector<string> text;
	text.push_back("This is the first paragraph.");
	text.push_back("This is still part of the first paragraph.");
	text.push_back("");
	text.push_back("This is the second paragraph.");
	text.push_back("");
	text.push_back("This is the third paragraph.");
	for (auto astring : text) cout << astring<<endl;
	for (auto astring = text.begin(); astring != text.end() && !astring->empty(); ++astring)
		for (auto aelement = astring->begin(); aelement != astring->end(); ++aelement)
			(*aelement) = toupper(*aelement);

	for (auto textid = text.begin(); textid != text.end(); ++textid)
		cout << *textid<<endl;

	system("pause");
	return 0;
}