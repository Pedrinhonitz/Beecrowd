#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    double grossTotal, sum1, sum2;
    int nota, restoCem, restoCinquenta, restoVinte, restoDez, restoCinco, sum3, restoReal, restoCinquentaCentavo, restoVinteCincoCentavo, restoDezCentavo;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int umReal, cinquentaCentavos, vinteCincoCentavos, dezCentavos, cincoCentavos, umCentavo;

    scanf ("%lf", &grossTotal);

    nota = grossTotal;
    cem = nota / 100;
    restoCem = nota % 100;
    cinquenta = restoCem / 50;
    restoCinquenta = restoCem % 50;
    vinte = restoCinquenta / 20;
    restoVinte = restoCinquenta % 20;
    dez = restoVinte / 10;
    restoDez = restoVinte % 10;
    cinco = restoDez / 5;
    restoCinco = restoDez % 5;
    dois = restoCinco / 2;
    umReal = restoCinco % 2;

    sum2 = grossTotal * 100;
    sum3 = (int) sum2;
    restoReal = sum3 % 100;
    cinquentaCentavos = restoReal / 50;
    restoCinquentaCentavo = restoReal % 50;
    vinteCincoCentavos = restoCinquentaCentavo / 25;
    restoVinteCincoCentavo = restoCinquentaCentavo % 25;
    dezCentavos = restoVinteCincoCentavo / 10;
    restoDezCentavo = restoVinteCincoCentavo % 10;
    cincoCentavos = restoDezCentavo / 5;
    umCentavo = restoDezCentavo % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",umReal);
    printf("%d moeda(s) de R$ 0.50\n",cinquentaCentavos);
    printf("%d moeda(s) de R$ 0.25\n",vinteCincoCentavos);
    printf("%d moeda(s) de R$ 0.10\n",dezCentavos);
    printf("%d moeda(s) de R$ 0.05\n",cincoCentavos);
    printf("%d moeda(s) de R$ 0.01\n",umCentavo);

    return 0;
}
