#include <iostream>
using namespace std;

// print all subsequences of string
void substrings(string s){
    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            for(int k=i; k<j+1; k++){
                cout << s[k];
            }
            cout << "\t";
        }
    }
}

int main(){
    string s = "nishant";
    substrings(s);
    return 0;
}