#include<stdio.h>

int main(){
    double a,b;
    char op;
    printf("Enter first number");
    scanf("%lf",&a);
    printf("Operation to be performed");
    scanf("%s",&op);
    printf("Enter second number");
    scanf("%lf",&b);
    
    if(op=='+'){
        printf("%lf",(a+b));
    }    
    else if (op=='-')
    {
         printf("%lf",(a-b));
    }
    else if(op=='*'){
        printf("%lf",(a*b));
    }
    else if(op=='/'){
        printf("%lf",(a/b));
    }
    else{
       printf("invalid operation");
    }
    return 0;
}


