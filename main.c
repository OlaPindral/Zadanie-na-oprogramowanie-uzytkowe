#include <stdio.h>
int Policz(int a,int b){
    return a*b;
}
int main() {
    int a=2;
    int b=3;
    printf("W pierwszym branchu: Policz(2*3)%d ", Policz(a,b));

    return 0;
}
