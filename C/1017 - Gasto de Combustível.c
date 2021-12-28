#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1, n2;
    float sum;
    sum = 12;
    
    scanf("%d", &n1);
    scanf("%d", &n2);

    sum = (n1 * n2); 
    sum = sum / 12;

    printf("%.3f\n", sum);
    
    return 0;
}