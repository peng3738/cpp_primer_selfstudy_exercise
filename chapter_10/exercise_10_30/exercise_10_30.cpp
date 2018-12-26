#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;

int main()
{
	istream_iterator<int> inputData(cin), eof;
	//while(inputData!=eof)

	vector<int> vec(inputData, eof);
	sort(vec.begin(), vec.end(), [](const int &a, const int &b) {return a < b; });
	for (auto ai : vec)
		cout << ai << " ";
	cout << endl;
	ostream_iterator<int> outputData(cout, " ");
	unique_copy(vec.begin(), vec.end(), outputData);
	//copy(vec.begin(), vec.end(), outputData);
	cout << endl;

	system("pause");
	return 0;
}