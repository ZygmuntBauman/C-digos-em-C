#include <stdio.h>
#include <time.h>


void pw_rand(void)
{
int i=0,aux;
char pw1[7];
     srand(time(NULL));
      while (i<7)
      {

      aux = (65 + rand() % (91-65));
      pw1[i]=(char) aux;
      printf("%c",pw1[i]);
      i++;
      printf("\n");
      }
}



int main()
{

    printf("Pass Criada\n");
    pw_rand();

system("PAUSE");
return 0;
}
