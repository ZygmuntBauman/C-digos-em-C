#include <stdio.h>
#include <stdlib.h>

 int multiplo (int num1, int num2)

{

    int multi;

    if (num1%num2 == 0)

    multi = 1;

    else

    multi = 0;

    return multi;

    }

int main ()

{

int multiplo1, multiplo2, resultado;

printf ("Digite o valor do primeiro número múltiplo ou não do segundo:");
scanf ("%d", &multiplo1);
printf ("Digite o segundo número:");
scanf ("%d", &multiplo2);

resultado = multiplo (multiplo1,multiplo2);

if (resultado == 1)

    printf ("%d é múltiplo de %d", multiplo1, multiplo2);

else

    printf ("%d não é múltiplo de %d", multiplo1, multiplo2);


return 0;

}
