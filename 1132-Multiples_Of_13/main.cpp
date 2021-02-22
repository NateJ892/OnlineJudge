#include <iostream>

int main(void)
{
	int x,y,s=0,a,b;
	std::cin >> x >> y;

	if (x > y)
	{
		a = y;
		b = x;
	}
	else
	{
		a = x;
		b = y;
	}

	for (int i = a; i <= b; i++)
	{
		if ((i%13) != 0) s += i;
	}

	std::cout << s << std::endl;
	return 0;
}

