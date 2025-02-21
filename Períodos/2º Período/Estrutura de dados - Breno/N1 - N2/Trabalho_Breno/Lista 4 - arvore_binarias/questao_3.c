#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct no {
    int chave;
    char nomeElemento[100];
    struct no *esquerda;
    struct no *direita;
} no;

no* criarNo(int elemento, const char* nome) {
    no* novo = (no*)malloc(sizeof(no));
    novo->chave = elemento;
    snprintf(novo->nomeElemento, sizeof(novo->nomeElemento), "%s", nome);
    novo->esquerda = novo->direita = NULL;
    return novo;
}

void inserirNo(no **raiz, int elemento, const char* nome) {
    if (*raiz == NULL) {
        *raiz = criarNo(elemento, nome);
        printf("\nElemento inserido com sucesso!");
        return;
    }
    if (elemento < (*raiz)->chave) {
        inserirNo(&(*raiz)->esquerda, elemento, nome);
    } else if (elemento > (*raiz)->chave) {
        inserirNo(&(*raiz)->direita, elemento, nome);
    } else {
        printf("\nElemento %d já existe!", elemento);
    }
}

void perOrdemSimetrica(no *raiz) {
    if (raiz == NULL) {
        return;
    }
    perOrdemSimetrica(raiz->esquerda);
    printf("\n%d - %s", raiz->chave, raiz->nomeElemento);
    perOrdemSimetrica(raiz->direita);
}

int main(void) {
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    no *raiz = NULL;

    inserirNo(&raiz, 10, "Elemento 10");
    inserirNo(&raiz, 5, "Elemento 5");
    inserirNo(&raiz, 20, "Elemento 20");
    inserirNo(&raiz, 15, "Elemento 15");

    printf("\n\nÁrvore em ordem simétrica:");
    perOrdemSimetrica(raiz);

    return 0;
}