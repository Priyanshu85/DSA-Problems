#include <iostream>
#include <random>
using namespace std;

char genereateRandomChar(){
    char c = 'A';
    // Fast SEEDING -> Concept Unknown
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    /* using nano-seconds instead of seconds */
    srand((time_t)ts.tv_nsec);
    c = 65 + rand()%26;

    return c;
}

int main(){
    // RANDOM const generation.
    srand(time(NULL));
    int constant = rand()%20;
    // int constant = 10;
    cout << constant << endl;
    int input = -1;

    // Magic
        while(true){
            cout << "Enter a number in range [1, 20]: ";
            cin >> input;

            if (input != constant)
            for (int i=0; i<input; i++){
                for(int j=0; j<input; j++){
                    cout << genereateRandomChar();
                }
                cout << endl;
            }
            else break;
        }

    return 0;
}