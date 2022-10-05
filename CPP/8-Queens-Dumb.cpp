#include <iostream>
#include <cmath>
using namespace std;

bool ok(int r[]){ 
    
    // C represents COL ki VALUE and R[C] represents ROW ki VALUE
    // i iterate on r matrix (R values) values [7 3 0 2 5 1 6 4]

    for (int c=0; c<8; c++){
        for (int i=0; i<c; i++){

            /*                                   \         /
                                                  \       /
            c-i==abs(r[c]-r[i])   ... Direction [  \ and /  ]  This represents, just previous diagonal column (it represents,
            both Left and Right hand adj. diagonal columns), so we check the 
            subtraction of values of rows shouldn't be equal to the subtraction of values of column.
            */

           /*
           r[c]==r[i]  ... Direction [  <-->  ]  This represents, two rows must not be same.
           */


            //  diagonal check      // same row check
            if (c-i==abs(r[c]-r[i]) || r[c]==r[i])
                return false;
        }
   }
    return true;
}
void print(int r[], int count){
    cout << endl << "Solution : " << count << endl;
    cout << "Config: ";
    for (int i=0; i<8; i++)
        cout << r[i] << ' ';
    cout << endl;
    int j=0;
    while (j<8){
        for (int i=0; i<8; i++){
            if (j==r[i])
                cout << 1 << ' ';
            else
                cout << 0 << ' ';
        }
        cout << endl;
        j++;
    }
    cout << endl << endl;
}

int main() {
    int r[8] = {0};//set board
    int count=0;
    for (r[0]=0; r[0]<8; r[0]++){
        for (r[1]=0; r[1]<8; r[1]++){
            for (r[2]=0; r[2]<8; r[2]++){
                for (r[3]=0; r[3]<8; r[3]++){
                    for (r[4]=0; r[4]<8; r[4]++){
                        for (r[5]=0; r[5]<8; r[5]++){
                            for (r[6]=0; r[6]<8; r[6]++){
                                for (r[7]=0; r[7]<8; r[7]++){
                                    if (ok(r))
                                        print(r, ++count);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}