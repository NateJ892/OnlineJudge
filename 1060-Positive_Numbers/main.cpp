#include <iostream>

float x;
int a;

int main(void)
{
	for (int i = 0; i < 6; i++)
	{
		std::cin >> x;

		if (x > 0)
		{
			a++;
		}
	}
	std::cout << a << " valores positivos" << std::endl;
	return 0;
}

