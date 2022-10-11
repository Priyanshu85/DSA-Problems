#include<stdio.h>

int main(){
    int fact=1,n,i;
    printf("Enter the integer");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
         
    }
    printf("factorial of %d is %d",n,fact);    
}