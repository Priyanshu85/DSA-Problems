#include <iostream>
using namespace std;

int main(){
    string sentence = "pakepedpepakapapitapinkukhayepakapapita";
    int count_array[20];  // VALUE
    char char_array[20]; // KEY
    int count=0;
    int k=0;
    int flag=1;


    for(int i=0; i<sentence.length(); i++){
        for(int j=i+1; j<sentence.length(); j++){
            if (sentence[i]==sentence[j]){
                count++;
            }
        }
        for(int l=0; l<=k; l++){    
            if (sentence[i]==char_array[l]){
                flag = 0;
                continue;
            }
            else flag = 1;
        }
        if (flag == 1){
            count_array[k] = count;
            char_array[k] = sentence[i];
            k++;
            count = 0;
        }
        
    }

    // OUTPUT   
    for (int i=0; i<k; i++){
        if (count_array[i]==1)
            cout << char_array[i] << endl;
    }

    return 0;
}