#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void linha (void)

{

printf ("\n");

}

struct masculino {
    char nome[20];
    int idade;
    char genero [20];
};

struct feminino {
    char nome[20];
    int idade;
    char genero [20];
};

int main () {

    int valid = 0;
    int escolha;
    int i;

    char fem [20] = "Feminino";
    char masc [20] = "Masculino";

struct masculino homem [10];
struct feminino mulher [10];

for (i = 0; i < 10; ++i){

    escolha = 0;

    do {

        printf("%dº - Digite 1 para adicionar uma mulher ou 2 para um homem: ", i+1);
        scanf("%d", &escolha);
        __fpurge (stdin);

       } while (escolha != 1 && escolha != 2);

        if (escolha == 2){
            printf("Digite o nome do homem: ");
            scanf ("%[^\n]", homem[i].nome);
             __fpurge (stdin);
            strcpy (homem[i].genero, masc);
            printf("Digite a idade: ");
            scanf ("%d", &homem[i].idade);
             __fpurge (stdin);

                }

        if (escolha == 1){
        printf("Digite o nome da mulher: ");
        scanf ("%[^\n]", mulher[i].nome);
         __fpurge (stdin);
        strcpy (mulher[i].genero, fem);
        printf("Digite a idade: ");
        scanf ("%d", &mulher[i].idade);
         __fpurge (stdin);

            }

        }

linha ();

for (i = 0; i < 10; ++i)

    {

        if (homem[i].idade >= 20 && homem[i].idade <= 40)

            {

            printf ("Nome: %s, idade: %d, gênero: %s ", homem[i].nome, homem[i].idade, homem[i].genero);


            linha();

            if (valid == 0)

            valid ++;

            }


        if (mulher[i].idade >= 20 && mulher[i].idade<= 40)

            {


            printf ("Nome: %s, idade: %d, gênero: %s ", mulher[i].nome, mulher[i].idade, mulher[i].genero);

            linha();

            if (valid == 0)
            valid ++;

            }

    }

    if (valid == 0)

        printf ("Nenhum homem ou mulher tem idade entre 20 e 40");

 return EXIT_SUCCESS;

 }


