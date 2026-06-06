#include<stdio.h>
int main(){
    int n, rev=0,n1;
    printf("Enter the number n=");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        n1=n%10;
        rev=rev*10+n1;
        n=n/10;
    }
    printf("The reverse of the number is =%d",rev);
    return 0;
}
