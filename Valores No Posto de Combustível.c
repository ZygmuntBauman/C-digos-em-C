#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void linha (void)

{

printf ("\n");

}

int main()

{

const float etanol = 4.529;
const float gasolina = 5.847;
const int quantidade = 40;
float valor = 0;
int aux=0;
bool aux2 = true;
int aux3 = 0;

while (aux3 != 4)

    {

     do
    {

    if (aux2 == false)

    printf ("Dígito inválido! Etanol ou Gasolina?\n");

    printf ("::POSTO ÁGUA NO TANQUE:: \n Etanol R$ 4,529\n Gasolina R$ 5,847\n Digite 1 para Etanol e 2 para Gasolina: ");
    scanf ("%d", &aux);

    linha ();

    aux2 = false;

    } while (aux != 1 && aux != 2);

    aux2 = true;

    do {

        if (valor > 40 && aux2 == false)

        printf ("!O valor máximo R$ 40.00!\n");

        if (valor < 0.1 && aux2 == false)

        printf ("!O valor deve ser positivo!\n");

        printf ("Digite qual o valor deseja que deseja abastecer, o máximo é R$ 40.00: ");
        scanf ("%f", &valor);
        linha ();

        aux2=false;


        } while (valor > 40 || valor < 0.1);

    if (aux == 1)

        printf (" * Informações do abastecimento: [R$ %f] [%f litros de Etanol] * \n", valor, valor / etanol);


    if (aux == 2)

        printf (" * Informações do abastecimento: [R$ %f] [%f litros de Gasolina] * \n", valor, valor / gasolina);

        linha ();


    printf ("::POSTO ÁGUA NO TANQUE::\nObrigado pela preferência\nDigite 4 para sair ou outro número para voltar ao menu anterior: ");

        scanf ("%d", &aux3);

        aux2=true;

        linha ();
    }


    printf ("* Boa viagem * ");



return 0;
}
