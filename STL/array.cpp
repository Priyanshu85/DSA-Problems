#include <iostream>
#include <array>
using namespace std;

void fucking_print_the_array(array <int,4> arr){
    for (int i=0; i<arr.size(); i++)
        cout << arr.at(i) << endl;
}



int main(){
    array <int,4> a = {1, 2, 3, 4};
    array <int,4> b = {5, 3, 2, 1};
    int s = a.size();
    a.swap(b);
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.begin() << " " << a.end() << endl;
    cout << a.at(0) << " " << a.at(1) << " " << a[2] << " " << a[3] << endl;
    cout << s << endl;

    fucking_print_the_array(a);

    return 0;
}