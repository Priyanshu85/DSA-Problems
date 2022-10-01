// https://leetcode.com/problems/zigzag-conversion/

#include "/Users/nishant/bits/stdc++.h"
using namespace std;

// MyOwn Soln
string convert(string sentence, int numRows){
    int i, j=0;
    string arr[numRows-1];
    string result = "";

    while(j != sentence.length()){
        for (int i = 0; i < numRows; i++){
            if(j < sentence.length()){
                if (j > numRows && i==0) i++;
                arr[i] += sentence[j];
                j++;
            }
        }

        for (int i = numRows-2; i >= 0; i--){
            if(j < sentence.length()){
                arr[i] += sentence[j];
                j++;
            }
        }
    }

    for (int i = 0; i < numRows; i++){
        result += arr[i];
    }  
    
    return result;
}

int main(){
    string str = "PAYPALISHIRING";

    cout << convert(str, 4) << endl;

    return 0;
}

// LEETCODE soln.
// class Solution {
// public:
//     string convert(string s, int numRows) {

//         if (numRows == 1) return s;

//         vector<string> rows(min(numRows, int(s.size())));
//         int curRow = 0;
//         bool goingDown = false;

//         for (char c : s) {
//             rows[curRow] += c;
//             if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
//             curRow += goingDown ? 1 : -1;
//         }

//         string ret;
//         for (string row : rows) ret += row;
//         return ret;
//     }
// };