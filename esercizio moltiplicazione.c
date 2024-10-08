#include <stdio.h>

int main() {

    int numA;
    int numB;
    int moltAB;

    printf("Inserisci primo numero:\n");
    scanf("%d", &numA );

    printf("Inserisci secondo numero:\n");
    scanf("%d", &numB );

    moltAB = numA * numB;

    printf("La moltiplicatione di questi due numeri é: %d\n", moltAB );

    return 0;

}