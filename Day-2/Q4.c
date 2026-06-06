#include<stdio.h>
int main(){
    int n, rev=0,n1,n2;
    printf("Enter the number n=");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        n2=n%10;
        rev=rev*10+n2;
        n=n/10;
    }
    printf("The reverse of the number is =%d\n",rev);
    if(rev==n1){
        printf("Entered number is a palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}
