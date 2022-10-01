#include "/Users/nishant/bits/stdc++.h"
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i=1; i<n; i++) {
        int j=i-1;
        int temp = arr[i];
        
        while (arr[j] > temp) { // while bigger elem: Right Shift
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}

int main(){

    int arr[5] = {1, 10, 9, 5, 3};

    insertionSort(arr, 5);

    // array output after sort
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    return 0;
}