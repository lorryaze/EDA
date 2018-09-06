#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int main (int argc, char *argv[])
{
    int i, x[MAX] = {0,1,2,3};
    printf("Endereco\t Conteudo\t \n");
    printf("Notacao de vetor \n");
    printf("%p\t\t %d\t \n", &x[0], x[0]);
    printf("Notacao de ponteiro \n");
    printf("%d\t\t %d\t \n", x[0], *x);
    return 0;
}
