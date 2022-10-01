#include "/Users/nishant/bits/stdc++.h"
using namespace std;

// first and last position of value in a sorted array | else return -1
int firstOcc(vector<int> arr, int key) {
    int lo=0, hi=arr.size();
    int ans=-1;

    while (lo < hi) {
        int mid = lo + (hi-lo)/2;

        if (arr[mid] == key) {
            ans = mid;
            hi = mid - 1;
        }

        else if (arr[mid] > key) {
            hi = mid - 1;
        }

        else if  (arr[mid] < key) {
            lo = mid + 1;
        }
    }

    return ans;
}

int lastOcc(vector<int> arr, int key) {
    int lo=0, hi=arr.size();
    int ans=-1;

    while (lo < hi) {
        int mid = lo + (hi-lo)/2;

        if (arr[mid] == key) {
            ans = mid;
            lo = mid + 1;
        }

        else if (arr[mid] > key) {
            hi = mid - 1;
        }

        else if  (arr[mid] < key) {
            lo = mid + 1;
        }
    }

    return ans;
}

vector<int> findFirstAndLastOccurance(vector<int> arr, int key) {
    int a = firstOcc(arr, key);
    int b = lastOcc(arr, key);

    return {a, b};
}

// Find peak of the mountain in array value
int findPeak(vector<int> arr) {
    int hi = arr.size();
    int lo=0;
    
    while (lo < hi) {
        int mid = (hi-lo)/2 + lo;

        if (arr[lo] < arr[lo + 1]){
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }   
    }

    return lo;
}

int main() {
    vector<int> arr{1, 10, 24, 24, 24, 24, 30, 48, 67, 67, 45, 10, 5, 2, 0};

    cout << findPeak(arr) << endl;

    return 0;
}