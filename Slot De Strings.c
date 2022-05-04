#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <unistd.h>

struct vetor_de_strings

{

char str [13];

};


int main ()

{

char *validchars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890()[]{}.,;/|@#$%&*+-";

char novastr [13];

//pode ser útil.
//char zeratudo [1] = {'\0'};

int i, j, b, c,  sair = 0;

struct vetor_de_strings string [5];

int recebe;

FILE *f = fopen ("pssw.txt", "w");

if (f == NULL)

{

printf ("Erro na criação do arquivo!");

exit (1);

}

srand ((unsigned) time(NULL));

printf ("Esse programa possui um vetor de strings com 5 slots para ser preenchido (aleatoriamente)\n\n");

    for (c = 0; c < 5; c++)

    {

    printf ("[%d] \n", c);

    }

    printf ("\n");

    do

    {

    printf ("Situacao atual do vetor de cinco slots\n\n");

        for (c = 0; c < 5; c++)

        {

        printf ("%d - [%s] \n", c, string[c].str);

        }

    printf ("\n\nDigite o número EXATO que corresponde ao slot que deseja preencher com uma string aleatoria: ");

    scanf ("%d", &i);

        for (j = 0; j < 5; j++)

        {

            if (j == i)

            {

            printf ("\n\nSlot encontrado <string [%d]>. A funcao sera realizada imediatamente.\n", j);

            //pode ser útil
            /*if (strlen (string[j].str) > 1)

            {

            strcpy (string[j].str, zeratudo);

            }*/

                for (b = 0; b < 12; b++)

                {

                novastr[b] = validchars[ rand() % strlen(validchars) ];

                }

            strcpy (string[j].str, novastr);

            printf ("\n\n string.str[%d] recebeu %s\n\n", j, string[j].str);

            }

    }

    printf ("\tDigite 1 para gerar outra string. Outro para sair: ");

    scanf ("%d", &sair);

    } while (sair == 1);

    printf ("\n\nArray final de strings: \n\n");

    for (c=0;c<5;c++)

    {

     printf ("%d - [%s]\n", c, string[c].str);

    }

    for (c = 0; c<5; c++)

    {

    recebe = fputs (string[c].str, f);

    fputs ("\n", f);

    if (recebe == EOF)

    {

    printf ("\n\nERRO NA GRAVACAO!\n\n");

    }

    }

    fclose (f);

	return EXIT_SUCCESS;
}


