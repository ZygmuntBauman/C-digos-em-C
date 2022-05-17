#include <stdio.h>
#include <stdlib.h>

int main ()

{

long int i, primeiro, segundo, fat;
printf ("Digite o primeiro número: ");
scanf ("%ld", &primeiro);
printf ("Digite o segundo número: ");
scanf ("%ld", &segundo);

for (i=1;fat!=0;i++)

    {
        fat = primeiro * i % segundo;

            if (fat==0)
                break;
    }

    fat = primeiro*i;

    printf ("* MMC * de %ld e %ld é [%ld]", primeiro,segundo,fat);

return 0;

}
