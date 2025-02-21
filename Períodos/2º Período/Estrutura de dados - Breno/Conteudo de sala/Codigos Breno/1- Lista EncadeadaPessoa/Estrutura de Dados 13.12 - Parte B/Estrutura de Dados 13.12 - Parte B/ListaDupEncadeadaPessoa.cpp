#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Estrutura pessoa - struct - lista duplamente encadeada
typedef struct pessoa {
	int id;
	char nome[80];
	int idade;
	float peso;
	struct pessoa* anterior;
	struct pessoa* proximo;
} Pessoa; //Fim da struct pessoa com typedef

//Fun��o criarLista()
Pessoa* criarLista() {
	return NULL;
}//Fim da fun��o criarLista()

//Fun��o criarNo() - apenas cria um novo n�
Pessoa* criarNo(int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
	if (!novaPessoa) {
		printf("Erro ao alocar mem�ria! N�o ser� poss�vel inserir novo elemento na lista!\n");
		exit(1);
	} 
	novaPessoa->id = id;
	strcpy(novaPessoa->nome, nome);
	novaPessoa->idade = idade;
	novaPessoa->peso = peso;
	novaPessoa->anterior = NULL;
	novaPessoa->proximo = NULL;
	return novaPessoa;
}//Fim da fun��o criarNo()

//Fun��o listaVazia()
int listaVazia(Pessoa* lista) {
	return lista == NULL;
}//Fim da fun��o listaVazia()

//Fun��o inserirInicio() - insere elemento no in�cio da lista duplamente encadeada
Pessoa* inserirInicio(Pessoa* lista, int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = criarNo(id, nome, idade, peso);
	novaPessoa->proximo = lista;
	if (lista != NULL) {
		lista->anterior = novaPessoa;
	}
	return novaPessoa;
}//Fim da fun��o inserirInicio()

//Fun��o inserirFim()
Pessoa* inserirFim(Pessoa* lista, int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = criarNo(id, nome, idade, peso);
	if (lista == NULL) {
		return novaPessoa;
	}
	Pessoa* aux = lista;
	while (aux->proximo != NULL) {
		aux = aux->proximo;
	}
	aux->proximo = novaPessoa;
	novaPessoa->anterior = aux;
	return lista;
}//Fim da fun��o inserirFim()

//1 - Inserir no meio da lista????
//2 - Buscar elemento - n�
//3 - Remover elemento - n�
//4 - Liberar lista
//5 - Imprimir na ordem direta
//6 - Imprimir na ordem inversa

//Montar a main()


