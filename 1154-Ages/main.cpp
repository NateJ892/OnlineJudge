#include <iostream>
#include <vector>
#include <iomanip>

int main(void)
{
	float a = 0,temp = 0;
	int b = 0;

	while (1)
	{
		std::cin >> temp;
		if (temp < 0) break;

		a += temp;
		b++;
	}
	
	std::cout << std::fixed << std::setprecision(2) << a/b << std::endl;
	return 0;
}

