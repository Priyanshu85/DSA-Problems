#include<stdio.h>

int main(){
    int i,n,sum=0,numbers;
    float avg;
    printf("Enter the integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&numbers);
        sum=sum+numbers;
    }
    avg=sum/n;
    printf("average of %d integers is %f",n,avg);

}