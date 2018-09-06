#include <stdio.h>

void mover_disco (int n, char pino_origem , char pino_dest, char pino_aux ){
    if (n==1) {
        printf("Mover disco 1 da torre %c para a torre %c\n", pino_origem, pino_dest);
    }
    else{
        mover_disco(n-1,pino_origem, pino_aux, pino_dest);
        printf("Mover disco %d da torre %c para a torre %c\n", n, pino_origem, pino_dest);
        mover_disco(n-1, pino_aux, pino_dest, pino_origem);
    }
}

int main(){
    
    int discos;
    
    printf("TORRE DE HANOY\n\n");
    
    printf("Digite a quantidade de discos: \n");
    scanf("%d",&discos);
    
    mover_disco(discos,'A','C','B');
    
    return 0;
}
