// Pattern Printing
#include "/Users/nishant/bits/stdc++.h"
using namespace std;

void pattern1(int n) {
    int j=0;

    while (j++ < n) {
        int i=0;
        while (i++ < n) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)  {
    int row=0;

    while (row++ < n) {
        int col=0;
        while (col++ < row) {
            cout << char('A' + row-1) << " ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    int i=0;
    int k=1;

    while (i++ < n) {
        int j=0;

        while (j++ < i) {
            cout << k++ << " ";
        }

        cout << endl;
    }
}


int main() {
    pattern3(4);

    return 0;
}