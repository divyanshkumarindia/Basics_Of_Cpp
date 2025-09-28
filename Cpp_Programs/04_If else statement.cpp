#include <iostream>
using namespace std;
// Write a program that takes an input of age
// and prints if you are adult, teenager or child

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "You are an adult!" << '\n';
    }

    // It is not mandatory to have else after if **
    else if(age < 10 && age >= 0) {
        // else says, before going into me, you will have to check my condition
        // if the condition is true, then only go into me
        // if the condition is false, then skip me
        cout << "You are child!" << '\n';
    }

    else if(age < 18 && age >= 10) {
        //&& is logical AND operator
        // it checks if both the conditions are true
        // if both are true, then only it returns true
        // if any one of them is false, then it returns false
        // here, if age < 18 is true and age >= 10 is true, then only it goes into this block
        // if any one of them is false, then it skips this block
        cout << "You are a teenager!" << '\n';
    }

    else {
        // else says, before going into me, you don't have to check any condition
        // just go into me if condition of if is false
        cout << "You are not born yet!" << '\n';
    }

    return 0;
}