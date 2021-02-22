#include <iostream>

int main(void)
{
	int m, n, s;
	
	while (1)
	{

		std::cin >> m >> n;

		if (m <= 0 || n <= 0) return 0;

		if (m < n)
		{
			std::cout << m << " ";
			s += m;

			for (int i = m+1; i <= n; i++)
			{
				std::cout << i << " ";
				s += i;
			}
		}
		else
		{
			std::cout << n << " ";
			s += n;

			for (int i = n+1; i <= m; i++)
			{
				std::cout << i << " ";
				s += i;
			}
		}
		std::cout << "Sum=" << s << std::endl;
		m=n=s=0;
	}
	return 0;	
}

