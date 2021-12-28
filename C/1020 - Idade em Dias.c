#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int n,sum1,sum2,sum3;

    scanf("%d",&n);

    sum1=n/365;
    sum2=(n%365)/30;
    sum3=(n%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",sum1,sum2,sum3);

    return 0;
}


