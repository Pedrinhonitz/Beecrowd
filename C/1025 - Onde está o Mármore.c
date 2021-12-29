#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int nitz (const void * p1, const void * p2) {
   return ( *(int*)p1 - *(int*)p2 );
}

int main(int argc,char *argv[]) {
    int n1, n2, count, sum1, sum2;
    int countCase = 1;

    #ifdef DEBUG
    clock_t caseDebug[2];
    caseDebug[0] = clock();
    #endif
    
    do {
        scanf("%d %d", &n1, &n2);
        if(n1==0 & n2==0) {
            break;
        }
        int vet[n1];
        for(sum2=0; sum2 < n1; sum2++) {
            scanf(" %d", &vet[sum2]);
        }
  
        qsort(vet, n1, sizeof(int), nitz);
        printf("CASE# %d:\n", countCase);

        for(sum2=0; sum2 < n2; sum2++) {
            scanf("%d", &count);
            for(sum1=0; vet[sum1] != count; sum1++);
            if(sum1 > n1) {
                printf("%d not found\n", count);
            } else {
                printf("%d found at %d\n", count, sum1 + 1);
            }
        }
        countCase++;
        }while((n1!=0 && n2!=0) || countCase > 65);
 
        #ifdef DEBUG
        caseDebug[1] = clock();
        double time = (caseDebug[1] - caseDebug[0]) * 1000.0 / CLOCKS_PER_SEC;
        printf("Tempo gasto: %g ms.(%.2lf)", time, time*60);
        #endif

        return 0;
}