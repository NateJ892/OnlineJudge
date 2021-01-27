#include <iostream>

int main(void)
{
	int a;
	std::cin >> a;

	std::cout << a/365 << " ano(s)" << std::endl;
	std::cout << (a%365)/30 << " mes(es)" << std::endl;
	std::cout << (a%365%30) << " dia(s)" << std::endl;
	return 0;
}

