#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(0);

    // for (int i: d){
    //     cout << i << endl;
    // }

    cout << d.front() << endl;

    // d.clear();
    // d.erase(d.begin(), d.begin()+1);
    // d.erase(d.begin());

    cout << d.size() << endl;
    cout << d.max_size() << endl;

    return 0;
}