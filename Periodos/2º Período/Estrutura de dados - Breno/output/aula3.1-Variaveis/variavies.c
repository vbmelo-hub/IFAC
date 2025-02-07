#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade:\n");
    scanf("d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("digite o nome:\n");
    scanf("%s", nome);

    system("pause");
}