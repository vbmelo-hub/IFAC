//C�digo imcompleto e n�o revisado!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variável global para controle do ID
static int novoId = 1;

// Struct - lista encadeada pessoa
struct pessoa {
    int id;
    char nome[80];
    float peso;
    int idade;
    struct pessoa* prox;
}; // Fim da struct pessoa

typedef struct pessoa Pessoa;

// Fun��o criarLista()
Pessoa* criarLista() {
    return NULL;
} // Fim da fun��o criarLista()

// Fun��o inserirLista() - inserir um novo elemento na lista
Pessoa* inserirLista(Pessoa* p, int novoId, char *novoNome, float novoPeso, int novaIdade) {
    Pessoa* novo = (Pessoa*)malloc(sizeof(Pessoa));
    if (novo == NULL) {
        printf("Erro ao alocar mem�ria! N�o ser� poss�vel inserir novo elemento na lista!\n");
        exit(1);
    }
    novo->id = novoId;
    strcpy(novo->nome, novoNome);
    novo->peso = novoPeso;
    novo->idade = novaIdade;
    novo->prox = p;
    return novo;
} // Fim da fun��o inserirLista()

// Procedimento imprimirLista()
void imprimirLista(Pessoa* p) {
    Pessoa* pe;
    for (pe = p; pe != NULL; pe = pe->prox) {
        printf("\n\n\n\tCadastro de Pessoa");
        printf("\n\nId da pessoa: %d", pe->id);
        printf("\nNome da pessoa: %s", pe->nome);
        printf("\nPeso da pessoa (kg): %.2f", pe->peso);
        printf("\nIdade da pessoa (anos completos): %d", pe->idade);
    }
} // Fim da fun��o imprimirLista()

// Fun��o buscaElemento()
Pessoa* buscaElemento(Pessoa* p, int codBusca) {
    Pessoa* pe;
    for (pe = p; pe != NULL; pe = pe->prox) {
        if (pe->id == codBusca) {
            return pe;
        }
    }
    return NULL;
} // Fim da fun��o buscaElemento()

// Fun��o listaVazia()
int listaVazia(Pessoa* p) {
    return p == NULL; //Verdadeiro ou falso direto
} // Fim da listaVazia()

// Fun��o removerElemento()
Pessoa* removerElemento(Pessoa* p, int codBusca) {
    Pessoa* pe = p;
    Pessoa* ant = NULL;

    while (pe != NULL && pe->id != codBusca) {
        ant = pe;
        pe = pe->prox;
    }

    // Lista est� vazia ou o elemento com codBusca n�o foi localizado
    if (pe == NULL)
        return p;

    // Elemento localizado na lista
    if (ant == NULL) // Elemento removido � o "primeiro"
        p = pe->prox;
    else
        ant->prox = pe->prox;

    free(pe);
    return p;
} // Fim da fun��o removerElemento()

// Fun��o liberarLista()
Pessoa* liberarLista(Pessoa* p) {
    Pessoa* pe = p;
    while (pe != NULL) {
        Pessoa* p1 = pe->prox;
        free(pe);
        pe = p1;
    }
    return NULL;
} // Fim da fun��o liberarLista()

// Fun��o compararListas() - Compara��o com base no id
int compararListas(Pessoa* p1, Pessoa* p2) {
    Pessoa* pe1 = p1;
    Pessoa* pe2 = p2;
    while (pe1 != NULL && pe2 != NULL) {
        if (pe1->id != pe2->id)
            return 0;
        pe1 = pe1->prox;
        pe2 = pe2->prox;
    }
    return pe1 == pe2; // NULL == NULL
} // Fim da fun��o compararListas()

// 1 - Função para verificar repetições de id na lista
void verificarRepeticoes(Pessoa* p) {
    Pessoa* atual = p;
    while (atual != NULL) {
        Pessoa* comparador = atual->prox;
        while (comparador != NULL) {
            if (atual->id == comparador->id) {
                printf("\n\nATENÇÃO: ID duplicado encontrado! (%d)\n\n", atual->id);
            }
            comparador = comparador->prox;
        }
        atual = atual->prox;
    }
}

