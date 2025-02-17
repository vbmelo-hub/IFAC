	#include <stdio.h>
	#include <locale.h>
	#include <stdlib.h>
	#include <string.h>

	// Estrutura no com nomeElemento
	// Q3: Inserir um campo nomeElemento no nó
	typedef struct no {
		int chave;
		char nomeElemento[100]; // Campo para armazenar o nome do elemento
		struct no *esquerda;
		struct no *direita;
	} no; // Fim da estrutura no

	// Função para inicializar um nó
	// Q1: Separar funções e procedimentos da main()
	no* criarNo(int elemento, const char* nome) {
		no* novo = (no*)malloc(sizeof(no));
		novo->chave = elemento;
		snprintf(novo->nomeElemento, sizeof(novo->nomeElemento), "%s", nome); // Atribui o nome ao nó
		novo->esquerda = novo->direita = NULL;
		return novo;
	}

	// Procedimento inserirNo()
	// Q1: Separar funções e procedimentos da main()
	void inserirNo(no **raiz, int elemento, const char* nome) {
		if (*raiz == NULL) { // Caso 1 - Inserindo nó raiz
			*raiz = criarNo(elemento, nome); // Usa a função criarNo para inicializar o nó
			system("cls");
			printf("\n\n\nElemento inserido com sucesso na árvore binária!");
			return;
		}

		if (elemento < (*raiz)->chave) { // Caso 2 - Inserindo à esquerda
			inserirNo(&(*raiz)->esquerda, elemento, nome); // Chama recursivamente para a esquerda
			system("cls");
			printf("\n\n\nElemento inserido com sucesso na árvore binária!");
			return;
		}

		if (elemento > (*raiz)->chave) { // Caso 3 - Inserindo à direita
			inserirNo(&(*raiz)->direita, elemento, nome); // Chama recursivamente para a direita
			system("cls");
			printf("\n\n\nElemento inserido com sucesso na árvore binária!");
			return;
		}

		printf("\n\n\nO código de elemento %d é uma repetição! Elemento não inserido na árvore binária", elemento);
	} // Fim do procedimento inserirNo()

	// Função doisFilhos()
	// Q2: Implementar função de busca de um nó específico, dizendo o caminho percorrido até o nó
	no *doisFilhos(no *root) {
		if (root == NULL)
			return NULL;
		else if (root->esquerda == NULL) 
			return root;
		else
			return doisFilhos(root->esquerda); // Retorna o nó mais à esquerda, caso tenha filhos
	} // Fim da função doisFilhos()

	// Função de busca de um nó específico
	// Q2: Implementar função de busca de um nó específico, dizendo o caminho percorrido até o nó
	void buscarNo(no *raiz, int chave, char* caminho) {
		if (raiz == NULL) {
			printf("\n\n\nElemento não encontrado!");
			return;
		}
		
		printf("%d -> ", raiz->chave); // Exibe a chave do nó atual no caminho
		
		// Verifica se o nó encontrado é o que estamos buscando
		if (raiz->chave == chave) {
			printf("\nCaminho até o nó %d: %s", chave, caminho); // Exibe o caminho até o nó
			return;
		}

		// Se a chave for menor, buscamos à esquerda
		if (chave < raiz->chave) {
			snprintf(caminho + strlen(caminho), 100, "Esquerda -> "); // Atualiza o caminho para esquerda
			buscarNo(raiz->esquerda, chave, caminho); // Chama recursivamente à esquerda
		} 
		// Se a chave for maior, buscamos à direita
		else if (chave > raiz->chave) {
			snprintf(caminho + strlen(caminho), 100, "Direita -> "); // Atualiza o caminho para direita
			buscarNo(raiz->direita, chave, caminho); // Chama recursivamente à direita
		}
	} // Fim da função buscarNo()

	// Procedimento removerNo()
	// Q1: Separar funções e procedimentos da main()
	void removerNo(no **raiz, int elemento) {
		if (*raiz == NULL)
			return;

		if (elemento < (*raiz)->chave) {
			removerNo(&(*raiz)->esquerda, elemento); // Chama recursivamente à esquerda
		}
		else if (elemento > (*raiz)->chave) {
			removerNo(&(*raiz)->direita, elemento); // Chama recursivamente à direita
		}
		else if ((*raiz)->esquerda != NULL && (*raiz)->direita != NULL) {
			no *aux = doisFilhos((*raiz)->direita); // Encontrar o nó mais à esquerda à direita
			removerNo(&(*raiz)->direita, (*raiz)->chave); // Remove o nó à direita
		}
		else {
			no *aux = (*raiz);
			if ((*raiz)->esquerda == NULL) {
				(*raiz) = (*raiz)->direita; // Caso em que não há filho à esquerda
			}
			else {
				(*raiz) = (*raiz)->esquerda; // Caso em que não há filho à direita
			}
			free(aux); // Libera o nó removido
			system("cls");
			printf("\n\n\nElemento de chave %d removido com sucesso da árvore binária!\n\n", elemento);
			system("Pause");
		}
	} // Fim do procedimento removerNo()

	// Procedimento perOrdemSimetrica() - Exibir árvore binária em ordem simétrica
	// Q1: Separar funções e procedimentos da main()
	void perOrdemSimetrica(no *raiz) {
		if (raiz == NULL)
			return;
		perOrdemSimetrica(raiz->esquerda); // Recursivamente exibe à esquerda
		printf("\n%d - %s", raiz->chave, raiz->nomeElemento); // Exibe o nó atual
		perOrdemSimetrica(raiz->direita); // Recursivamente exibe à direita
	} // Fim do procedimento perOrdemSimetrica()

	// Procedimento perPosOrdem() - Exibir árvore binária em pós-ordem
	// Q1: Separar funções e procedimentos da main()
	void perPosOrdem(no *raiz) {
		if (raiz == NULL)
			return;
		perPosOrdem(raiz->esquerda); // Recursivamente exibe à esquerda
		perPosOrdem(raiz->direita); // Recursivamente exibe à direita
		printf("\n%d - %s", raiz->chave, raiz->nomeElemento); // Exibe o nó atual
	} // Fim do procedimento perPosOrdem()

	// Procedimento perPreOrdem() - Exibir árvore binária em pré-ordem
	// Q1: Separar funções e procedimentos da main()
	void perPreOrdem(no *raiz) {
		if (raiz == NULL)
			return;
		printf("\n%d - %s", raiz->chave, raiz->nomeElemento); // Exibe o nó atual
		perPreOrdem(raiz->esquerda); // Recursivamente exibe à esquerda
		perPreOrdem(raiz->direita); // Recursivamente exibe à direita
	} // Fim do procedimento perPreOrdem()

	// Início main()
	// Q1: Separar funções e procedimentos da main()
	int main(void) {
		system("cls");
		setlocale(LC_ALL, "Portuguese");

		no *raiz = NULL;
		char caminho[100] = "Raiz -> "; // Inicializa o caminho para a busca

		// Inserindo elementos na árvore
		inserirNo(&raiz, 10, "Elemento 10");
		inserirNo(&raiz, 5, "Elemento 5");
		inserirNo(&raiz, 20, "Elemento 20");
		inserirNo(&raiz, 15, "Elemento 15");

		// Buscando um nó específico
		buscarNo(raiz, 15, caminho); // Chama a função de busca e exibe o caminho
		
		// Exibindo a árvore binária em diferentes ordens
		printf("\n\n\nÁrvore em ordem simétrica:");
		perOrdemSimetrica(raiz);

		printf("\n\nÁrvore em pré-ordem:");
		perPreOrdem(raiz);

		printf("\n\nÁrvore em pós-ordem:");
		perPosOrdem(raiz);

		system("Pause");
		return 0;
	} // Fim da main()