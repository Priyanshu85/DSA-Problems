#include <iostream>
#include <set>

using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);

    // for (int i : s){
    //     cout << i << endl;
    // }

    cout << s.count(15) << endl; // If present or not

    set<int>::iterator itr = s.find(15); // Find returns an iterator

    cout << &itr << endl; // *itr returns element

    return 0;
}