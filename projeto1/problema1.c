#include <stdio.h>
#define MAX 10

int fneuronio(double *ent, double *pes, double limiar, int max); 

int main() {
    
    printf("Digite os valores das ENTRADAS: \n");
    
    double entrada, entradas[MAX];
    
    for(int i = 0; i < MAX; i++){
        scanf("%lf", &entrada);
        entradas[i] = entrada;
    }
    
    printf("Digite os valores dos PESOS: \n");
    
    double peso, pesos[MAX];

    for(int i = 0; i < MAX; i++){
        scanf("%lf", &peso);
        pesos[i] = peso;
    }
   
   /* for(int i = 0; i < MAX; i++){
        printf("%lf\n", pesos[i]);
    }*/


    printf("Digite o valor do LIMIAR: \n");

    double limiar;
    scanf("%lf", &limiar);
  
    if(fneuronio(entradas, pesos,limiar, MAX) == 1)
        printf("Neurônio ativado!\n");
    else
        printf("Neurôno inibido!\n");
   
    return 0;
}

int fneuronio(double *ent, double *pes, double limiar, int max) {
    double SOMAP = 0;
    
    for(int i = 0; i < max; i++){
        SOMAP += (*(ent+i)) * (*(pes+i));
    }
    
    int *pont1, *pont2, excitado, inibido;
    excitado = 1;
    inibido = 0;
    pont1 = &excitado;
    pont2 = &inibido;

    if(SOMAP > limiar)
        return *pont1;
    else
        return *pont2;
}
