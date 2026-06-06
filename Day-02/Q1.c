#include<stdio.h>
int main(){
    int n,n1,sum=0;
    printf("Enter the number n=");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        n1=n%10;
        sum=sum+n1;
        n=n/10;
    }
    printf("The sum of the digits in %d is %d",n1,sum);
    return 0;
}