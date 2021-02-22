#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y, s, t, b;
		std::cin >> x >> y;

		if (x > y)
		{
			t = y;
			b = x;
		}
		else
		{
			t = x;
			b = y;
		}
		
		for (int a = t+1; a < b; a++)
		{
			if(a%2 != 0) s += a;
		}
		std::cout << s << std::endl;
		x=y=s=t=b=0;
	}
	return 0;
}

