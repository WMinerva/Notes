#include <iostream>
#include <cstdio>
int main(){
    double base, altura;
    scanf("%lf %lf", &base, &altura);
    double area = base*altura/2;
    printf("%.6lf\n", area);   
}