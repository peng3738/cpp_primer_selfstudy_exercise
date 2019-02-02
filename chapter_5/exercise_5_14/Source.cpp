#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string sva;
	vector<string> vstr;
	vector<int> vtimes;
	while (cin >> sva)
	{
		if (vstr.begin() == vstr.end())
		{
			vstr.push_back(sva);
			vtimes.push_back(1);
		}
		else
		{
			bool id = 0;
			for (int ip = 0; ip != vstr.size(); ++ip)
				if (vstr[ip] == sva)
				{
					++vtimes[ip];
					id = 1;
				}
			if (!id)
			{
				vstr.push_back(sva);
				vtimes.push_back(1);
			}
		}
	}
	int imax = 0,nmax=0;
	string smax;
	for (int ip = 1; ip != vtimes.size(); ++ip)
		if (vtimes[imax] < vtimes[ip])
			imax = ip;
	smax = vstr[imax];

	if (vtimes[imax] == 1)
		cout << "No word was repeated";
	else
		cout << smax << " occured " << vtimes[imax] << " times" << endl;

	for (auto q : vstr)cout << q << " ";
	for (auto q : vtimes)cout << q << " ";

	/*
	for (auto ip : vstr)
		if (ip == smax)
			cout << ip << " show " << vtimes[imax] << endl;
			*/


		
	system("pause");
	return 0;
}
