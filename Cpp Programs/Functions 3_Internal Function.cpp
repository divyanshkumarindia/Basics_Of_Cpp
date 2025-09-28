#include <bits/stdc++.h>
using namespace std;

    // internal function
    // function inside a function
    // we can call the internal function only inside the external function
    // we cannot call the internal function outside the external function

/*
// example of internal function -- simple min and max function
    int main() {
        int num1, num2;
        cout << "Enter 2 values: ";
        cin >> num1 >> num2;
        int minimum = min(num1, num2);
    // min is an internal function of the standard library
        cout << "Minimum value is: " << minimum << endl;

        int maximum = max(num1, num2);
    // max is an internal function of the standard library
        cout << "Maximum value is: " << maximum << endl;
        return 0;
    }*/

    int maxx(int num1, int num2) {
        // here we used maxx because max is an internal function of the standard library
        // if we use max as a function name then it will give an error
        // because it will be confused between the internal function and our function
        // so to avoid this confusion we can use a different name
        // or we can use the namespace std::max to call the internal function
        // but it's not a good practice to use the same name as an internal function
        // so we used maxx so to use it as a function name
        if (num1 >= num2) return num1;
        else return num2;
        // if we don't write the else statement then it'll show a garbage value
        // because it was looking for a return value
    }

    int main() {
        int num1, num2;
        cout << "Enter 2 values: ";
        cin >> num1 >> num2;
        int maximum = maxx(num1, num2);
        cout << "Maximum value is: " << maximum << endl;
        return 0;
    }