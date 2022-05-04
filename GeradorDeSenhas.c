#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()

{

char charvalido [] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890#%(){}[]&$-~^><";

int a, b, c;

char newstring [13];

printf ("Esse programa gera cinco strings aleatórias com 12 caracteres.\nAs strings serão salvas em um arquivo nesse diretório, com o nome pass.txt\n");
printf ("A utilidade principal dessas strings é gerar senhas fortes. Nada mais a declarar.\n");

printf ("\nPara sair, digite 1. Para prosseguir digite qualquer outro número: ");
scanf ("%d", &b);

printf ("\n");


    srand (time (NULL));

    if (b == 1)

    {

    printf ("\nExit.");

    exit (1);

    }

    FILE *f = fopen ("pass.txt", "w");

    for (b=0; b<5; b++)

    {

        for (c=0; c<12; c++)

        {

        a = (rand () % strlen (charvalido));

        newstring[c] = charvalido[a];

        }

    printf ("%s", newstring);

    fputs (newstring, f);

    }


printf ("\n\nFIM DO PROGRAMA\n\n");

fclose (f);

return EXIT_SUCCESS;

}
