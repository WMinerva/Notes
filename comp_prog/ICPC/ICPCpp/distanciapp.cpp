#include <iostream>
#include <cmath>
#include <cstdio>
int main(){
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float distancia = pow((pow(x1-x2,2)+pow(y1-y2,2)),0.5);
    printf("%.2f\n", distancia);   
}