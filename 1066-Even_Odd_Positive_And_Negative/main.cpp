#include <iostream>

int main(void)
{
    int i[5], even, odd, positive, neg;
    even=odd=positive=neg = 0;
    std::cin >> i[0] >> i[1] >> i[2] >> i[3] >> i[4];

    for (int w = 0; w < 5; w++)
    {
        if (i[w]%2 == 0) even++;
        else odd++;

        if (i[w] > 0) positive++;
        else if (i[w] != 0) neg++;
    }

    std::cout << even << " valor(es) par(es)" << std::endl;
    std::cout << odd << " valor(es) impar(es)" << std::endl;
    std::cout << positive << " valor(es) positivo(s)" << std::endl;
    std::cout << neg << " valor(es) negativo(s)" << std::endl;
    return 0;
}
