#include <iostream>
#include <iomanip>

int main(void)
{
	float a,b,c,d,average;
	std::cin >> a >> b >> c >> d;

	average = ((a*2)+(b*3)+(c*4)+d)/10;

	std::cout << "Media: " << std::fixed << std::setprecision(1) << average << std::endl;
	
	if (average >= 7.0)
	{
		std::cout << "Aluno aprovado." << std::endl;
		return 0;
	}
	else if (average < 5.0)
	{
		std::cout << "Aluno reprovado." << std::endl;
		return 0;
	}
	else if (average >= 5.0 && average <= 6.9)
	{
		std::cout << "Aluno em exame." << std::endl;

		float examFinal,newFinal;
		std::cin >> examFinal;

		std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << examFinal << std::endl;

		newFinal = (average+examFinal)/2;

		if (average >= 5.0)
		{
			std::cout << "Aluno aprovado." << std::endl;
		}
		else if (average <= 4.9)
		{
			std::cout << "Aluno reprovado." << std::endl;
		}

		std::cout << "Media final: "<< std::fixed << std::setprecision(1) << newFinal << std::endl;
	}
	return 0;
}

