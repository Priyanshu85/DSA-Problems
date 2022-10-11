#include<stdio.h>

int main(){
    int a,b,L;
    printf("enter two integers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            break;

    printf("LCM is%d\n", L );        
    
}