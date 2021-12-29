#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    unsigned int n1, n2;
    
    while (scanf("%u %u", &n1, &n2) != EOF){
        printf("%u\n", (n1^n2));
    }

    return 0;
}