#include <bits/stdc++.h>
using namespace std;
/*
Take the age from the user and decide accordingly:
1. If age < 18,
    print-> "not eligible for job"
2. If age >= 18 and age < 54,
    print-> "eligible for job"
3. If age >= 55 and age <= 57,
    print-> "eligible for job, but retirement soon"
4. If age > 57
    print-> "retirement time"
*/
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 18) {
        cout << "not eligible for job" << '\n';
    } // surely greater than 18

    else if (age <= 57) {
        cout << "eligible for job" <<'\n';
        if (age >= 54) {
            cout << "But retirement soon." << '\n';
        }
    } //its nested if else statement because we have if statement inside another if statement

    else {
        cout << "retirement time" << '\n';
    }
    return 0;
}