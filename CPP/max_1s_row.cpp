#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int row_with_max_ones(vector<vector <int> > matrix, int r, int c){
    // r -> Row | c -> Column
    int i, j;
    int count=0;
    int temp_count = 0;
    int prev_count=0, result;

    for (i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(matrix[i][j]==1)
                count++;
                // cout << "count : " << count << endl;
        }
        temp_count = count;
        count = 0;
        if (prev_count < temp_count){
            prev_count = temp_count;
            result = i;
            // cout << "result : " << result << endl;
        }
    }

    return result;
}

int main(){
    // INPUT
    vector<vector <int> > matrix{
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    int r = 4, c = 4;
    // INPUT ABOVE

    int arr[10];

    int result = row_with_max_ones(matrix, r, c);

    cout << "Row " << result << " has maximum 1's" << endl;

    return 0;
}