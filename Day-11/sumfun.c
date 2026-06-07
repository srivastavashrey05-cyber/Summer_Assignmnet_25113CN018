#include<stdio.h>
void sum(int x,int y);
int main(){
    int a,b;
    printf("ENter the numbers:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int x,int y){
    printf("Sum is: %d",x+y);
}   