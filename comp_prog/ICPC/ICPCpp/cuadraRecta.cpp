#include <iostream>
#include <cstdio>
int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a*a==b*c){
        printf("ambos");
    }else if (a*a>b*c){
        printf("cuadrado");
    }else{
        printf("rectangulo");
    }
    return 0;
}