#include"QueryResult.h"
std::ostream &print(std::ostream &output, const QueryResult &QR)
{
	output << QR.sought << " occurs " << QR.lines->size() << " " << std::endl;
	for (auto num : *QR.lines)
		output << "\t(line" << num + 1 << ")" << *(QR.file->begin() + num) << std::endl;
	return output;
}