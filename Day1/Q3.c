#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number N=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The Factorial of %d is %d",n,fact);
}