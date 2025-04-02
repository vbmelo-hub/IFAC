#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct aluno {
    int id;
    char nome[80];
    float nota;
    struct aluno* prox;
};

typedef struct aluno Aluno;

int contadorId = 1;  // Variável global para controle do ID auto-incrementável

Aluno* inserirFila(Aluno* frente, Aluno** traseira, char *novoNome, float novaNota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    novo->id = contadorId++;  // Atribui o ID e incrementa
    strcpy(novo->nome, novoNome);
    novo->nota = novaNota;
    novo->prox = NULL;

    if (frente == NULL) {
        frente = novo;
    } else {
        (*traseira)->prox = novo;
    }

    *traseira = novo;

    return frente;
}

Aluno* removerFila(Aluno* frente, Aluno** traseira) {
    if (frente == NULL) {
        printf("Fila vazia.\n");
        return NULL;
    }

    Aluno* temp = frente;
    frente = frente->prox;

    if (frente == NULL) {
        *traseira = NULL;  // Fila está vazia após a remoção
    }

    free(temp);
    return frente;
}

void verificarRepeticao(Aluno* frente) {
    Aluno* p = frente;
    int encontrado = 0;
    while (p != NULL) {
        Aluno* p2 = p->prox;
        while (p2 != NULL) {
            if (p->id == p2->id) {
                printf("ID %d está repetido:\n", p->id);
                printf("  Aluno 1 - Nome: %s, Nota: %.2f\n", p->nome, p->nota);
                printf("  Aluno 2 - Nome: %s, Nota: %.2f\n\n", p2->nome, p2->nota);
                encontrado = 1;
            }
            p2 = p2->prox;
        }
        p = p->prox;
    }
    if (!encontrado) {
        printf("Não há IDs repetidos.\n");
    }
}

void imprimirFila(Aluno* frente) {
    Aluno* p = frente;
    while (p != NULL) {
        printf("ID: %d, Nome: %s, Nota: %.2f\n", p->id, p->nome, p->nota);
        p = p->prox;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    Aluno* frente = NULL;
    Aluno* traseira = NULL;
    int opcao;
    char nome[80];
    float nota;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir Aluno\n");
        printf("2. Verificar Repetição de ID\n");
        printf("3. Imprimir Fila\n");
        printf("4. Remover Aluno (Fila)\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();  // Limpar o buffer de entrada

        switch(opcao) {
            case 1:
                printf("Digite o nome do aluno: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';  // Remove a quebra de linha

                printf("Digite a nota do aluno: ");
                scanf("%f", &nota);
                getchar();  // Limpar o buffer de entrada

                frente = inserirFila(frente, &traseira, nome, nota);
                printf("Aluno inserido com sucesso!\n");
                break;

            case 2:
                printf("\nVerificando IDs repetidos...\n");
                verificarRepeticao(frente);
                break;

            case 3:
                printf("\nFila de Alunos:\n");
                imprimirFila(frente);
                break;

            case 4:
                frente = removerFila(frente, &traseira);
                printf("Aluno removido da fila.\n");
                break;

            case 5:
                printf("Saindo...\n");
                exit(0);
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}