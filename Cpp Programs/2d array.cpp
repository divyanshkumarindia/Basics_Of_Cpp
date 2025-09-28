#include <bits/stdc++.h>
using namespace std;
    // This is 2D array

int main() {
    int arr[3][5]; // 2D array of size 3x5

    /*
    // it's like a matrix with 3 rows and 5 columns
    like this:
        1 2 3 4 5    <--- columns (zero based indexing)
      -------------
    1 | 0 1 2 3 4 |
    2 | 5 6 7 8 9 |
    3 | 1 2 3 4 5 |
      -------------
    */

    arr[1][3] = 10;
    // this will assign 10 to the element at 2nd row and 4th
    cout << arr[1][3] << '\n'; // this will print 10

    // for those we haven't defigned the value, it will be some garbage value
    cout << arr[0][0] << '\n'; // this will print some garbage
    // every time we run the code, it will print some different garbage value
    
   return 0;
}