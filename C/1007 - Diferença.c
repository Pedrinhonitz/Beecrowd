#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, sum;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    sum = ((n1 * n2) - (n3 * n4));

    printf("DIFERENCA = %d\n", sum);
    return 0;
}   