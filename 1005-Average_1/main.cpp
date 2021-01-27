#include <iostream>
#include <cmath>

double x, i, a;

int main(void)
{
	std::cin >> x >> i;
	a = ((x*3.5)+(i*7.5))/(3.5+7.5);
	std::cout.precision(6);
	if (std::fmod(a,1) == 0)
	{
		std::cout << "MEDIA = " << a << ".00000" << std::endl;
	}
	else std::cout << "MEDIA = " << a << std::endl;
	return 0;
}

