#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< vector <int> > matrix{
              {1, 2, 3}, 
              {4, 5, 6},
              {7, 8, 9}
        };
    
    int i, j, k, l;
    int flag = 0;
    int element;

    cout << "Enter element to check if present in Matrix : ";
    cin >> element;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if (matrix[i][j]==element){
                flag = 1;
                    k = i;
                    l = j;
            }
    
    if (flag == 0)
        cout << "Element not found" << endl;
    else
        printf("Element present at (%d, %d)\n", k+1, l+1);

    return 0;
}