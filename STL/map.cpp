#include <iostream>
#include <map> // RED BLACK TREE or BALANCE TREE [O(logn)]

using namespace std;

int main(){
    map <string, int> m;
    m["Nishant"] = 19;
    m["Madhavan"] = 20;
    m["Zoxo"] = 10;

    for (auto i : m){
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}

// Multiset Multimap + Unordered
