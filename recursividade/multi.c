#include <stdio.h>

int multiplica(int a, int b) {
    if(b == 1)
        return a;
    else 
        return multiplica(a, b-1) + a;
}

int main() {
    
    int a, b;

    scanf("%d%d", &a, &b);

    int mult = multiplica(a, b);

    printf("%d", mult);
    return 0;
}
