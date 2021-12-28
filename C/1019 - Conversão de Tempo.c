#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
   int n1, n2, n3, sum1, sum2;

    n3=3600;

    scanf("%d", &n1);

    n2=(n1/n3);

    sum1=(n1 -(n3*n2))/60;

    sum2= (n1-(n3*n2)-(sum1*60));

    printf("%d:%d:%d\n",n2,sum1,sum2); 


    return 0;
}