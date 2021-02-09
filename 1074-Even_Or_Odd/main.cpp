#include <iostream>

int x;

int main(void)
{
	std::cin >> x;

	for (int i = 0; i < x; i++)
	{
		int temp;
		std::cin >> temp;

		if (temp == 0) 
		{
			std::cout << "NULL" << std::endl;
		}
		if (temp != 0)
		{
			if ((temp%2) == 0)
			{
				std::cout << "EVEN ";
			}
			else std::cout << "ODD ";

			if (temp > 0)
			{
				std::cout << "POSITIVE" << std::endl;
			}
			else std::cout << "NEGATIVE" << std::endl;
		}
	}
	return 0;
}

