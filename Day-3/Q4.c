#include<stdio.h>
int main(){
    int a,b,LCM;
    printf("Enter the numbers=");
    scanf("%d%d",&a,&b);
    LCM=(a>b)?a:b;

    while(1){
        if(LCM%a==0 & LCM%b==0){
            printf("LCM is =%d",LCM);
            break;
        }
        LCM++;
    }
    return 0;
}