#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, sum;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 5;
    sum = ((n1 + n2 + n3) / 10);

    printf("MEDIA = %.1f\n", sum);

    return 0;
}