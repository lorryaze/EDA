#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int* recebe_notas(double *NOTAS, int tamanho);
int *conta_notas(int *APR, int tamanho);
double percent_aprov(double *aprov, double *reprov);

int main (int argc, char *argv[])
{
   double notas, NOTAS[MAX];
   printf("Digite as notas dos alunos: \n");
   for(int i = 0; i < MAX; i++) {
       scanf("%lf", &notas);
       NOTAS[i] = notas;
   }
   
   int *APR = (int *)malloc(sizeof(10));
   APR = recebe_notas(NOTAS, MAX); //nesse ponteiro vetor eu vou alocar o meu ponteiro APR que tb tem 10 posições.

    for(int i = 0; i < MAX; i++){
        printf("%d ", APR[i]);
        printf("\n");
    }
    
    
    int *total_alunos;
    total_alunos = conta_notas(APR, MAX);

    printf("Alunos aprovados: %d\nAlunos reprovados: %d\n", total_alunos[0], total_alunos[1]);
    
    return 0;
}

int *recebe_notas(double *NOTAS, int tamanho) {
    
    int *APR =(int *) malloc(sizeof(tamanho)); //faço cast, e falo o tamanho que minha função malloc vai alocar
    
    for(int i = 0; i < tamanho; i++){
        if((*(NOTAS+i)) >= 6.0) 
            APR[i] = 1;   
        else 
            APR[i] = 0;
            
    }
    return APR;
}

int *conta_notas(int *APR, int tamanho) {
    
    int aprovados = 0;
    int reprovados = 0;

    for(int i = 0; i < tamanho; i++){
        if((*(APR+i)) == 1) 
            aprovados += 1;
        else  
            reprovados += 1;    
    }
    int total[] = {aprovados, reprovados};
    int *retorno;
    retorno = total;
    
    /*printf("%d %d\n", total[0], total[1]);
    printf("%d %d\n", retorno[0], retorno[1]);*/
    
    return retorno;
}
