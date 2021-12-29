#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nitz(int p1,int p2);

int main() {
    int n, n0, n1, n2, n3, n4, sum1, sum2, sum3;
    char div;

    scanf("%d\n",&n);

    for(n0 = 0; n0 < n; n0++) {
        scanf("%d / %d %c %d / %d",&n1,&n2,&div,&n3,&n4);
        if(div == '/'){
            sum1 = n2*n3;
            sum3 = n1*n4;
            sum2 = nitz(sum3,sum1);
            printf("%d/%d = %d/%d\n",sum3,sum1,sum3/sum2,sum1/sum2);
    }
        else {
            sum1 = n2*n4;
            if(div == '+') {
                sum3 = n1*(sum1/n2) + n3*(sum1/n4);
            }else if(div == '-') {
                sum3 = n1*(sum1/n2) - n3*(sum1/n4);
            }else if(div == '*') {
                sum3 = n1*n3;
            }    
            sum2 = nitz(sum3,sum1);
            if(sum2 < 0) sum2 = -1*sum2;
            printf("%d/%d = %d/%d\n",sum3,sum1,sum3/sum2,sum1/sum2);
        }
    }
    
    return 0;
}

int nitz(int p1,int p2) {
    if(p2 == 0) { 
        return p1;
    }else {
        return nitz(p2,p1%p2);
    }
} 