#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
	double a,b,c;
	std::cin >> a >> b >> c;

	if (a == 0)
	{
		std::cout << "Impossivel calcular" << std::endl;
		return 0;
	}
	
	double z = pow(b,2) - (4*a*c);

	if (z < 0)
	{
		std::cout << "Impossivel calcular" << std::endl;
		return 0;
	}
	
	z = sqrt(z);

	double x1 = 0-b + z;
	double x2 = 0-b - z;

	std::cout << "R1 = " << std::fixed << std::setprecision(5) << x1/(2*a) << std::endl;
	std::cout << "R2 = " << std::fixed << std::setprecision(5) << x2/(2*a) << std::endl;
	return 0;
}

