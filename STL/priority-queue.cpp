#include "/Users/nishant/bits/stdc++.h"
using namespace std;

int main(){
    priority_queue<string, vector <string>, greater<string>> pq;
    pq.push("avenger");
    pq.push("strongest");
    pq.push("this");

    
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}