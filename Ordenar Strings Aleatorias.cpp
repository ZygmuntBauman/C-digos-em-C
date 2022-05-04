#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main ()

{

char nome [10][6], *aux = new char [11], validchars [] = "abcdefghijklmnopqrstuvwxyz";

int i, j, c;

srand (time (NULL));

    for (i=0; i<10; i++)

    {

        for (j=0; j<5; j++)

            {

            c = rand () % strlen (validchars);

            nome [i][j] = validchars [c];

                if (j==4)

                    {

                   nome [i][j+1] = {'\0'};

                    }

            }

    }

    cout << "Antes do ordenamento:\n\n";

    for (i=0; i<10; i++)

    {

    cout << "Nome "<< i+1 << ": " << nome[i]<<endl;

    }


    for (i=0; i<10; i++)

        {

        for (j=i+1; j<10; j++)

            {

            if (strcmp (nome[i], nome[j]) > 0)

                {

                delete [] aux;

                aux = new char [strlen (nome[i])];

                strcpy (aux, nome[i]);

                strcpy (nome [i], nome [j]);

                strcpy (nome [j], aux);

                j=i;

                }
            }
        }

    cout << "\nEm ordem alfabética:\n\n";

    for (i=0;i<10;i++)

    cout << "Nome " << i+1 << ": " << nome[i] << "\n";

delete [] aux;

aux = NULL;

return 0;

}
