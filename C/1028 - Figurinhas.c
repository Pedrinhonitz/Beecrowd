#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fazResto(int n1, int n2) {
    int sobra;

    sobra = n1 % n2;

    if(sobra == 0) {
        return abs(n2);
    }

    return fazResto(n2, sobra);
}

void pilha() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", fazResto(x, y));

}

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        pilha();
    }

    return 0;

}