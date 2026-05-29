#include<stdio.h>
int main(){
    int n,prod=1,n1;
    printf("Enter the number n=");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        n1=n%10;
        prod=prod*n1;
        n=n/10;
    }
    printf("The product of the digits in %d is %d",n1,prod);
    return 0;
}