#include"TextQuery.h"
TextQuery::TextQuery(std::ifstream &Input)
{
	std::string line;
	int Nline = 0;
	std::vector<std::string> vs;
	while (getline(Input, line))
	{
		//cout << line << endl;
		vs.push_back(line);
		//int n = Data->size() - 1;
		//cout << n << endl;
		//cout << line << endl;
		std::string word;
		std::istringstream IsInput(line);
		while (IsInput >> word)
		{
			//cout << word << endl;
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new std::set<line_no>);
			wm[word]->insert(Nline);
		}
		++Nline;
	}
	file = std::make_shared<std::vector<std::string>>(vs);

}


QueryResult TextQuery::query(const std::string & word) const
{
	auto iter = wm.find(word);
	if (iter == wm.end())
		std::cerr << word << "is not in the map" << std::endl;
	else return QueryResult(word, iter->second, file);

}
