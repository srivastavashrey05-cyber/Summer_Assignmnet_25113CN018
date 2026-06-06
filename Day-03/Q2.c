#include<stdio.h>
int main(){
    int n,flag=0;
    printf("ENter the range for prime numbers=");
    scanf("%d",&n);
    printf("Prime numbers between 1 and %d are:\n",n);
    for(int i=2;i<=n;i++){
        flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
}