// 2 - Função para comparar duas listas com base em um campo definido pelo usuário
int compararListasCampo(Pessoa* p1, Pessoa* p2, char* campo) {
    Pessoa* pe1 = p1;
    Pessoa* pe2 = p2;
    while (pe1 != NULL && pe2 != NULL) {
        if (strcmp(campo, "id") == 0 && pe1->id != pe2->id)
            return 0;
        if (strcmp(campo, "nome") == 0 && strcmp(pe1->nome, pe2->nome) != 0)
            return 0;
        pe1 = pe1->prox;
        pe2 = pe2->prox;
    }
    return pe1 == pe2;
}

// 3 - Função para ordenar a lista com base no id
Pessoa* ordenarLista(Pessoa* p, int crescente) {
    if (p == NULL || p->prox == NULL)
        return p;
    Pessoa *i, *j;
    for (i = p; i->prox != NULL; i = i->prox) {
        for (j = i->prox; j != NULL; j = j->prox) {
            if ((crescente && i->id > j->id) || (!crescente && i->id < j->id)) {
                int tempId = i->id;
                char tempNome[80];
                strcpy(tempNome, i->nome);
                float tempPeso = i->peso;
                int tempIdade = i->idade;

                i->id = j->id;
                strcpy(i->nome, j->nome);
                i->peso = j->peso;
                i->idade = j->idade;

                j->id = tempId;
                strcpy(j->nome, tempNome);
                j->peso = tempPeso;
                j->idade = tempIdade;
            }
        }
    }
    return p;
}

// 4 - Função de busca binária após ordenação com base no id
Pessoa* buscaBinaria(Pessoa* p, int idBusca) {
    Pessoa* inicio = p;
    Pessoa* fim = NULL;
    while (inicio != fim) {
        Pessoa* meio = inicio;
        int count = 0;
        while (meio->prox != fim) {
            meio = meio->prox;
            count++;
        }
        meio = inicio;
        for (int i = 0; i < count / 2; i++) {
            meio = meio->prox;
        }
        if (meio->id == idBusca)
            return meio;
        else if (meio->id < idBusca)
            inicio = meio->prox;
        else
            fim = meio;
    }
    return NULL;
}

// 6 - Função para vincular/concatenar duas listas
Pessoa* concatenarListas(Pessoa* p1, Pessoa* p2) {
    if (p1 == NULL) return p2;
    if (p2 == NULL) return p1;
    Pessoa* temp = p1;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    temp->prox = p2;
    return p1;
}

// 7 - Função para alterar campos de um registro na lista
void alterarRegistro(Pessoa* p, int idBusca) {
    Pessoa* pessoa = buscaElemento(p, idBusca);
    if (pessoa == NULL) {
        printf("\n\nPessoa não encontrada!\n\n");
        return;
    }
    printf("\n\nAlterando dados da pessoa ID %d\n\n", pessoa->id);
    printf("Novo nome: ");
    scanf(" %79[^\n]", pessoa->nome);
    printf("Novo peso: ");
    scanf("%f", &pessoa->peso);
    printf("Nova idade: ");
    scanf("%d", &pessoa->idade);
    printf("\n\nDados alterados com sucesso!\n\n");
}

//1 - Fun��o para verificar repeti��es de id na lista;
//2 - (Mais desafiadora) Fun��o para comparar duas listas com base em um campo definido
//pelo usu�rio;
//3 - Fun��o de ordena��o da lista com base no id - crecente ou decrescente;
//4 - Fun��o de busca bin�ria ap�s ordena��o com base no id;
//5 - Montar a estrutura de cada registro com id auto increment;
//6 - Fun��o para vincular/concatenar duas listas de mesma estrutura em uma lista
//�nica;
//7 - Fun��o para alterar campos de um registro (busca) na lista - editar
