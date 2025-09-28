#include <bits/stdc++.h>
using namespace std;

    // return function (it will return something)
    // return type can be anything like int, float, double, char, string, etc.
    // if we use return statement in a void function then it will give an error

    // return is basically used to return the value to the place where the function was called
    //
    // parameterized function
    // not parameterized function



    void doSomething(int num) {
        // when we call a function, the copy of the value is passed to the function
        // so basically we midify the copy of the value
        // so any changes made to num inside this function do not affect the original num in main
        // this is called pass by value
        cout << num << endl; // prints 10
        num += 5;
        cout << num << endl; // prints 15
        num += 5;
        cout << num << endl; // prints 20
    }

    int main() {
        
        int num = 10; 
        doSomething(num); // function call
        // here doSomething is a function name and num is an argument
        // argument is the value which is passed to the function when it is called (only num is passed here)

        cout << num << endl; // prints 10
        // here num is still 10 because we passed the value by copy of num to the function
        return 0;
    }


/*
    //we can do same for string and other data types also

    void doSomething(string s) {
        s[0]= 'T'; 
    // use single quotes for char
        cout << s << endl; // prints Taj
    }

    int main() {
        string s = "Raj";
        doSomething(s);
        cout << s << endl; // prints Raj
        return 0;
    }
*/