#include <stdio.h>

int mdc(int a, int b) {
   
    int q = a / b;
    int r = a % b;

    a = b;
    b = r;
    
    if(b == 0)
        return a;
    else    
        return mdc(a, b);
}


int main() {
    
    return 0;
}
