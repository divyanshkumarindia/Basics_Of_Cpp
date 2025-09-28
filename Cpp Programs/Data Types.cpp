#include <iostream>
using namespace std;

int main(){
    // int
    int x, raj = 1;
    // can't do int 1, as it can't start with a number
    // integer data type, typically 4 bytes

    // long 
    long y = 15000;
    // long integer data type, typically 8 bytes

    // long long
    long long z = 1500000000;
    // long long integer data type, typically 8 bytes
    // used when int data type is not sufficient

    // float, double
    float b = 5;
    float a = 5.78654;
    // we can also assign integer values to float and double like b = 5
    double c = 5.7856876543;
    cout << x << " " << raj << " " << y << " " << z << " " << a << " " << b << " " << c << '\n';
    // float and double are used for decimal values
    // float is typically 4 bytes, double is typically 8 bytes

    //----------------------------------------------------------------

    // string (and getline)
    // string is used to store a sequence of characters (like a word)
    /*
    string s;
    cin >> s;
    cout << s;
    // only one word can be stored
    */
    string s1, s2;
    cout << "Enter two words: ";
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << '\n';
    // two words stored in two different strings

    // getline
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    // getline with take the entire line and put it into the variable (str)
    cout << str << '\n';
    // then print the variable
    // getline is used to store a sentence (multiple words with spaces)
    // it only picks up till the line breaks

    //----------------------------------------------------------------

    // char
    char ch; //can declare as well like ch = 'g'
    cout << "Enter a character: ";
    cin >> ch; // if declared, then no need to use cin
    cout << ch << '\n';
    //char is typically 1 bytes
    // for single character we use char other than string due to less space


    // dsa all the required data structure

    // int-4bytes -10^9 to 10^9 | long-8 -10^12 | long long-8 -10^18 | float-4 | double-8
    // string and getline
    // char-1

    return 0;
}