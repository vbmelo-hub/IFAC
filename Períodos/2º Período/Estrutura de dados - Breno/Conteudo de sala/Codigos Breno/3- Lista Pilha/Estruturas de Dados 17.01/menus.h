#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Procedimento menu()
int menu() {
	int op;	
	printf ("\n\n\tSistema de Biblioteca (Pilha)");
	printf ("\n\n\tMenu");
	printf ("\n\n\n1 - Criar Pilha");
	printf ("\n\n2 - Empilhar");
	printf ("\n\n3 - Desempilhar");
	printf ("\n\n4 - Exibir Pilha");
	printf ("\n\n5 - Verificar - Pilha Cheia");
	printf ("\n\n6 - Verificar - Pilha Vazia");
	printf ("\n\n7 - Exibir Topo");
	printf ("\n\n0 - Sair");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	return op;
}//Fim do procedimento menu()
