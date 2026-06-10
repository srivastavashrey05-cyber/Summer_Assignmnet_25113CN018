#include<stdio.h>
int main(){
    int n,i,elem,found=0;
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
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found at index %d",i);
    }
    else{
        printf("Element not found in the array");
    }
    return 0;   
}