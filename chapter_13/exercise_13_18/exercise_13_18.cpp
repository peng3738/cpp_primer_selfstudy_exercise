#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

class Employee
{
public:
	Employee() { ID = Increment++; };
	Employee(const string &s) :name(s) { ID = Increment++; };
	void print() { cout << name<<" "<<ID << endl; }
private:
	string name;
    size_t ID;
	static size_t Increment;
};
size_t Employee::Increment = 0;

int main()
{
	Employee You;
	You.print();
	system("pause");
	return 0;
}