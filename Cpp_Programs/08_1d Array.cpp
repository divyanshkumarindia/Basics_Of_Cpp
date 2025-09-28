#include <bits/stdc++.h>
using namespace std;
    // This is 1D array

int main() {

    /*
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a << " " << b << " " << c << " " << d << '\n';

    in this we are taking multiple inputs in one line,
    we dont generally use this method, we use arrays or vectors
    because what if we have to take 100 inputs
    then we will have to declare 100 variables which is not feasible
    */

    int arr[5]; // array of size 5

    // here we are defigning an array as an integer array
    // we can also define an array of other data types like float, double, char, string, etc.

    cout << "Enter 5 elements: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // taking input of array elements
    // the first element is at index 0, second at index 1 and so on

    cout << "The 3rd element of the array is: ";
    cout << arr[2] << '\n';
    // printing the 3rd element of the array

    arr[3] += 10;
    // we can also conduct operations on array as well
    cout << "The value of 4th element after adding 10 is: " << arr[3] << '\n';

    /*
    we can change the value of array as well
    like arr[0] = 16;
    cout << arr[0]; // this will print 16
    */


//------------------------------------------------------------------------------------
    // Note: everything has to be of similar datatype
    // like if we input arr[1] = 5.5; // float value
    // then it will take only 5 and ignore .5 bcs we had defined arr as an integer array

    // if we want to take float values then we have to define arr as a float array
    // like float arr[5];

    // key point: the data type as to be same for all elements of the array
    // like if we define arr as an integer array then all elements of arr have to be integers
    // we cannot have a mix of integers and floats or any other data type
//------------------------------------------------------------------------------------
    // array elements are stored in contiguous memory locations but i'm not sure where the first one will be stored
    // like if arr[0] is stored at memory location 1000 then arr[1] will be stored at 1004 (if int is of 4 bytes)
    // arr[2] will be stored at 1008 and so on
    // this is called contiguous memory allocation
    // this is one of the reasons why arrays are faster than other data structures

    // this point won't be required for dsa but it is important to keep in mind
//------------------------------------------------------------------------------------

    return 0;
}