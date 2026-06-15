#include<stdio.h>
int main(){
    int rows,column;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&rows,&column);
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter the elememts of first matrix");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }

    printf("Enter the elememts of second matrix");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&b[i][j]);
        }

    printf("Sum of the two matrices is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    }
}      
}