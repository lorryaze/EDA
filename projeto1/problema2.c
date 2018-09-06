#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int* recebe_notas(double *NOTAS, int tamanho);
int *conta_notas(int *APR, int tamanho);
int percent_aprov(int aprovados, int reprovados);

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

   /* for(int i = 0; i < MAX; i++){
        printf("%d ", APR[i]);
        printf("\n");
    }*/
     
    int *total_alunos;
    total_alunos = conta_notas(APR, MAX);
    
    int aprovados = total_alunos[0];
    int reprovados = total_alunos[1];
    
    percent_aprov(aprovados, reprovados);
    
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
    
    printf("Alunos aprovados: %d\nAlunos reprovados: %d\n", total[0], total[1]);
    //printf("%d %d\n", retorno[0], retorno[1]);*/

    return retorno;
}

int percent_aprov(int aprovados, int reprovados) {
    
    int total = aprovados + reprovados;
    double aprov = (total * aprovados)/ 100.0;
    aprov = aprov * 100;
    double reprov = (total * reprovados) / 100.0;
    reprov = reprov * 100;

    printf("Porcentagem de alunos aprovados: %%%.1lf\n", aprov);
    printf("Porcentagem de alunos reprovados: %%%.1lf\n", reprov);

    int metade = total / 2;
    
    if(aprovados > metade){
        printf("Mais da metade dos alunos foram aprovados.\n");
        return 1;
    }
    else 
        return 0;
    
}
