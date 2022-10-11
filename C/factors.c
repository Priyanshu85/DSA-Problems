#include<stdio.h>

int main(){
    int n;
    printf("Enter the integer");
    scanf("%d",&n);

    printf("Factor of n are : ");

    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d \n",i);
            
        }
    }


    return 0;

}