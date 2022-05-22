#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n1, n2, sum, rest, count;

    scanf("%d", &n1);
    scanf("%d", &n2);

    sum = n2 / (n1 - 1);
    rest = n2 % (n1 - 1);

    count = sum;
    if(rest > 0) {
        count += 1;
    }

    printf("%d\n", count);


    return 0;
}