#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "menus.h"

//Início da main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int controle = 1, op;
	do { //início do-while()
		op = menu();
		switch (op) {//início do switch()
			case 1: //Criar Pilha
				break;
			
			case 2: //Empilhar
				break;
			
			case 3: //Desempilhar
				break;
			
			case 4: //Exibir Pilhar
				break;
				
			case 5: //Verificar - Pilha Cheia
				break;
				
			case 6: //Verificar - Pilha Vazia
				break;
				
			case 7: //Exibir Topo
				break;
				
			case 0: //Sair
				break;
			
			default:
				printf ("\n\n\nInforme uma opção válida");
		} //Fim do switch()
	} while (controle != 0); //fim do-while()
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
