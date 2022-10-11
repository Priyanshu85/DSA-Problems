#include<stdio.h>

int main(){
    int n,r,rev=0;
    printf("Enter the integer");
    scanf("%d",&n);
    while(n>0){
       r=n%10;
       
       rev=(rev*10)+r;
       n=n/10;

    }
    printf("reverse of the number is %d",rev);
    return 0;

}