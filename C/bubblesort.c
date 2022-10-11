#include<stdio.h>
    int main(){
        int arr[5],i,j,temp;
        printf("Enter 5 elements");
        for(int i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=4;i>=0;i--){
            for(j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
        printf("Sorted arrays");
        for(int i=0;i<5;i++){
            printf("%d",arr[i]);
        }

        return 0;
    }
  