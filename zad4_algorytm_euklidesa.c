#include <stdio.h>

int main()
{
    int n, m, r;
    printf("podaj pierwszą liczbę \n");
    scanf("%d", &n);
    printf("podaj drugą liczbę \n");
    scanf("%d", &m);

    while (m != 0)
    {
        r = n % m;
        n = m;
        m = r;
    }

       printf("Największy wspólny dzielnik to: %d \n", n);
    getchar();
    return 0;
}