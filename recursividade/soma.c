#include <stdio.h>

int quadrado (int n) {
    int debug;
    if(n == 1)
        return 1;
    else 
        return debug = (2*n-1) + quadrado(n-1);
        printf("%d\n\n", debug);
}

int main() {
    
    int n;
    scanf("%d", &n);
    int resultado = quadrado(n);
    printf("%d\n\n", resultado);
    return 0;
}
