#include<iostream>
#include<map>
#include<string>
#include<set>

using std::cout;
using std::endl;
using std::multimap;
using std::string;
using std::multiset;
using std::map;

int main()
{
	multimap<string, string> authors = { {"Joyce","James"},{"Austen","Jane"},\
	{"Dickens", "Charles"}, { "Alain de Botton","King" }, {"Alain de Botton","Power"},\
	{"Alain de Botton","Card house"} };
	//part 1;
	cout << "*******************" << endl;
	string search_item("Alain de Botton");
	auto entries = authors.count(search_item);
	auto iter = authors.find(search_item);
	while (entries)
	{
		cout << iter->second << endl;
		++iter;
		--entries;
	}
   //part 2;
	cout << "*******************" << endl;
	for (auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item); \
		beg != end; ++beg)
		cout << beg->second << endl;
	//part 3
	cout << "*******************" << endl;
	for (auto pos = authors.equal_range(search_item); pos.first != pos.second; ++pos.first)
		cout << pos.first->second << endl;
	//
	cout << "*******************" << endl;
	auto de=authors.find(search_item);
	if (de != authors.end())
	{
		cout << "Erase: " << de->first<<" --- " << de->second << endl;
		authors.erase(de);
	}
	for (auto ai : authors)
		cout << ai.first << "-----" << ai.second << endl;
	cout << "*******************" << endl;
	auto dn = authors.find("Wla");
	if (dn != authors.end())
		authors.erase(dn);
	for (auto ai : authors)
		cout << ai.first << "-----" << ai.second << endl;
	cout << "*******************" << endl;
	map<string, multiset<string>> ordered_authors;
	for (auto ai : authors)
	{
		ordered_authors[ai.first].insert(ai.second);
	}
	for (auto ai : ordered_authors)
	{
		cout << ai.first << "-----";
		for (auto bi:ai.second) 
			cout<< bi << "## ";
		cout << endl;
	}


	system("pause");
	return 0;
}

