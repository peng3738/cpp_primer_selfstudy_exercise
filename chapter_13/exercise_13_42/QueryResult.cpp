#include "QueryResult.h";
ostream &print(ostream &output, const QueryResult &QR)
{
	output << QR.found << " occurs " << QR.LineNum->size() << " " << endl;
	for (auto num : *QR.LineNum)
		output << "\t(line" << num + 1 << ")" << *(QR.Text.begin() + num) << endl;
	return output;
}