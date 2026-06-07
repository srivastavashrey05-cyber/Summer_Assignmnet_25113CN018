#include<stdio.h>
void prime(int x);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int x){
    int i,flag=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number.",x);
    else
        printf("%d is not a prime number.",x);
}