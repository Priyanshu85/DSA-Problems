// #include <iostream>
// #include <cmath>
#include "/Users/nishant/bits/stdc++.h"
using namespace std;

bool tests(int* q, int c, int n){ //okay function
    
    for(int i = 0; i < c; i++)//diagonal test
        //q[i]/n=row
        //q[i]%n=column
         //                 Neeche                                          Upar
        if((q[i]/n) + (q[i]%n) == (q[c]/n) + (q[c]%n) || ((q[i]/n) - (q[i]%n) == (q[c]/n) - (q[c]%n)))
            return false;
    return true;
}

int factorial(int n) { //return factor of n
    if(n == 1) return 1;
    return n * factorial(n-1);
}

void backtrack(int &c, int count, int n, int k, int q[]){ //backtrack function
    c--;
    if(c==-1){ //if off board
        cout<<"bishops: "<<k<<"\n board: "<<n<<"\n solutions: "<<count/factorial(k)<<endl;
        delete []q;
        exit(1);
    }
}



int main(){
    int n, k, count = 0;
    //get user input k=bishops n=board
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of k: ";
    cin >> k;
    
    while(n <= 0 || k <= 0){ //test inputs
        cout << "Enter value of n: ";
        cin >> n;
        cout << "Enter value of k: ";
        cin >> k;
    }
    
    int* q = new int[k]; //new from heap
    q[0] = 0; //set first position
    int c = 1; //bishop number
    
    bool from_backtrack = false;
    
    while(true){ //look for solutions
        
        while(c < k){
           
            if(!from_backtrack) 
                q[c] = -1; //set c=-1
            
            from_backtrack = false;
            
            while(q[c] < n*n){ //if q[c] less than size of board
                q[c]++;
                
                if(q[c] == n*n) { //if q[c] equal size of board
                    backtrack(c, count, n , k, q);
                    from_backtrack = true;
                    continue;
                }
                
                if(tests(q, c, n)){// this part say it's good or not
                    c++;
                    break;
                }
            }
        }
        
        count++;
        backtrack(c, count, n , k, q);
        from_backtrack = true;
        
    }
    return 0;
}