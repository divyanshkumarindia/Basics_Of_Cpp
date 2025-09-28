#include <bits/stdc++.h>
using namespace std;


/*
int main() {
    int arr[5];
    cout << "Enter 5 values: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
} 
*/


// pass by reference with array

        //always keep in mind that arrays always goes with the reference
        // there is no need to use & for arrays
        // for anything else like vectors, maps, lists, string, etc. we need to use & for pass by reference



    void doSomething(int arr[], int n) {
        // for array we don't need to use & for pass by reference
        // because arrays always goes with the reference

        arr[0] += 100; // modify the first element of the array
        // this change will be reflected in the original array in main
        cout << "Value inside function: " << arr[0] << endl; // prints modified value
    }

    int main() {
        int n = 5; // size of the array
        int arr[n]; // declare an array of size n

        for (int i = 0; i < n; i = i + 1) { // input values in the array
            cout << "Enter value " << i + 1 << ": "; // i+1 for user friendly
            cin >> arr[i]; // input value at index i
        }
        
        // once the for loop is done, we have the array with us
        // now we can call the function and pass the array to it

        doSomething(arr, n);
        // doSomething is the function name
        // array and n are passed to the function as arguments

        cout << "Value inside int main: " << arr[0] << endl;
        // here arr[0] will be changed because we passed the array by reference

        return 0;
    }