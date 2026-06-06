#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the number fo GCD=");
    scanf("%d%d",&a,&b);
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("GCD is %d",a);
    return 0;
}