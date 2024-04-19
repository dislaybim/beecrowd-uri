#include <stdio.h>

int main ()
{

  int quantidade, x, i, k, soma = 0;

  scanf("%d", &quantidade);

  for (i = 0; i < quantidade; i++)
  {

    scanf("%d", &x);

    for (k = 1; k < x; k++)
    {

      if (x % k == 0)
      {

        soma += k;

      }
    }

    if ( soma == x)
    {

      printf("%d eh perfeito\n", x);

    }
    else
    {

      printf("%d nao eh perfeito\n", x);

    }

    soma = 0;

  }
}
