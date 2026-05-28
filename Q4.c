#include<stdio.h>
int main(){
    int n,n1,count;
    printf("ENter the number n=");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        n1=n1/10;
        count++;
    }       
    printf("The number of digits in %d is %d",n,count);
    return 0;
}
