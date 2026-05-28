#include<stdio.h>
int main(){
    int n,t;
    printf("Enter the number for table ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        t=n*i;
        printf("%d * %d = %d\n",n,i,t);
    }
    return 0;
}