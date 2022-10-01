#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(18);
    v.push_back(20);
    v.push_back(22);

    cout << binary_search(v.begin(), v.end(), 16) << endl; // 0 or 1
    


    return 0;
}