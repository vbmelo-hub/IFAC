#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//A capacidade da pilha ser� de 100 unidades
#define MAX 100

//Struct Livro
typedef struct {
	int codLivro;
	char nome[100];
	char issn[10];
	char autor[10];
	int quantPaginas;
	float preco;
} Livro;//Fim da struct Livro

//Struct Pilha
typedef struct {
	Livro livros[MAX];
	int topo;
} Pilha;//Fim da struct Pilha

//Procedimento inicializarPilha()
void inicializarPilha(Pilha *p) {
	p->topo = -1;
}//Fim do procedimento inicializarPilha()

//Fun��o pilhaVazia()
int pilhaVazia (Pilha *p) {
	return p->topo == -1;
}//Fim da fun��o pilhaVazia()

//Fun��o pilhaCheia()
int pilhaCheia (Pilha *p) {
	return p->topo == MAX - 1;
}//Fim da fun��o pilhaCheia()

//Procedimento empilhar()
void empilhar(Pilha *p, Livro livro) {
	if (pilhaCheia(p)) {
		printf ("\n\nN�o � poss�vel empilhar! A pilha est� cheia!");
		return;
	}
	//Empilhamento
	p->livros[++(p->topo)] = livro;
}//Fim do procedimento empilhar()

//Fun��o desempilhar()
Livro desempilhar (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[(p->topo)--];
}//Fim da fun��o desempilhar()

//Fun��o topoPilha()
Livro topoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[p->topo];
}//Fim da fun��o topoPilha()

//Fun��o tamanhoPilha()
int tamanhoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		return 0;
	}
	return p->topo + 1;
}//Fim da fun��o tamanhoPilha()

//Procedimento exibirPilha()
void exibirPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		return;
	}
	printf ("\n\n\tLivros na Pilha: ");
	for (int i = p->topo; i >= 0; i--) {
		printf ("\n\n\n\nC�digo: %d.", p->livros[i].codLivro);
		printf ("\n\nNome: %s.", p->livros[i].nome);
		printf ("\n\nISSN: %s.", p->livros[i].issn);
		printf ("\n\nAutor: %s.", p->livros[i].autor);
		printf ("\n\nQuantidade de P�ginas: %d.", p->livros[i].quantPaginas);
		printf ("\n\nPre�o atual: R$ %.2f.", p->livros[i].preco);
	}
}//Fim do procedimento exibirPilha()

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 1 - Função buscarPilha - Buscar um livro pelo código (codLivro)
Livro buscarPilha(Pilha *p, int codLivro) {
    for (int i = p->topo; i >= 0; i--) {
        if (p->livros[i].codLivro == codLivro) {
            return p->livros[i];  // Retorna o livro encontrado
        }
    }
    Livro livroNotFound = {0, "", "", "", 0, 0.0}; // Retorna um livro "vazio" se não encontrado
    return livroNotFound;
} // Fim da função buscarPilha()

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 2 - Função compararElementos - Comparar elementos com base no código do livro (codLivro)
int compararElementos(Livro l1, Livro l2) {
    return l1.codLivro == l2.codLivro;  // Retorna 1 se os códigos forem iguais, 0 se forem diferentes
} // Fim da função compararElementos()

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 3 - Função para buscar repetição de livros na pilha
void buscarRepeticao(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("\n\nA pilha está vazia!");
        return;
    }

    // Comparação do topo com os outros elementos
    Livro topo = topoPilha(p);
    for (int i = p->topo - 1; i >= 0; i--) {
        if (compararElementos(topo, p->livros[i])) {
            printf("\n\nLivro repetido encontrado no índice %d com o código %d", i, topo.codLivro);
        }
    }
    
    // Decrementar topo e comparar novamente
    for (int i = p->topo - 1; i >= 0; i--) {
        topo = p->livros[i];
        for (int j = i - 1; j >= 0; j--) {
            if (compararElementos(topo, p->livros[j])) {
                printf("\n\nLivro repetido encontrado no índice %d com o código %d", j, topo.codLivro);
            }
        }
    }
} // Fim da função buscarRepeticao()

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 4 - Função para alterar valores de atributos de um livro na pilha
void alterarLivro(Pilha *p, int codLivro, char *novoNome, char *novoIssn, char *novoAutor, int novaQuantPaginas, float novoPreco) {
    Livro livroBuscado = buscarPilha(p, codLivro);

    if (livroBuscado.codLivro == 0) {
        printf("\n\nLivro não encontrado!");
        return;
    }

    // Alterando os atributos do livro encontrado
    for (int i = 0; i <= p->topo; i++) {
        if (compararElementos(p->livros[i], livroBuscado)) {
            strcpy(p->livros[i].nome, novoNome);
            strcpy(p->livros[i].issn, novoIssn);
            strcpy(p->livros[i].autor, novoAutor);
            p->livros[i].quantPaginas = novaQuantPaginas;
            p->livros[i].preco = novoPreco;
            printf("\n\nLivro atualizado com sucesso!");
            return;
        }
    }
} // Fim da função alterarLivro()




