#include <iostream>
#include <iomanip>

int main(void)
{
	int n;
	double a, b, c;
	
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b >> c;

		float average = ((a*2.0)+(b*3.0)+(c*5.0))/(2.0+3.0+5.0);
		std::cout << std::fixed << std::setprecision(1) << average << std::endl;
		a=b=c=0;
	}
	return 0;
}

