#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main ()

{

char nome [10][15], *aux = new char [11];

int i, j;

srand (time (NULL));

    for (i=0; i<10; i++)

        {

        cout << "A seguir, digite dez nomes para ordenamento alfabético" <<endl;

        cout << "Digite o nome [" << i + 1 << "]: ";
        cin >> nome[i];

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

    cout << "Nome: " << nome[i] << "\n";

delete [] aux;

aux = NULL;

return 0;

}
