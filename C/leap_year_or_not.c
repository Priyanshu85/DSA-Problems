#include<stdio.h>

int main(){
    int year;
    printf("check leap year for :-");
    scanf("%d",&year);

    //leap year is divisble by 400

    if(year%400==0){
       printf("%d is a leap year",year);
    }
    
    //leap must not be a century year
    else if(year%100==0){
       printf("%d is not a leap year",year);
    }

    //leap year is not divisible is 100
   
    else if(year%4==0){
    printf("%d is a leap year",year);
    }

    //all years are not leap years
    else{
       printf("%d is not a leap year",year);
    }
    return 0;   
}