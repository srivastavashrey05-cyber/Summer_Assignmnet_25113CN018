#include<stdio.h>
void palin(int x);
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    palin(a);
    return 0;
}
void palin(int x){
    int num,rev=0,temp;
    temp=x;
    while(temp!=0){
        num=temp%10;
        rev=rev*10+num;
        temp=temp/10;
    }
    if(rev==x){
        printf("%d is a palindrome number", x);
    }
    else{
        printf("%d is not a palindrome number", x);
    }
}