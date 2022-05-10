#include <iostream>
#define PI 3.1415926535898

using namespace std;

int main()

{

 int escolha=0;
 float raio=0;
 float calculador=0;

 do
        {

          cout<<"Digite 1 para medir o perímetro do círculo, 2 para medir o diametro do círculo ou 3 para medir a área do círculo: ";
          cin>>escolha;

        }

 while (escolha<1||escolha>3);

 if (escolha==1)

    {

            cout << "Digite o valor do raio: " << endl;
            cin >> raio;
            calculador = PI*2*raio;
            cout << "O perímetro do círculo é: = " << calculador << "m";

    }

 else if (escolha==2)

    {

        cout << "Digite o valor do raio: " << endl;
        cin >> raio;
        calculador = raio * 2;
        cout << "O diâmetro do círculo é: = " << calculador << "m";

    }

    else

        {


        cout << "Digite o valor do raio: " << endl;
        cin >> raio;
        calculador = PI*(raio*raio);
        cout << "A área do círculo é: = " << calculador << "m";

        }

    return 0;
}

