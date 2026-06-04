#include<stdio.h>
int main(){
    int i,j,rows,num;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=0;j<i;j++){
            num=j+1;
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}