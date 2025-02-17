#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//�rvore gen�rica

//Procedimento clear()
void clear (void) {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Estrutura no
typedef struct No {
	int chave;
	struct No* primeiroFilho; //"Perspectiva vertical" - camadas inferiores
	struct No* proximoIrmao; //"Perspectiva horizontal" - mesma camada
} No;//Fim da estrutura no

//Fun��o criarNo()
No* criarNo(int chave) {
	No* novoNo = (No*) (malloc(sizeof(No)));
	if (novoNo == NULL) {
		printf ("\n\nErro na tentativa de alocar mem�ria!");
		clear();
		exit(1); //return NULL;
	}
	novoNo->chave = chave;
	novoNo->primeiroFilho = NULL;
	novoNo->proximoIrmao = NULL;
	return novoNo;
}//Fim da fun��o criarNo()

//Procedimento inserirFilho()
void inserirFilho(No* pai, int chave) {
	if (pai == NULL)
		return;
	
	No* novoNo = criarNo(chave);
	if (pai->primeiroFilho == NULL) {
		pai->primeiroFilho = novoNo;
	}
	else {
		No* temp = pai->primeiroFilho;
		while (temp->proximoIrmao != NULL) {
			temp = pai->proximoIrmao;
		}
		temp->primeiroFilho = novoNo;
	}
}//Fim do procedimento inserirFilho()

//Fun��o buscarNo()
No* buscarNo(No* raiz, int chave) {
	if (raiz == NULL)
		return NULL;
	
	if (raiz->chave == chave)
		return raiz;
		
	No* encontrado = buscarNo(raiz->primeiroFilho, chave);
	if (encontrado)
		return encontrado;
	
	return buscarNo(raiz->proximoIrmao, chave);	
}//Fim da fun��o buscarNo()

//Fun��o removerNo() - remove n� e seus filhos
//Como seria para remover o n� e n�o remover os filhos?
No* removerNo(No* raiz, int chave){
	if (raiz == NULL)
		return NULL;
		
	if (raiz->chave == chave) {
		free(raiz);
		return NULL;
	}
	
	No* pai = NULL;
	No* atual = raiz;
	No* anterior = NULL;
	
	//Percorrer os filhos de um n� - relacionamento entre irm�os
	if (atual->primeiroFilho != NULL) {
		No* filho = atual->primeiroFilho;
		while (filho != NULL) {
			if (filho->chave == chave) {
				if (anterior == NULL) {
					atual->primeiroFilho = filho->proximoIrmao;
				}
				else {
					anterior->proximoIrmao = filho->proximoIrmao;
				}
				free(filho);
				return raiz;
			}
			anterior = filho;
			filho = filho->proximoIrmao;
		}
	}
	
	//Recursividade - travessia entre filhos e irm�os
	raiz->primeiroFilho = removerNo(raiz->primeiroFilho, chave);
	raiz->proximoIrmao = removerNo(raiz->proximoIrmao, chave);
	return raiz;	
}//Fim da fun��o removerNo()

//Procedimento perPosOrdem()
void perPosOrdem (No* raiz) {
	if (raiz == NULL)
		return;
	perPosOrdem(raiz->primeiroFilho);
	printf ("%d ", raiz->chave);
	perPosOrdem(raiz->proximoIrmao);
}//Fim do procedimento perPosOrdem()

//Procedimento perPreOrdem()
void perPreOrdem (No* raiz) {
	if (raiz == NULL)
		return;
	printf ("%d ", raiz->chave);
	perPreOrdem(raiz->primeiroFilho);
	perPreOrdem(raiz->proximoIrmao);
}//Fim do procedimento perPreOrdem()

//Procedimento perOrdemSimetrica() - existe????

//In�cio da main()
int main (int argc, char* argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()

