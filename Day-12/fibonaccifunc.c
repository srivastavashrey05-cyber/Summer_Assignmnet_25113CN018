#include<stdio.h>
void fib(int x);
int main(){ 
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    fib(a);
    return 0;
}
void fib(int x){
    int a=0,b=1,c,i;
    if(x==1){
        printf("%d",a);
    }
    else if(x==2){
        printf("%d %d",a,b);
    }
    else{
        printf("%d %d ",a,b);
        for(i=3;i<=x;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
}