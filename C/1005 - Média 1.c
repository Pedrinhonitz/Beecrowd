#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, sum, peso1, peso2;
    
    scanf("%f", &n1);
    scanf("%f", &n2);

    peso1 = 3.5 * n1;
    peso2 = 7.5 * n2;

    sum = ((peso1 + peso2) / 11);

    printf("MEDIA = %.5f\n", sum);

    return 0;
}