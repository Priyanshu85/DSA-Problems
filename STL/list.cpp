#include <iostream>
#include <list> // Doubly Linked List

using namespace std;

int main(){
    list <int> l;

    // Copying a list;
    // list <int> m(l);

    l.push_back(10);
    l.push_back(12);
    l.push_front(8);

    for (int i: l){
        cout << i << endl;
    }

    return 0;
}