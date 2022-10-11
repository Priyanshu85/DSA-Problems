#include<stdio.h>

int main(){
    int n,r,sum=0,m;

    printf("Enter the integer");
    scanf("%d",&n);
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;

    }
    if(sum==m){
       printf("It is a armstrong number \n");
    }
    else{
        printf("It is not a armstrong number \n");
    }
}