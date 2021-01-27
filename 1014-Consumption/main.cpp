#include <iostream>
#include <iomanip>

int main(void)
{
	int x;
	float y, a;
	std::cin >> x >> y;

	a = x/y;

	std::cout << std::fixed << std::setprecision(3) << a << " km/l" << std::endl;
	return 0;
}

