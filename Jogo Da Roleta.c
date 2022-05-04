#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rodarroleta()

{

printf ("\nPara girar a roleta, pressione ENTER\n");

while (getchar () != '\n');

}

int main()

{

srand (time(NULL));

int numero=1;

rodarroleta();

do

{

if (numero%2==0)

{

    printf ("\nVocê acertou um número par, tem direito a uma nova jogada... \n");

    rodarroleta();

}

numero = 1 + rand () % 35;

if (numero==7)
    printf ("\nVOCÊ GANHOU O MAIOR PRÊMIO!, acertou o número %d\n", numero);

else
    printf ("Você tirou o número %d\n", numero);

}while (numero%2==0);

printf ("\n\nFIM\n\n");

return 0;

}
