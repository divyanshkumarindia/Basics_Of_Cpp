#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "marks = ";
    cin >> marks;
    
    // here we are using multiple else if statements, instead of multiple if statements
    // because if we use multiple if statements, then all the if statements will be executed
    // but if we use else if statements, then once a condition is true, the rest will be skipped
    // so else if statements are more efficient in this case

    if (marks < 25){
        cout << "Fail" << endl;
    }
    else if (marks <= 44){
        cout << "Grade E" << endl;
    }
    else if (marks <= 49){
        cout << "Grade D" << endl;
    }
    else if (marks <= 59){
        cout << "Grade C" << endl;
    }
    else if (marks <= 79){
        cout << "Grade B" << endl;
    }
    else if (marks <= 100){
        cout << "Grade A" << endl;
    }
    else {
        cout << "Invalid!" << endl;
    }


/*      like if we would have used multiple if statements instead of else if statements
        then the code would have been like this:
    if (marks < 25){
        cout << "Fail" << endl;
    }
    if (marks <= 44){
        cout << "Grade E" << endl;
    }
        like if we would have entered marks = 10
        then the output would have been:
        Fail
        Grade E
        which we don't want
        so we use else if statements
*/
    return 0;
}