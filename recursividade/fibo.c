#include <stdio.h>

int fibo (int n) {
  
    if(n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo (n - 2);
}

int main() {
    
    int n;
    int fibonacci;

    printf("Digite aqui o número desejado: \n\n");
    scanf("%d", &n);
    
    fibonacci = fibo(n);
   
    printf("%d\n\n", fibonacci);

    return 0;
}
