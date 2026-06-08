#include<stdio.h>
void armstrong(int x);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}  
void armstrong(int x){
    int num,arm=0,temp;
    temp=x;
    while(temp!=0){
        num=temp%10;
        arm=arm+(num*num*num);
        temp=temp/10;
    }
    if(arm==x){
        printf("%d is an armstrong number", x);
    }
    else{
        printf("%d is not an armstrong number", x);
    }
}