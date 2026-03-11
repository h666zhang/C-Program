#include <stdio.h>
#define PI 3.14
int main(void){
    float r,h,C1,Sa,Sb,Va,Vb;
    scanf("%f %f",&r,&h);
    C1=2*PI*r;
    Sa=PI*r*r;
    Sb=4*PI*r*r;
    Va=4*PI*r*r*r/3.0;//最费解的一集
    Vb=Sa*h;
    printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f" ,C1,Sa,Sb,Va,Vb);
    return 0;
}