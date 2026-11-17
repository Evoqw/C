#include <stdio.h>
#include <stdlib.h>
#include <string.h>



  double silniaR(int n)
    {
        if (n == 0 || n == 1)
        return 1;
        else
        return n * silniaR(n - 1);
    }
    double silniaI(int n)
    {
        double wynik = 1;
        for (int i = 2; i <= n; i++)
        {
            wynik *= i;
        }
        return wynik;
    }
    /*
    int main()
  {
        int n;
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &n);
        printf("Silnia rekurencyjnie: %.0f\n", silniaR(n));
        printf("Silnia iteracyjnie: %.0f\n", silniaI(n));
        return 0;

    }
   */
    int main(int narg, char *Arg[])
    {
      if (narg != 3)
      {
        printf("Niepoprawna liczba argumentow\n");
        return 1;
      }

      int n = atoi(Arg[2]);

      if (n < 0)
      {
        printf("Niepoprawna liczba calkowita\n");
        return 1;
      }

      if (strcmp(Arg[1], "r") == 0)

        {
            printf("Silnia rekurencyjnie: %.0f\n", silniaR(n));
        }
        else if (strcmp(Arg[1], "i") == 0)
        {
            printf("Silnia iteracyjnie: %.0f\n", silniaI(n));
        }
        else
        {
            printf("Niepoprawny argument\n");
            return 1;
        }

        return 0;
      
    }


