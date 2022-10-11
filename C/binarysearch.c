#include<stdio.h>
int binarySearch(int arr[], int low, int high, int key){
    while (low <= high) {
        int mid = low + (high - low) / 2;
 
        // Check if x is present at mid
        if (arr[mid] == key)
            return mid;
 
        // If x greater, ignore left half
        if (arr[mid] < key)
            low = mid + 1;
 
        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}
 
int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key= 10;
    int result = binarySearch(arr, 0, n - 1, key);
    if(result == -1){
        printf("Element is not present in array");
    }

    else
        printf("Element is present at index %d",result);
    return 0;
}