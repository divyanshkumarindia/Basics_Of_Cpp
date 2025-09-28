#include <bits/stdc++.h>
using namespace std;
/*
Take the day no. and print the corrusponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

// It is similar to if else statement
// but we preffer more to use if else because it is more readable and easy to use
//still it is handy to know switch statement


// switch statement is used when we have multiple conditions to check
// and we want to execute different code for each condition
int main() {
    int day;
    cout << "Enter day no : ";
    cin >> day;

    switch(day) {
        // on the bases of the day, the switch statement will be triggered
        case 1:
        // the switch will always be between 1 to 7, bcs they say input will always be between 1 to 7
        // we can also use char like 'A', 'B' etc but here we are using int like 1, 2 etc.

            cout << "Monday" << '\n';
            break;
            // break is used to exit the switch statement
            // if we don't use break, then the code will continue to execute the next case
            // and it will print all the cases after the matched case
            // which we don't want

        case 2:
            cout << "Tuesday" << '\n';
            break;
        case 3:
            cout << "Wednesday" << '\n';
            break;
        case 4:
            cout << "Thursday" << '\n';
            break;
        case 5:
            cout << "Friday" << '\n';
            break;
        case 6:
        cout << "Saturday" << '\n';
            break;
        case 7:
            cout << "Sunday" << '\n';
            break;
        default:
            // default is used when none of the cases match
            cout << "Invalid day no." << '\n';
        // no break is needed here as it is the last case
    }
}