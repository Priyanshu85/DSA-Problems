#include "/Users/nishant/bits/stdc++.h"
using namespace std;

int findUnique (int arr[], int n) { // donot accept 0 in array
    int ans = 0; // since var ans is zero

    for (int i=0; i<n; i++) {
        ans^=arr[i];
    }

    return ans;
}

int main(){
    int arr[] = {100, 2, 3, 4, 10, 4, 2, 3, 10, 100, 500};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << findUnique(arr, n) << endl;

    return 0;
}