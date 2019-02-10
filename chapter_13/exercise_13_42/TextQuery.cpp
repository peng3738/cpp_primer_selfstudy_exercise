#include "TestQuery.h";
#include "QueryResult.h";


TextQuery::TextQuery(ifstream &Input)
{
	string line;
	size_t Nline = 0;
	//vector<string> vs;
	//StrBlob SB;
	while (getline(Input, line))
	{
		//cout << line << endl;
		//vs.push_back(line);
		//SB.push_back(line);
		SV.push_back(line);
		//int n = Data->size() - 1;
		//cout << n << endl;
		//cout << line << endl;
		string word;
		istringstream IsInput(line);
		while (IsInput >> word)
		{
			//cout << word << endl;
			auto &lines = Imap[word];
			if (!lines)
				lines.reset(new set<size_t>);
			Imap[word]->insert(Nline);
		}
		++Nline;
	}
	//Data = make_shared<vector<string>>(vs);

}


QueryResult TextQuery::Query(const string & word) const
{
	auto iter = Imap.find(word);
	if (iter == Imap.end())
		cerr << word << "is not in the map" << endl;
	else return QueryResult(word, iter->second, SV);

}