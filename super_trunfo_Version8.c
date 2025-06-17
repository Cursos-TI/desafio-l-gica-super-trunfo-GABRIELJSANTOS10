#include <stdio.h>

int main() {
    char nome1[51] = "Curitiba", nome2[51] = "Florianopolis";
    int pop1 = 1774000, pop2 = 537000;

    printf("Cidade 1: %s | Habitantes: %d\n", nome1, pop1);
    printf("Cidade 2: %s | Habitantes: %d\n", nome2, pop2);

    printf("\nComparando habitantes: ");
    if (pop1 > pop2)
        printf("Vencedor: %s\n", nome1);
    else if (pop2 > pop1)
        printf("Vencedor: %s\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}