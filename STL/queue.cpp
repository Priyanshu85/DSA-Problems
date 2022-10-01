#include <iostream>
#include <queue>  // FIFO
using namespace std;

int main(){
    queue <string> st;

    st.push("nishant");
    st.pop();

    cout << st.empty() << endl;

    return 0;
}