#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"
#include "menus.h"

//Início da main()
int main (int argc, char* argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	Fila fila;
	int opcao;
	inicializarFila(&fila);
	printf ("\n\n\nEste programa manipula uma fila de cadastros de alunos!");
	clear();
	
	//Laço principal do programa
	do {
		system ("cls");
		opcao = menu();
		
		//Início switch()
		switch (opcao) {
			case 1:
				system ("cls");
				fflush(stdin);
				printf ("\n\n\nEnfileirar Cadastro de Aluno");
				Aluno aluno;
				printf ("\n\n\nInforme o nome do aluno: ");
				fgets(aluno.nome, MAX, stdin);
				aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
				printf ("\n\nInforme a matrícula do aluno: ");
				scanf ("%d", &aluno.matricula);
				printf ("\n\nInforme o código do curso do aluno: ");
				scanf ("%d", &aluno.codCurso);
				fflush(stdin);
				printf ("\n\nInforme o tipo do curso do aluno: ");
				fgets(aluno.tipoCurso, MAX, stdin);
				aluno.tipoCurso[strcspn(aluno.tipoCurso, "\n")] = '\0';
				printf ("\n\nInforme a idade do aluno: ");
				scanf ("%d", &aluno.idade);
				printf ("\n\nInforme o coeficiente de aproveitamento do aluno: ");
				scanf ("%f", &aluno.coefMediaGeral);
				//Chamada da função
				enfileirar(&fila, aluno);
				clear();
				break;
			
			case 2:
				system ("cls");
				printf ("\n\n\nOpção Desenfileirar Cadastro de Aluno");
				if (!filaVazia(&fila)) {
					Aluno removido = desenfileirar(&fila);
					printf ("\n\n\nNome do aluno desenfileirado: %s.\n\n", removido.nome);
				}
				else
					printf ("\n\n\nA fila de cadastros de alunos está vazia!\n\n");
				clear();
				break;
			
			case 3:
				system ("cls");
				printf ("\n\n\nOpção Exibir Fila de Cadastros de Alunos");
				exibirFila(&fila);
				clear();
				break;
			
			case 0:
				system ("cls");
				printf ("\n\n\nVocê optou em sair!\n\n");
				break;
			
			default:
				printf ("\n\n\nInforme uma opção válida!");	
		}//Fim switch()
		
	} while (opcao != 0); //Fim do laço principal do programa	
	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
