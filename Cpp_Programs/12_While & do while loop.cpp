#include <bits/stdc++.h>
using namespace std;

int main() {

    //while loop does the same thing as for loop
    // the only difference is the syntax changes
    
    // int i = 1;
    // for (i <= 5; i > 0; i = i - 1) {
    //     cout << "Divyansh " << i << endl; }
    // cout << i << endl;

    int i = 1; // initialization goes here
    while (i <= 5) { // what ever is the condition goes here
        cout << "Divyansh " << i << endl;
        i = i + 1;
        // and what ever is the increment/decrement goes here at the end of the loop    
    }

// --------------------------------------------------------------------------------------------
    // do while loop
    // when i want my line to execute minimum for one time, then we use do while loop

    int j = 2;
    do {
        cout << endl << "Divyansh " << j << endl;
        j = j + 1;
    } while (j <= 1);
    // here the line will execute at least one time even if the condition is false

    cout << j << endl;
    // here the value of j will be 3 bcs the loop will execute one time

    // do while loop will execute the loop first and then check the condition
    // whereas while loop will check the condition first and then execute the loop
    // if any error occurs in while loop, the loop will not execute at all
    // but in do while loop, the loop will execute at least one time irrespective of the condition
// --------------------------------------------------------------------------------------------
    return 0;
}