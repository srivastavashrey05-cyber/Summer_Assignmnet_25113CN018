#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Number N");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    } 
    printf("The Sum of First N Natural Number is %d",sum);
    return 0;   

}
