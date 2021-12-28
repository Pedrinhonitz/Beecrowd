#include <stdio.h>
#include <stdlib.h>

int main() {

    int cod1, uni1, cod2, uni2;
    double prc1, prc2;

    scanf("%d %d %lf",&cod1,&uni1,&prc1);
    scanf("%d %d %lf",&cod2,&uni2,&prc2);

    printf("VALOR A PAGAR: R$ %.2f\n",(uni1*prc1)+(uni2*prc2));
    return 0;
}