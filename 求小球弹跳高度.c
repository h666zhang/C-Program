#include <stdio.h>
#include <math.h>
int main(void){
    int M,N;
    scanf("%d %d",&M,&N);// M是初始高度 N是小球触地次数
    double height=M*pow(0.5,N);//第N次高度
    double current_M=M,total_M=M;
    for(int i=1;i<N;i++){ //第一次已经计算过了total_M=M 所以从第二次算起 也就是4次   
        current_M/=2;//每次上升一般
        total_M+=2.0*current_M;//一上一下俩次距离
    }
    printf("%.2f %.2f",height,total_M);
    return 0;
}