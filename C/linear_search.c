#include <stdio.h>  
int linearSearch(int arr[], int n, int key) {  
  // Going through array sequencially  
  for (int i = 0; i < n; i++)  
    {  
        if (arr[i] == key)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int arr[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array  
  int key = 41; // value to be searched  
  int n = sizeof(arr) / sizeof(arr[0]); // size of array  
  int res = linearSearch(arr, n, key); // Store result  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", arr[i]);   
  printf("\nElement to be searched is  %d", key);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  