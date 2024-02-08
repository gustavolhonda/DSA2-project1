// Informações do estudante
// Nome: Gustavo Lamin Honda
// Curso: Ciência da Computação
// RA: 811716

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, s, k;
    float l;
    float num;

    scanf("%d %d %d %f", &n, &s, &k, &l);    

    int count = 0, saida = s;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &num);
            if (num <= l && num != 0) 
                count++;    
        }
        if (count > k) 
            saida--;
        count = 0;    
    }

    printf("%d\n", saida);
}