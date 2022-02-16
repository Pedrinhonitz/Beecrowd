#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define K10 10001
#define K1 1001

int vet[K10][K1];

int win(int x, int y) {
    if(vet[x][y] >= 0) {
        return vet[x][y];
    }
    
    if(x == 1) {
        vet[x][y] = 0;
    }else {
        vet[x][y] = (win(x - 1, y) + y) % x;
    }
    
    return vet[x][y];
}

int main() {
    int n, x, y;

    memset(vet, -1, K10 * K1 * sizeof(int));

    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        scanf("%d %d", &x, &y);

        printf("Case %d: %d\n", i + 1, win(x, y) + 1);
    }

    return 0;
}