#include<stdio.h>
int main(){
    int n;
    printf("Enetr the numnber");
    scanf("%d",&n);
    printf("TH prime Factors of %d are ",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}