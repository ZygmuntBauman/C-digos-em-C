#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void linha (void){

printf ("\n");

}


int main()

{

srand(time(NULL));

const float tanque = 26020;
const float litroskm = 3.6;
const float Fortaleza = 2370.08;
const float Manaus = 2690.41;
const float Porto_Alegre = 1130;
const float tem_no_tanque = 0;
int escolha;
float total = 0;

while (escolha < 1 || escolha > 3)

    {

        printf("* Companhia Aérea *\nDigite 1 para vôo de São Paulo para Fortaleza\nDigite 2 para vôo de São Paulo para Porto Alegre\nDigite 3 para vôo de São Paulo para Manaus\n* Companhia Aérea *\n@user:~$  ");
        scanf ("%d", &escolha);

        if (escolha < 1 || escolha > 3)

            {

                printf ("\n! ! Dígito Inválido ! !\n\n");

            }

    }

    linha ();

    if (escolha==1)

        {

            printf (" São Paulo -> Fortaleza. %2.f litros de combústivel tem no tanque. Trecho normal é de %2.f Km, vai pŕecisar de %2.f litros de combústivel. %2.f Km pela rota alternativa, vai precisar de %2.f litros de combústivel.\n", tem_no_tanque, Fortaleza, Fortaleza*litroskm, Fortaleza+((Fortaleza*10)/100), (Fortaleza+((Fortaleza*10)/100))*litroskm);
            total = (Fortaleza+((Fortaleza*40)/100))*litroskm;
            linha ();
            if (total > tanque)
                printf ("Erro nas capacidades do trajeto.");

                 else

                {

                  if (1 + ( rand() % 2)==1)

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota alternativa", total, tanque);


                  else

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota principal", total - ((total*10)/100), tanque);



                }

        }




    else if (escolha==2)

        {

            printf (" São Paulo -> Porto Alegre. %2.f litros de combústivel tem no tanque. Trecho normal é de %2.f Km vai pŕecisar de %2.f litros de combústivel. A distância é de %2.f Km pela rota alternativa, vai precisar de %2.f litros de combústivel.\n", tem_no_tanque, Porto_Alegre, Porto_Alegre*litroskm, Porto_Alegre+((Fortaleza*10)/100), (Porto_Alegre+((Porto_Alegre*10)/100))*litroskm);
            total = (Porto_Alegre+((Porto_Alegre*40)/100))*litroskm;
            linha ();

            if (total > tanque)
                printf ("!!Erro nas capacidades do trajeto.!!");

            else

                {

                  if (1 + ( rand() % 2)==1)

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota alternativa", total, tanque);


                  else

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota principal", total - ((total*10)/100), tanque);



                }

        }


    else

            {

            printf (" São Paulo -> Manaus. %2.f de combústivel tem no tanque. Trecho normal %2.f vai pŕecisar de %2.f de combústivel, %2.f rota alternativa vai precisar de %2.f de combústivel\n", tem_no_tanque, Manaus, Manaus*litroskm, Manaus+((Manaus*10)/100), (Manaus+((Manaus*10)/100))*litroskm);
            total = (Manaus+((Manaus*40)/100))*litroskm;
            linha ();

            if (total > tanque)

                printf ("Erro nas capacidades do trajeto.");

             else

                {

                  if (1 + ( rand() % 2)==1)

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota alternativa", total, tanque);


                  else

                     printf ("Vôo aprovado. %2.f litros de combustível adicionado para a cabacidade de %2.f litros do tanque.\nO vôo será pela rota principal", total - ((total*10)/100), tanque);


                }

        }

    linha();

   return 0;

}




