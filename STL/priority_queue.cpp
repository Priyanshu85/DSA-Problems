#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Max Heap
    priority_queue <int> maxi;
    
    // Min Heap
    priority_queue < int, vector<int> , greater<int> > mini;

    maxi.push(10);
    maxi.push(100);
    maxi.push(20);

    mini.push(10);
    mini.push(17);
    mini.push(1);
    mini.push(12);

    int ma_s = maxi.size();
    int mi_s = mini.size();

    cout << "Max heap" << endl;

    for (int i=0; i<ma_s; i++){
        cout << maxi.top() << endl;
        maxi.pop();
    }

    cout << endl;
    cout << "Min heap" << endl;
    
    for (int i=0; i<mi_s; i++){
        cout << mini.top() << endl;
        mini.pop();
    }


    return 0;
}