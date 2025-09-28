#include <bits/stdc++.h>
using namespace std;


    // functions is important in dsa bcs we will be using it throughtout any program

    // functions are set of code which perform something for you
    // functions are used to modularize your code
    // functions are used to increase readability of your code
    // functions are used to use same code multiple times without writing it again and again

    // mainly we use 4 kind of functions in c++

    // void function -> which doesn't return anything
    // return function
    // parameterized function
    // not parameterized function

/* ---------------------------------------------------------------------------------
//using void function and non parameterized function

    void printName() {

        // void will never return anything
        // printName is the name of the function
        // () -> means it doesn't take any parameter

        cout << "Divyansh" << endl;
    }

    int main() {
        printName();
        return 0;
    }
  ---------------------------------------------------------------------------------*/

  // void and parameterized function

  void printName(string name) {
    // here we are using string name for the parameter
    cout << "Hey, " << name << endl;
  }

  int main() {
    string name;
    cout << "Enter name 1: ";
    cin >> name;
    printName(name);

    string name2;
    cout << "Enter name 2: ";
    cin >> name2;
    printName(name2);
    
    return 0;
  }
