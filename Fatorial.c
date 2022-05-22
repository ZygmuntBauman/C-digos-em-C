#include <stdio.h>
#include <stdlib.h>

int main()

{

long int contador,fatorial,resultado=0;


    printf("Digite um número para calcular o seu !fatorial: ");
    scanf ("%ld", &fatorial);

    for (contador=1; contador<fatorial; contador++)

        {

        if (contador==1)

            resultado = fatorial * contador;

        else

            resultado *= contador;

        }

    printf ("!%ld = %ld", fatorial, resultado);

return 0;

}

