#include <cstdio>

int main(void)
{
	int d,m,y;

    scanf("%d/%d/%d", &d, &m, &y);
    printf("%02i/%02i/%02i\n", m, d, y);
    printf("%02i/%02i/%02i\n", y, m, d);
    printf("%02i-%02i-%02i\n", d, m, y);
    return 0;
}
