#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("before swapping %d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping %d %d\n",a,b);
    
}