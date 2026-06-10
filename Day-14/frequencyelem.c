#include<stdio.h>
int main(){
    int n,i,elem,count=0;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&elem);
    for(i=0;i<n;i++){
        if(arr[i]==elem){
            count++;
        }
    }
    printf("Frequency of %d is %d",elem,count); 
    return 0;
}   