#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> v;
    vector <char> char_arr;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    // cout << v.front() << endl;
    // cout << v.back() << endl;

    v.pop_back();
    v.pop_back();

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    // cout << v.front() << endl;
    // cout << v.back() << endl;

    v.clear();

    cout << v.capacity() << endl;
    cout << v.size() << endl;

    cout << v.at(3);

    // vector <int> a(4, 1) -> initialise 4 spaced vector with 1 as its elements.

    return 0;
}