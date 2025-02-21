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

void buscarNo(no *raiz, int chave, char* caminho) {
    if (raiz == NULL) {
        printf("\nElemento não encontrado!");
        return;
    }
    printf("%d -> ", raiz->chave);

    if (raiz->chave == chave) {
        printf("\nCaminho até o nó %d: %s", chave, caminho);
        return;
    }

    if (chave < raiz->chave) {
        snprintf(caminho + strlen(caminho), 100, "Esquerda -> ");
        buscarNo(raiz->esquerda, chave, caminho);
    } else if (chave > raiz->chave) {
        snprintf(caminho + strlen(caminho), 100, "Direita -> ");
        buscarNo(raiz->direita, chave, caminho);
    }
}

int main(void) {
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    no *raiz = NULL;
    char caminho[100] = "Raiz -> ";

    inserirNo(&raiz, 10, "Elemento 10");
    inserirNo(&raiz, 5, "Elemento 5");
    inserirNo(&raiz, 20, "Elemento 20");
    inserirNo(&raiz, 15, "Elemento 15");

    buscarNo(raiz, 15, caminho);

    return 0;
}