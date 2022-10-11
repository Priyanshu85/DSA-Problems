#include<stdio.h>
    int main(){
        int arr[5],i,j,temp,min;
        printf("Enter 5 elements");
        for(int i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<4;i++){
            min=i;
            for(j=i+1;j<5;j++){
                if(arr[j]<arr[min])
                    min=j;
                
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            }

        }

        printf("Sorted arrays");
        for(int i=0;i<5;i++){
            printf("%d",arr[i]);
        }

        return 0;
    }
       
  