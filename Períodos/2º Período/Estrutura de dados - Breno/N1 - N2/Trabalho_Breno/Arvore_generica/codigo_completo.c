#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void clear(void) {
    printf("\n\n\n");
    system("Pause");
    system("cls");
}

typedef struct No {
    int chave;
    struct No* primeiroFilho;
    struct No* proximoIrmao;
} No;

No* criarNo(int chave) {
    No* novoNo = (No*)(malloc(sizeof(No)));
    if (novoNo == NULL) {
        printf("\n\nErro na tentativa de alocar memória!");
        clear();
        exit(1);
    }
    novoNo->chave = chave;
    novoNo->primeiroFilho = NULL;
    novoNo->proximoIrmao = NULL;
    return novoNo;
}

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
            temp = temp->proximoIrmao;
        }
        temp->proximoIrmao = novoNo;
    }
}

No* buscarNo(No* raiz, int chave) {
    if (raiz == NULL)
        return NULL;

    if (raiz->chave == chave)
        return raiz;

    No* encontrado = buscarNo(raiz->primeiroFilho, chave);
    if (encontrado)
        return encontrado;

    return buscarNo(raiz->proximoIrmao, chave);
}

No* removerNo(No* raiz, int chave) {
    if (raiz == NULL)
        return NULL;

    if (raiz->chave == chave) {
        No* temp = raiz->primeiroFilho;
        free(raiz);
        return temp;
    }

    No* atual = raiz;
    No* anterior = NULL;

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

    raiz->primeiroFilho = removerNo(raiz->primeiroFilho, chave);
    raiz->proximoIrmao = removerNo(raiz->proximoIrmao, chave);
    return raiz;
}

void perPosOrdem(No* raiz) {
    if (raiz == NULL)
        return;
    perPosOrdem(raiz->primeiroFilho);
    printf("%d ", raiz->chave);
    perPosOrdem(raiz->proximoIrmao);
}

void perPreOrdem(No* raiz) {
    if (raiz == NULL)
        return;
    printf("%d ", raiz->chave);
    perPreOrdem(raiz->primeiroFilho);
    perPreOrdem(raiz->proximoIrmao);
}

int main(void) {
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    No* raiz = criarNo(1);
    inserirFilho(raiz, 2);
    inserirFilho(raiz, 3);
    inserirFilho(raiz->primeiroFilho, 4);
    inserirFilho(raiz->primeiroFilho->proximoIrmao, 5);

    printf("Árvore em Pré-Ordem: ");
    perPreOrdem(raiz);
    printf("\n");

    printf("Árvore em Pós-Ordem: ");
    perPosOrdem(raiz);
    printf("\n");

    printf("\nRemovendo nó 3 (sem remover filhos):\n");
    raiz = removerNo(raiz, 3);

    printf("Árvore em Pré-Ordem após remoção: ");
    perPreOrdem(raiz);
    printf("\n");

    system("Pause");
    return 0;
}
