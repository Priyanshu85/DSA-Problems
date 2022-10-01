#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> matrix{{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int temp;
    int size = matrix.size(); // 4

    for (int i=0; i<size-2; i++){ // 2
    // cout << "i : " << i << endl;
        for (int j=i; j<size-1; j++){ // 3
            cout << j << endl;
            temp = matrix[i][j];
            cout << "matrix[i][j] : " << matrix[i][j] << " " << "matrix[size-1-i][j] : " << matrix[size-1-i][j] << " " << "matrix[i][size-1-j] : " << matrix[i][size-1-j] << endl;
            matrix[i][j] = matrix[size-1-i][j];
            matrix[size-1-i][j] = matrix[size-1-i][size-1-j];
            matrix[size-1-i][size-1-j] = matrix[i][size-1-j];
            matrix[i][size-1-j] = temp;
        }
    }

    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

        // for (int i=0; i<size; i++){
        //     for (int j=0; j<size; j++){
        //         cout << result[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // [0][0] ? [0][2]
        // [0][1] ? [1][2]
        // [0][2] ? [2][2]
        
        // [1][0] ? [0][1]
        // [1][1] ? [1][1]
        // [1][2] ? [2][1]
            
        // [2][0] ? [0][0]
        // [2][1] ? [1][0]
        // [2][2] ? [2][0]
        
        //         = matrix[i][j] == matrix[j][size-1-i] =