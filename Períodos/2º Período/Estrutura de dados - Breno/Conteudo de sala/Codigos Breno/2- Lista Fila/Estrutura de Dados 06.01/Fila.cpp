#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Variável global para controle do ID
int contadorID = 1;

// Estrutura Aluno
typedef struct {
    int id; // ID auto incrementável (Questão 4)
    char nome[MAX];
    int matricula;
    int codCurso;
    char tipoCurso[MAX];
    int idade;
    float coefMediaGeral; // Média geral de todas as notas
} Aluno;

// Estrutura Nó da Fila
typedef struct No {
    Aluno aluno;
    struct No* prox;
} No;

// Estrutura da Fila
typedef struct {
    No* frente;
    No* tras;
} Fila;

// Inicializar Fila
void inicializarFila(Fila* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
}

// Verificar se a fila está vazia
int filaVazia(Fila* fila) {
    return fila->frente == NULL;
}

// Enfileirar Aluno
void enfileirar(Fila* fila, Aluno aluno) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("\n\nErro de alocação de memória!\n\n");
        exit(1);
    }
    aluno.id = contadorID++; // Atribuir ID automaticamente (Questão 4)
    novoNo->aluno = aluno;
    novoNo->prox = NULL;
    
    if (filaVazia(fila)) {
        fila->frente = novoNo;
    } else {
        fila->tras->prox = novoNo;
    }
    fila->tras = novoNo;
    printf("\n\nNovo aluno enfileirado com sucesso! ID: %d\n\n", aluno.id);
}

// Desenfileirar Aluno
Aluno desenfileirar(Fila* fila) {
    if (filaVazia(fila)) {
        printf("\n\nA fila está vazia!\n\n");
        exit(1);
    }
    No* temp = fila->frente;
    Aluno alunoRemovido = temp->aluno;
    fila->frente = temp->prox;
    if (fila->frente == NULL) {
        fila->tras = NULL;
    }
    free(temp);
    return alunoRemovido;
}

// Buscar aluno na fila por matrícula (Questão 1)
Aluno* buscarAluno(Fila* fila, int matricula) {
    No* atual = fila->frente;
    while (atual != NULL) {
        if (atual->aluno.matricula == matricula) {
            return &atual->aluno;
        }
        atual = atual->prox;
    }
    return NULL;
}

// Alterar dados de um aluno (Questão 2)
void alterarAluno(Fila* fila, int matricula) {
    Aluno* aluno = buscarAluno(fila, matricula);
    if (aluno == NULL) {
        printf("\n\nAluno não encontrado!\n\n");
        return;
    }
    printf("\n\nAlterando dados do aluno ID %d\n\n", aluno->id);
    printf("Novo nome: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Nova idade: ");
    scanf("%d", &aluno->idade);
    printf("Novo código do curso: ");
    scanf("%d", &aluno->codCurso);
    printf("Novo tipo do curso: ");
    scanf(" %[^\n]", aluno->tipoCurso);
    printf("Nova média geral: ");
    scanf("%f", &aluno->coefMediaGeral);
    printf("\n\nDados alterados com sucesso!\n\n");
}

// Verificar repetições de matrícula e ID (Questão 3)
void verificarRepeticoes(Fila* fila) {
    No* atual = fila->frente;
    while (atual != NULL) {
        No* comparador = atual->prox;
        while (comparador != NULL) {
            if (atual->aluno.matricula == comparador->aluno.matricula) {
                printf("\n\nATENÇÃO: Matrícula duplicada encontrada! (%d)\n\n", atual->aluno.matricula);
            }
            if (atual->aluno.id == comparador->aluno.id) {
                printf("\n\nATENÇÃO: ID duplicado encontrado! (%d)\n\n", atual->aluno.id);
            }
            comparador = comparador->prox;
        }
        atual = atual->prox;
    }
}

// Exibir Fila
void exibirFila(Fila* fila) {
    if (filaVazia(fila)) {
        printf("\n\nA fila está vazia!\n\n");
        return;
    }
    No* atual = fila->frente;
    printf("\n\n\nRelatório da Fila");
    while (atual != NULL) {
        Aluno alunoAtual = atual->aluno;
        printf("\n\nID: %d", alunoAtual.id);
        printf("\nNome do aluno: %s", alunoAtual.nome);
        printf("\nNúmero da matrícula: %d", alunoAtual.matricula);
        printf("\nCódigo do curso: %d", alunoAtual.codCurso);
        printf("\nTipo do curso: %s", alunoAtual.tipoCurso);
        printf("\nIdade: %d", alunoAtual.idade);
        printf("\nMédia geral de notas: %.2f\n", alunoAtual.coefMediaGeral);
        atual = atual->prox;
    }
}
