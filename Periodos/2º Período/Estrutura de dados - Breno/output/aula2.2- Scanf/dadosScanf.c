#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;
    int ano;
    float peso;

    printf("valor iniciial da idade, ano e peso: %d %d %.2f.\n", idade, ano, peso);

    printf("Digite uma idade, ano e peso :\n");
    scanf("%d %d %f", &idade, &ano, &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Ano informado: %d.\n", ano);
    printf("Peso informado: %.2fkg.\n", peso);

    system("pause");
}