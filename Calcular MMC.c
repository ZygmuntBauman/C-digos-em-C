#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()

{

int i, primeiro, segundo, fat;
printf ("Digite o primeiro número: ");
scanf ("%d", &primeiro);
printf ("Digite o segundo número: ");
scanf ("%d", &segundo);

for (i=1;fat!=0;i++)

    {
        fat = primeiro * i % segundo;

        printf ("[%d] %d\n",i, fat);

            if (fat==0)
                break;
    }

    fat = primeiro*i;

    printf ("* MMC * de %d e %d é [%d]", primeiro,segundo,fat);

return 0;

}
