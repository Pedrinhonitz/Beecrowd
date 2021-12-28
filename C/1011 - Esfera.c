#include <stdio.h>
#include <stdlib.h>

int main() {
    double n;

    scanf("%lf",&n);

    printf("VOLUME = %.3f\n",(4/3.0)*3.14159*n*n*n);
    
    return 0;
}