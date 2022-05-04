#include <stdio.h>
#include <stdlib.h>

void linha (void)

{

printf ("\n");

};

struct nome
{
char nomecompleto [40];
};

struct boletim{
int nota;
};


int main ()

{

int i, quantidade;

printf ("Quantidade de alunos: ");
scanf ("%d", &quantidade);

__fpurge(stdin);

struct nome aluno [quantidade];
struct boletim notas [quantidade];

for (i = 0; i < quantidade; ++i)

{

	printf("Digite o nome completo do Aluno: ");
    scanf ( "%[^\n]", aluno[i].nomecompleto);

    __fpurge(stdin);

    printf("Digite a nota do Aluno %s: ", aluno[i].nomecompleto);
	scanf ("%d", &notas[i].nota);

	__fpurge(stdin);

	linha();

}

for (i = 0; i < quantidade; ++i)

{

	if (notas[i].nota >= 5)

	{

	printf ("O Aluno %s foi aprovado com nota %d", aluno[i].nomecompleto, notas[i].nota);
	linha ();

    }

}
	return EXIT_SUCCESS;

}
