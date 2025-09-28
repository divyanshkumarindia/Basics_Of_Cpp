#include <bits/stdc++.h>
using namespace std;

    // return function (it will return something)
    // return type can be anything like int, float, double, char, string, etc.
    // if we use return statement in a void function then it will give an error

    // return is basically used to return the value to the place where the function was called
    //
    // parameterized function
    // not parameterized function


    // pass by reference
    // when we pass the value by reference then we pass the address of the variable
    // so any changes made to num inside this function will affect the original num in main
    // this is called pass by reference

    void doSomething(string &s) {
        // the only difference between pass by value and pass by reference is the use of &
        // & is used to get the address of the variable
        // so here we are passing the address of s to the function
        // so any changes made to s inside this function will affect the original s in main

        s[0] = 'T';
        cout << s << endl; // prints Taj
    }

    int main() {
        string s = "Raj";
        cout << s << endl; // prints Raj
        doSomething(s);
        cout << s << endl; // prints Taj
        return 0;
    }
    
    // pass by reference can be written in other ways also
    // like using pointers, etc. but other ways are more confusing
    // so it's better to use this way only
