#include <iostream>

int main(void)
{
	int a,b,c,g = 0;
	std::cin >> a >> b >> c;

	if (a > g) g = a;
	if (b > g) g = b;
	if (c > g) g = c;

	std::cout << g << " eh o maior" << std::endl;
	return 0;
}

