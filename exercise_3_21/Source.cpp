#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
void disp(vector<int> ui)
{
	for (auto id = ui.cbegin(); id != ui.cend(); ++id)
		cout << *id << endl;
}
void disp_string(vector<string> us)
{
	for (auto id = us.begin(); id != us.end()&&!id->empty(); id++)
		cout << *id;
}
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10,42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10,"hi" };
    cout << v1.size() << endl;
    disp(v1);
    cout << v2.size() << endl;
    disp(v2);
    cout << v3.size() << endl;
    disp(v3);
    cout << v4.size() << endl;
    disp(v4);
    cout << v5.size() << endl;
    disp(v5);
    cout << v6.size() << endl;
    disp_string(v6);
    cout << v7.size() << endl;
    disp_string(v7);

	system("pause");
	return 0;

}