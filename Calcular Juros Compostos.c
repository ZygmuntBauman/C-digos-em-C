#include <stdio.h>
#include <stdlib.h>

void linha (void)

{

printf ("\n");

}

int main()

{

int meses=0, aux=0;

float valor_investido=0, juros=0, total=0, valor_mensal=0, total_investido=0, total_juros=0;

printf ("Informe o capital a ser investido: R$ ");
scanf ("%f", &valor_investido);
printf ("Informe a taxa de juros mensal a ser aplicada ao capital: R$ ");
scanf ("%f", &juros);
printf ("Informe o número de meses que irá durar a aplicação: ");
scanf ("%d", &meses);
printf ("Inserir investimento adicional mês a mês? Digite o valor ou digite 0: R$ ");
scanf ("%f", &valor_mensal);

total = valor_investido;

for (aux=0;aux<meses;aux++)

    {

        if (valor_mensal != 0)

        total = total + ((total*juros)/100)+valor_mensal;

        else

        total = total + ((total*juros)/100);

    }

total_investido = valor_investido + (valor_mensal * meses);

total_juros = total - (valor_mensal*meses) - valor_investido;

linha ();

printf ("Valor investido: R$ %f \nTotal de juros: R$ %f \nTotal: R$ %f \n",total_investido, total_juros, total);

return 0;

}
