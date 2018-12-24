#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Date 
{
	friend void print(std::ostream &, const Date &);
public:
	Date() = default;
	Date(string sDate);
	void Display();
private:
	unsigned year;
	unsigned month;
	unsigned day;
};

Date::Date(string sDate)
{
	vector<string> MonthList{"January", "February", "March", "April", "May", "June", "July",\
		"August", "September", "October", "November", "December"};
	vector<string> MonthSList{ "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct",\
	"Nov","Dec" };
	string numerical("0123456789");
	string alphaList{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	if (sDate.find_first_of(alphaList) != string::npos)
	{
		string smonth;
		for (string::size_type curr = 0; (curr = sDate.find_first_of(alphaList, curr)) != string::npos; ++curr)
		{
			smonth+=sDate[curr];
		}
		
		for (unsigned it = 0; it < 12; ++it)
			if (smonth == MonthSList[it] || smonth == MonthList[it])
			{
				month = it + 1; break;
			}
		string sub = sDate.substr(sDate.find_first_of(numerical));
		day=stoi(sub);
		sub = sub.substr(sub.find_first_not_of(numerical));
		sub = sub.substr(sub.find_first_of(numerical));
		year = stoi(sub);
	}
	else if(sDate.find_first_of("/") != string::npos)
	{
		day = stoi(sDate);
		string sub = sDate.substr(sDate.find_first_not_of(numerical));
		sub = sub.substr(sub.find_first_of(numerical));
		month = stoi(sub);
		sub = sub.substr(sub.find_first_not_of(numerical));
		sub = sub.substr(sub.find_first_of(numerical));
		year = stoi(sub);
	}
	else
	{
		std::cerr << "No result" << endl;
	}
}
void print(std::ostream& output, const Date& today)
{
	output << today.year<<" " << today.month<<" " << today.day << endl ;
}

int main()
{
	//string a("Abc");
	//cout << a[0] << endl;
	//cout << a + a[0] << endl;
	//cout << a.append("aaa") << endl;
	Date yesterday("Dec 22,2018");
	Date today("December 23,2018");
	Date tomorrow("12/24/2018");
	print(cout, yesterday);
	print(cout, today);
	print(cout, tomorrow);
	system("pause");
	return 0;
}