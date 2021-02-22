#include <iostream>

int main(void)
{
	int x, y;
	
	while (1)
	{
		std::cin >> x >> y;
		if (x == y) return 0;
		else if (x < y) std::cout << "Crescente" << std::endl;
		else std::cout << "Decrescente" << std::endl;
	}
}

