#include<stdio.h>

long factorial(int);
long find_ncr(int , int);
long find_npr(int , int);
    
int main(){
        int n,r;
        long ncr,npr;
        ncr=find_ncr(ncr);
        npr=find_npr(npr);

        printf("%dC%d=%d",n,r,ncr);
        printf("%dC%d=%d",n,r,npr);

     return 0;

    }
    
long find_ncr(int n,int r){
    long result;
    result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}


long find_npr(int n,int r){
    long result;
    result=factorial(n)/factorial(n-r);
    return result;
}

long factorial(int n){
   int a;
   long result = 1;
   for (a = 1 ; a <= n ; a++){
    
        result = result*a;
        return result;

   }
    
}