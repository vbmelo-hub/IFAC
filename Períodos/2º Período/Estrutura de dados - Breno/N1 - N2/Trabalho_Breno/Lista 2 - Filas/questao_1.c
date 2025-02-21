#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura de Fila
struct aluno {
    int id;
    char nome[80];
    float nota;
    struct aluno* prox;
}; // Fim da struct aluno

typedef struct aluno Aluno;

// Função criarFila()
Aluno* criarFila() {
    return NULL;
} // Fim da função criarFila()

// Função inserirFila() - inserir um novo aluno no final da fila
Aluno* inserirFila(Aluno* traseira, int novoId, char *novoNome, float novaNota) {
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
        // Fila vazia, o novo aluno será o único na fila
        return novo;
    }

    // Caso a fila não esteja vazia, adiciona no final
    traseira->prox = novo;
    return novo;
} // Fim da função inserirFila()

// Função removerFila() - remover um aluno do início da fila
Aluno* removerFila(Aluno* frente) {
    if (frente == NULL) {
        printf("\nFila vazia!\n");
        return NULL;
    }

    Aluno* temp = frente;
    frente = frente->prox; // Atualiza o ponteiro frente para o próximo aluno na fila
    free(temp);
    return frente;  // Retorna o novo início da fila
} // Fim da função removerFila()

// Função buscarFila() - Buscar um aluno pela ID
Aluno* buscarFila(Aluno* frente, int idBusca) {
    Aluno* aux = frente;
    while (aux != NULL) {
        if (aux->id == idBusca) {
            return aux;
        }
        aux = aux->prox;
    }
    return NULL; // Não encontrado
} // Fim da função buscarFila()

// Função imprimirFila()
void imprimirFila(Aluno* frente) {
    Aluno* aux = frente;
    while (aux != NULL) {
        printf("\nID: %d", aux->id);
        printf("\nNome: %s", aux->nome);
        printf("\nNota: %.2f\n", aux->nota);
        aux = aux->prox;
    }
} // Fim da função imprimirFila()

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
    int id = 1; // ID auto-incrementável

    while (1) {
        printf("\n1 - Inserir Aluno na Fila");
        printf("\n2 - Buscar Aluno na Fila");
        printf("\n3 - Remover Aluno da Fila");
        printf("\n4 - Imprimir Fila");
        printf("\n5 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Inserção de novo aluno na fila
            printf("\nDigite o nome do aluno: ");
            scanf(" %[^\n]s", nome);  // Leitura de string com espaços
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota);

            // Inserir na fila
            traseira = inserirFila(traseira, id++, nome, nota);  // ID auto-incrementável
            if (frente == NULL) {
                frente = traseira;  // Caso a fila estivesse vazia, ambos apontam para o mesmo aluno
            }
        }
        else if (opcao == 2) {
            // Buscar aluno na fila
            printf("\nDigite o ID do aluno para buscar: ");
            scanf("%d", &idBusca);

            Aluno* alunoBuscado = buscarFila(frente, idBusca);
            if (alunoBuscado != NULL) {
                printf("\nAluno encontrado:\n");
                printf("ID: %d, Nome: %s, Nota: %.2f\n", alunoBuscado->id, alunoBuscado->nome, alunoBuscado->nota);
            } else {
                printf("\nAluno não encontrado.\n");
            }
        }
        else if (opcao == 3) {
            // Remover aluno da fila
            frente = removerFila(frente);  // Atualiza o ponteiro 'frente' após remoção
            if (frente == NULL) {
                traseira = NULL;  // Caso a fila fique vazia
            }
        }
        else if (opcao == 4) {
            // Imprimir lista de alunos
            imprimirFila(frente);
        }
        else if (opcao == 5) {
            // Sair do programa
            break;
        }
        else {
            printf("\nOpção inválida!\n");
        }
    }

    return 0;
}