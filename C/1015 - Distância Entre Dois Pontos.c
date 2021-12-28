#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2, sum;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    sum = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("%.4lf\n", sum);
   
    return 0;
}