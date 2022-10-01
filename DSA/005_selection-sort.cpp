#include "/Users/nishant/bits/stdc++.h"
using namespace std;

void selectionSort(int arr[], int n) {
    
    for (int i=0; i<n; i++) { // pass i
        int minValIdx = i;

        for (int j=i+1; j<n; j++) {
            // if new smaller value found: update
            if (arr[j] < arr[minValIdx]) {
                minValIdx = j;
            }
        }
        // Now we have found the minimal value possible to be placed at right index
        // swap value at idx i and idx j
        int temp = arr[minValIdx];
        arr[minValIdx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[5] = {1, 10, 4, 8, 6};
    
    selectionSort(arr, 5);

    // print array after sort
    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}