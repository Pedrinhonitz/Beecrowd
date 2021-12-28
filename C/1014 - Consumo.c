#include <stdio.h>
#include <stdlib.h>

int main() {
    int km;
    float lt;
    
    scanf("%d", &km);
    scanf("%f", &lt);

    lt = km / lt;
    
    printf("%.3f km/l\n", lt);    
    
    return 0;
}