#include<stdio.h>
int main(){
    int n,n1,num,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        num=n1%10;
        int fact=1;
        for(int i=1;i<=num;i++){
            fact*=i;
        }
        sum+=fact;
        n1/=10;
    }
    if(sum==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
    return 0;   
}