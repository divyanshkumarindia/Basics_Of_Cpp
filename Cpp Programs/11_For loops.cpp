#include <bits/stdc++.h>
using namespace std;

int main() {

    // in dsa, if you don't know loop, you can't do anything

/*
    cout << "Divyansh" << endl;
    cout << "Divyansh" << endl;
    cout << "Divyansh" << endl;
    cout << "Divyansh" << endl;
    cout << "Divyansh" << endl;
    // printed 5 times,
    // but what if we want to print it 500 times!
*/

    // here comes the concept of for and while loops

    for(int i = 1; i <= 5; i = i + 1) {
        cout << "Divyansh" << endl;
    } 
    // i = 1 is the initialization
    // i <= 10 is the condition at which the loop will stop
    // but at every step i have to do something to make the condition false at some point
    // this is where the increment/decrement part comes in (like i = i + 1)
    // or i++ (which means the same thing as i = i + 1)
    // or i-- (which means i = i - 1)

/* ------------------------------------------------------------------------------------
    // but now if you try to find the value of i after the loop
    cout << "Value of i after the loop is: " << i << endl;
    // it will give an error bcs the scope of i is only within the for loop
    // so if we want to use i outside the loop, we have to define it outside (like int i; before the loop)
   ------------------------------------------------------------------------------------ */


    // another example of for loop
    int i;
    for (i = 5; i >= 1; i = i - 1) {
        cout << "Divyansh " << i << endl;
    }

    cout << "Value of i after the loop is: " << i << endl;
    // here the value of i will be 0 bcs the loop will stop when i becomes 0
    // so the last value of i will be 0
    return 0;
}