#include<iostream>
int main()
{
	std::cout << "Input two integers:\n" << std::endl;
	int c1 = 0, c2 = 0;
	int c_beg = 0, c_end = 0;
	std::cin >> c1 >> c2;
	if (c1 > c2)
	{
		c_beg = c2; c_end = c1;
	}
	else
	{ 
		c_beg = c1;
		c_end = c2;
	}
	for (int i = c_beg; i <= c_end; ++i)
	{
		std::cout << i<<" ";
	}
	system("pause");
	return 0;
}
