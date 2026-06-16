#include<stdio.h>
int main(){
    int n,i,j,a[10][10],sum=0;
    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                printf("The matrix is not symmetric");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric");
    return 0;
    
}