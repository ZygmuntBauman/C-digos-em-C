#include <iostream>

using namespace std;

int main()

{

int SomaDivisores=0, NumeroTeste=0, i;

cout << "Digite um numero para testar se é perfeito: ";

cin >> NumeroTeste;

    for (i=1; i<NumeroTeste; i++)

    {


        if (NumeroTeste%i==0)

            {

            SomaDivisores = SomaDivisores + i;

            }

    }

    if (SomaDivisores==NumeroTeste)

        {

        cout << "A soma dos divisores do numero " << NumeroTeste << " com excecao dele mesmo é " << SomaDivisores << endl;

        cout << "Logo, " << NumeroTeste << " é um numero perfeito" << endl;

        }

    else

        {

        cout << "A soma dos divisores do numero " << NumeroTeste << " com excecao dele mesmo é " << SomaDivisores << endl;

        cout << "Logo, " << NumeroTeste << " não é um numero perfeito" << endl;


        }

return 0;

}
