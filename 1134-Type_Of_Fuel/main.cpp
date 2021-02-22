#include <iostream>

int main(void)
{
	int a, alco=0, gas=0, di=0;
	while (1)
	{
		std::cin >> a;
		if (!(a > 4))
		{
			if (a == 4) break;
			else if (a == 3) di++;
			else if (a == 2) gas++;
			else if (a == 1) alco++;
		}
	}
	std::cout << "MUITO OBRIGADO" << std::endl <<
		"Alcool: " << alco << std::endl <<
		"Gasolina: " << gas << std::endl <<
		"Diesel: " << di << std::endl;
	return 0;
}

