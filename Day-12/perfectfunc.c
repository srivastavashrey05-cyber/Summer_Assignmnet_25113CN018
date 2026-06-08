#include<stdio.h>
void perfect(int x);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    perfect(a);
    return 0;
}  
void perfect(int x){
    int i,sum=0;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }
    }
    if(sum==x){
        printf("%d is a perfect number", x);
    }
    else{
        printf("%d is not a perfect number", x);
    }
}