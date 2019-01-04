#include "QueryResult.h";
ostream &print(ostream &output, const QueryResult &QR)
{
	output << QR.found << " occurs " << QR.LineNum->size() << " " << endl;
	
	for (auto num : *QR.LineNum)
	{
		StrBlobPtr QRP(QR.Text, num);
		output << "\t(line" << num + 1 << ")"<< QRP.deref() << endl;
	}
	return output;
}