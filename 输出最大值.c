#include <stdio.h>
int main(void){
    int max,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    max=a>b?a:b;
    max=c>max?c:max;
    printf("%d",max);
}