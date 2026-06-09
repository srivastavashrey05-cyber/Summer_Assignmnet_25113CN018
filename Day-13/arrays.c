#include<stdio.h>
int main(){
    int arr[5],n,i;
    printf("Enter the elements in the array:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are:\n");
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}