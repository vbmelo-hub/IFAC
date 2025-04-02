#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Struct - fila aluno
struct aluno {
    int id;
    char nome[80];
    float nota;
    struct aluno* prox;
};

typedef struct aluno Aluno;

// Função para inserir aluno na fila
Aluno* inserirFila(Aluno* frente, Aluno* traseira, int novoId, char *novoNome, float novaNota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novo->id = novoId;
    strcpy(novo->nome, novoNome);
    novo->nota = novaNota;
    novo->prox = NULL;

    if (traseira == NULL) {
        frente = novo;
    } else {
        traseira->prox = novo;
    }
    traseira = novo;

    return frente;
}

// Função para alterar dados de um aluno na fila
Aluno* alterarDadosFila(Aluno* frente, int idBusca, char *novoNome, float novaNota) {
    Aluno* p = frente;
    while (p != NULL) {
        if (p->id == idBusca) {
            strcpy(p->nome, novoNome);
            p->nota = novaNota;
            printf("Dados atualizados para o aluno ID: %d\n", p->id);
            return frente;
        }
        p = p->prox;
    }
    printf("Aluno com ID %d não encontrado.\n", idBusca);
    return frente;
}

// Função para imprimir a fila
void imprimirFila(Aluno* frente) {
    Aluno* p = frente;
    while (p != NULL) {
        printf("ID: %d, Nome: %s, Nota: %.2f\n", p->id, p->nome, p->nota);
        p = p->prox;
    }
}

int main() {
    // Configura a localidade para o idioma português
    setlocale(LC_ALL, "Portuguese");

    // Limpa a tela
    system("cls");

    Aluno* frente = NULL;
    Aluno* traseira = NULL;
    int opcao;
    int idBusca;
    char nome[80];
    float nota;
    int id = 1;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir Aluno\n");
        printf("2. Alterar Dados de um Aluno\n");
        printf("3. Imprimir Fila\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();  // Consumir o newline

        switch(opcao) {
            case 1:
                // Inserir aluno na fila
                printf("Digite o nome do aluno: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';  // Remover o newline
                printf("Digite a nota do aluno: ");
                scanf("%f", &nota);

                frente = inserirFila(frente, traseira, id++, nome, nota);
                printf("Aluno inserido com sucesso!\n");
                break;

            case 2:
                // Alterar dados de um aluno
                printf("Digite o ID do aluno a ser alterado: ");
                scanf("%d", &idBusca);
                getchar();  // Consumir o newline
                printf("Digite o novo nome do aluno: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';  // Remover o newline
                printf("Digite a nova nota do aluno: ");
                scanf("%f", &nota);

                frente = alterarDadosFila(frente, idBusca, nome, nota);
                break;

            case 3:
                // Imprimir fila
                printf("\nFila de Alunos:\n");
                imprimirFila(frente);
                break;

            case 4:
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