#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
	double a,b,c;
	std::cin >> a >> b >> c;

	double tri,circ,trap,sq,rect;

	tri = (a*c)/2.0;
	circ = 3.14159*std::pow(c,2.0);
	trap = ((a+b)/2.0)*c;
	sq = b*b;
	rect = a*b;

	std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << tri << std::endl;
	std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << circ << std::endl;
	std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << trap << std::endl;
	std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << sq << std::endl;
	std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << rect << std::endl;

	return 0;
}

