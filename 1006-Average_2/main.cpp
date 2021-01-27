#include <iostream>
#include <iomanip>

int main(void)
{
	float a,b,c,average;
	std::cin >> a >> b >> c;

	average = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);
	std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << average << std::endl;
	return 0;
}

