#include<stdio.h>

int main(){
    int i,max,smax;
    int arr[7]={1,2,3,4,5,8,9};
    

    
    max=arr[0];
    
    for(i=0;i<7;i++){
      if(arr[i] > max){
		       smax = max;
		       max = arr[i];
	    }
	    else if(arr[i] > smax && arr[i]!=max)
	    {
  	     smax= arr[i];
	    }	     
      
    }
    printf("max element is %d\n",max);
    printf("second max element is %d",smax);
}