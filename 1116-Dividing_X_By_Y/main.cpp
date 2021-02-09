#include <iostream>
#include <iomanip>

float x, y, n;

int main(void)
{
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;

		if (y == 0)
		{
			std::cout << "divisao impossivel" << std::endl;
		}
		else
		{
			float a = x/y;
			std::cout << std::fixed << std::setprecision(1) << a << std::endl;
		}
	}
	return 0;
}

