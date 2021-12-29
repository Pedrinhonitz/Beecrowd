#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i = 0, j;
    char *password = (char *) malloc(sizeof(char) * 1000);;

    scanf("%d ", &n);
    int sizePassword[n];
    
    while (i < n) {
        gets(password);   
        sizePassword[i] = 0;
        while (password[sizePassword[i]] ^ '\0')
            sizePassword[i]++;
        j = 0;            
        while (j < sizePassword[i]) {
            if ((password[j] >= 97 && password[j] <= 122)
            || ((password[j] >= 65 && password[j] <= 90)))
                password[j] = (char) (password[j] + 3);
            j++;
        }
        j = 0;
        while (j < sizePassword[i] >> 1) {
            
            char letra = password[j];
            password[j] = password[sizePassword[i]-j-1];
            password[sizePassword[i]-j-1] = letra;
            
            j++;   
        }
        j = sizePassword[i] >> 1;
        while (j < sizePassword[i]) {   
            password[j] = (char) (password[j] - 1);
            j++;
        }
        printf("%s\n", password);
        i++;
    }

    return 0;
}