#include <iostream>
#include <iomanip>

int main(void)
{
	float m[12][12];
	int l;
	char oper;

	std::cin >> l >> oper;

	for (int i = 0; i < 12; i++)
	{
		for (int a = 0; a < 12; a++)
		{
			std::cin >> m[i][a];
		}
	}

	if (oper == 'S')
	{
		float t = 0;

		for (int i = 0; i < 12; i++)
		{
			t += m[l][i];
		}
		std::cout << std::fixed << std::setprecision(1) << t << std::endl;
		return 0;
	}
	else if (oper == 'M')
	{
		float aver = 0;

		for (int i = 0; i < 12; i++)
		{
			aver += m[l][i];
		}
		aver /= 12;
		std::cout << std::fixed << std::setprecision(1) << aver << std::endl;
		return 0;
	}
}

