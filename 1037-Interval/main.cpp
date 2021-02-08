#include <iostream>

int main(void)
{
	double x;
	std::cin >> x;

	if (x < 0 || x > 100)
	{
		std::cout << "Fora de intervalo" << std::endl;
	}
	else if (x >= 0.0 && x <= 25.0)
	{
		std::cout << "Intervalo [0,25]" << std::endl;
	}
	else if (x > 25.0 && x <= 50.0)
	{
		std::cout << "Intervalo (25,50]" << std::endl;
	}
	else if (x > 50.0 && x <= 75.0)
	{
		std::cout << "Intervalo (50,75]" << std::endl;
	}
	else if (x > 75.0 && x <= 100.0)
	{
		std::cout << "Intervalo (75,100]" << std::endl;
	}
	return 0;
}

