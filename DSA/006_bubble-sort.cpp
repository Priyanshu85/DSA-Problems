#include "/Users/nishant/bits/stdc++.h"
using namespace std;

void bubbleSort(int array[], int size) {
    // loop to access each array element
    for (int step = 0; step < size; ++step) {
        // loop to compare array elements
        bool swapped=false;
        for (int i = 0; i < size - step; ++i) {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1]) {
                swapped=true;
                // swapping elements if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }

        if (!swapped) break;
    }
}

int main()
{
    int arr[5] = {1, 10, 9, 5, 3};

    bubbleSort(arr, 5);

    // array output after sort
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    return 0;
}