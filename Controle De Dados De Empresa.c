  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct funcionarios

    {

        char nome [30];
        char inscricao [30];
        char cargo [30];
        char codigo [30];
        float entrada;
        float saida;
        float horas;

    };

int main ()

{

 int quantidade;

 setbuf (stdin, NULL);
 printf ("Digite a quantidade de funcionários: ");
 scanf ("%d", &quantidade);

 setbuf (stdin, NULL);

 struct funcionarios LTDA [quantidade];

 int cont=0, dia = 1, semana = 5;

  for (cont=0;cont<quantidade;cont++)

        LTDA[cont].horas = 0;

    do

        {

            for (cont=0;cont<quantidade;cont++)


            {


            printf ("Dia %d Registro de ponto: \n", dia);

            printf ("Nome: ");
            fgets  (LTDA [cont].nome, 30, stdin);

            printf ("Inscrição: ");
            fgets  (LTDA [cont].inscricao, 30, stdin);

            printf ("Cargo: ");
            fgets  (LTDA [cont].cargo, 30, stdin);

            printf ("Código: ");
            fgets  (LTDA [cont].codigo, 30, stdin);

            printf ("Usar Ponto para separar - Horário de Entrada: ");
            scanf  ("%f", & LTDA[cont].entrada);


            printf ("Usar Ponto para separar - Horário de Saída: ");
            scanf  ("%f", & LTDA[cont].saida);

            setbuf (stdin, NULL);

            if (LTDA[cont].saida - LTDA[cont].entrada < 0)

                LTDA[cont].horas = LTDA[cont].horas + ((LTDA[cont].saida - LTDA[cont].entrada) * - 1);

            else

                LTDA[cont].horas = LTDA[cont].horas + (LTDA[cont].saida - LTDA[cont].entrada);

                }


            dia++;

        } while (dia <= semana);

         printf ("****____________________________________________________________________________****\n");

            for (cont=0;cont<quantidade;cont++)

                {


                fputs  (LTDA [cont].nome, stdout);

                fputs  (LTDA [cont].inscricao, stdout);

                fputs  (LTDA [cont].cargo, stdout);

                fputs  (LTDA [cont].codigo, stdout);

                printf ("%f Horas, %f minutos \n", LTDA[cont].horas, LTDA[cont].horas / 60);


                }


return EXIT_SUCCESS;


} 
