#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <string> st;
    st.push("Nishant");
    st.push("Mad");
    st.push("Elemental");
    st.push("Void");
    st.pop();
    
    // Doesnot work
    // for (int i: st){
    //     cout << i << endl;
    // }

    // cout << st.empty() << endl; // gives 0 or 1
    cout<<st.top()<<endl; // TOP ELEMENT
    cout<<st.size()<<endl; // No. of elements

    return 0;
}