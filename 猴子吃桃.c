#include <stdio.h>
int main(void){
    int peach=1,n;
    scanf("%d",&n);
    for(int i=n-1;i>=1;i--)  peach=(peach+1)*2;
    printf("%d",peach);
    return 0;
}