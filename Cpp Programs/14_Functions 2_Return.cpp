#include <bits/stdc++.h>
using namespace std;

    // return function (it will return something)
    // return type can be anything like int, float, double, char, string, etc.
    // if we use return statement in a void function then it will give an error

    // return is basically used to return the value to the place where the function was called
    //
    // parameterized function
    // not parameterized function

    int sum(int num1, int num2) {
        // here num1 and num2 are parameters and sum is the function name
        // parameters are the variables which will take the values when the function is called
        int num3 = num1 + num2;
        // num3 is a local variable and can only be used inside this function
        return num3;
        // return the value to the place where the function was called
    }

    int main() {
        int num1, num2;
        // like int, it can be of any data type like float, double, char, string, etc.
        cout << "Enter 2 values: ";
        cin >> num1 >> num2; // taking input from user
        int res = sum(num1, num2); // calling the function and storing the returned value in res
        
        // here num1 and num2 are arguments and sum is the function name
        // arguments are the values which are passed to the function when it is called
        
        cout << res << endl;
        // printing the result

        return 0;
    }


/*
    we can do the same thing with void function
    // void function (it'll not return anything)

    // just change int to void
    void sum (int num1, int num2) {
        int num3 = num1 + num2;
        cout << num3;
        // change return to cout
    }

    int main() {
        int num1, num2;
        cin >> num1 >> num2;
        sum(num1, num2);
        //remove the int result and the cout for res

        return 0;
    }
*/