#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping %d %d\n",a,b);
    
}