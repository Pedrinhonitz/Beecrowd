#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1, n2, n3, i, sum1, sum2, j;
    int sum3, sum4, sum5;
    int pas = 1;

    while(scanf("%d", &n1) != 0) {
        sum1 = 0, sum2 = 0;
        int Resident[210] = {0};

        if(n1 == 0) {
            break;
        }
        for(i = 0; i < n1; i++){
            scanf("%d %d", &n2, &n3);
            sum1 = sum1 + n2;
            sum2 = sum2 + n3;
            Resident[n3/n2] += n2;
        }
        printf("Cidade# %d:\n", pas);
        pas++;
        j = 0;

        for(i = 0; i < 210; i++) {
            if(Resident[i] > 0) {
                if (j > 0) {
                    printf(" ");
                }
                j++;
                printf("%d-%d", Resident[i], i);
            }
        }
        printf("\n");
        sum3 = (double)sum2 / (double)sum1 * 100;
        sum4 = (double)sum2 / (double)sum1;
        sum4 = sum4 * 100;
        sum5 = sum3 - sum4;
        sum3 = sum3 / 100;
        printf("Consumo medio: %d.%02d m3.\n", sum3, sum5);
    }

    return 0;   
}