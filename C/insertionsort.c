#include<stdio.h>
    int main(){
        int arr[5],i,j,key;
        printf("Enter 5 elements");
        for(int i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<=10;i++){
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j=j-1;

            }
            arr[j+1]=key;
        }
        printf("Sorted arrays");
        for(int i=0;i<5;i++){
            printf("%d",arr[i]);
        }

        return 0;
    }
  