#include <iostream>
using namespace std;

int main(){   
    int r = 5, c = 5;
    int ar[5][5] = {{ 1,  2,  3,  4,  5},
                    { 6,  7,  8,  9, 10},
                    {11, 12, 13, 14, 11},
                    {16, 17, 18, 19, 12},
                    {21, 22, 23, 24, 13}
    };
 //// INPUT IS GIVEN ABOVE

    int i, dir=0;
    int top = 0; // ->    # R // D 0
    int right = c-1; // I   # C // D 1
    int bottom = r-1; // <- # R // D 2
    int left = 0; // ^    # C // D 3

    while(left<=right && top<=bottom){
        if(dir==0){
            for(i=left; i<=right; i++)
                cout << ar[top][i] << " ";
            top++;
        }
        else if(dir==1){
            for(i=top; i<=bottom; i++)
                cout << ar[i][right] << " ";
            right--;
        }
        else if(dir==2){
            for(i=right; i>=left; i--)
                cout << ar[bottom][i] << " ";
            bottom--;
        }
        else if(dir==3){
            for(i=bottom; i>=top; i--)
                cout << ar[i][left] << " ";
            left++;
        }
        dir++;
        dir %= c;

        // cout << endl << "DIRECTION : " << dir <<endl;
    }

    return 0;
}