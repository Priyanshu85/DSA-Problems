#include<stdio.h>

int main(){

    int i,n,a=0,b=1,nextnumber=0;

    printf("Enter the integer");
    scanf("%d",&n);

    printf("Fabonacci series ");
    
    for(i=0;i<n;i++){
      if(i==0){
        printf("%d ,",a);
        continue;
      }
      if(i==1){
        printf("%d, ",b);
        continue;
      }
      nextnumber=a+b;
      a=b;
      b=nextnumber;

      printf("%d ,",nextnumber);
  
    }

    return 0;

}
