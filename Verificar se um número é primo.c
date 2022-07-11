#include <stdio.h>
#include <stdlib.h>

int main()

{

long int contador=2, checkin;

printf ("Digite um número para verificar se é primo: ");
scanf ("%ld", &checkin);

while (checkin%contador!=0)

    {

        contador++;

    }

if (checkin==contador)

    printf ("%ld É um número primo.", checkin);

else

    printf ("%ld NÃO É um número primo.", checkin);

return EXIT_SUCCESS;

}
