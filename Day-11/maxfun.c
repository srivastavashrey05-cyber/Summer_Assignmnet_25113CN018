#include<stdio.h>
void max(int x,int y);
int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    max(a,b);
    return 0;
}
void max(int x, int y)
{
    printf("Largest number = %d", (x > y) ? x : y);
}