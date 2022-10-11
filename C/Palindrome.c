#include<stdio.h>

int main(){
    int n,r,rev=0,m;
    printf("Enter the integer");
    scanf("%d",&n);
    m=n;
    while(n>0){
       r=n%10;
       
       rev=(rev*10)+r;
       n=n/10;

    }
    printf("reverse of the number is %d\n",rev);

    if(m==rev){
        printf("It is a palindrom\n ");

    }
    else
        printf("It is not a palindrom\n");
    return 0;

}