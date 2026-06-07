#include<stdio.h>
void fact(int x);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    fact(a);
    return 0;
}
void fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }
    printf("Factorial of %d = %d", x, fact);
}