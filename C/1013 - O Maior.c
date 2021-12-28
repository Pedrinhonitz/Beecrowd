#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, sum;
   
    scanf("%d %d %d", &A, &B, &C);
    
    sum = (A + B + abs(A - B)) / 2;
    sum = (C + sum + abs(sum - C)) / 2; 

    printf("%d eh o maior\n", sum);
    
    return 0;
}