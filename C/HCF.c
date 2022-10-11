#include<stdio.h>

int main(){
    int  H,a,b;
    printf("input two integers ");
    scanf("%d%d",&a,&b);

    for(H=a<b?a:b;H>=1;H--){
       if(a%H==0 && b%H==0)
        break;
    }
    printf("HCF is %d",H);
    
}
