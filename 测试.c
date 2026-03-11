#include <stdio.h>
int main(void){
    for(int a=0;a<=5;a++){
        if(a%5==0) continue;
        printf("%d:",a);
    }
    return 0;
}