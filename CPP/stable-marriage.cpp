#include <iostream>
using namespace std;

bool ok(int q[], int c)
{    // Finish this code
    static int mp[3][3] = {{0, 2, 1},  // Man#0's preferences
                           {0, 2, 1},  // Man#1's preferences
                           {1, 2, 0}}; // Man#2's preferences

    static int wp[3][3] = {{2, 1, 0},  // Woman#0's preferences
                           {0, 1, 2},  // Woman#1's preferences
                           {2, 0, 1}}; // Woman#2's preferences

    for (int i = 0; i < c; i++)
    {
        if (q[i] == q[c]) // if the same women is married to two different man return false
            return false;

        // if (women#c) and (woman#i's husband) both like each other more than their own spouse
        if ((wp[q[c]][c] > wp[q[c]][i]) && (mp[i][q[i]] > mp[i][q[c]]))
            return false;

        // if (Man#c) and (Man#i's wife) both like each other more than their own spouse
        if ((mp[c][q[c]] > mp[c][q[i]]) && (wp[q[i]][i] > wp[q[i]][c]))
            return false;
    }

    // return true if marriage is stable
    return true;
}

void printing(int q[], int c)
{
    static int solution = 0;
    cout << "Solution #" << ++solution << ":\nMan\tWoman\n";
    // Finish this printing function
    for (int i = 0; i < c; i++)
        cout << i << "\t" << q[i] << endl;
    cout << endl;
}

int main()
{
    // The main function is exactly the same as 1D Queens.
    int q[3] = {0}, c = 0;
    q[c] = 0;
    c++;
    while (c >= 0)
    {
        if (c > 2)
        {
            printing(q, c);
            c--;
        }
        else
            q[c] = -1;
        while (c >= 0 && c < 3)
        {
            q[c]++;
            if (q[c] == 3) // If you have passed the end of the column, backtrack
                c--;
            else
            {
                if (ok(q, c) == true) // Otherwise, call the ok function.  If it returns true, go back to the beginning of the outer loop.
                {
                    c++;
                    break;
                }
            }
        }
    }
    return 0;
}