#include <iostream>
using namespace std;

// countAndSay
string countAndSay(string num){
    int count = 1;
    string value;
    string result = "";

    if (num == "1")
        return "1";
    if (num == "2")
        return "11";


    for(int i=0; i<=num.length(); i++){
        if (i == 0){
            count = 1;
            value = num[0];
        }

        else if (num[i]!=num[i-1]){
            result += to_string(count) + value;

            value = num[i];
            count = 1;
        }
        else
            count++;
    }

    return result;
}

int main(){
    string number; // input

    cout << "Enter a number : ";
    cin >> number;

    string result = countAndSay(number); // Passing value to function
    cout << result << endl; // Output

    return 0;
}