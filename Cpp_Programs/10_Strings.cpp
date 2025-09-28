#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Divyansh";
    // characters when added, makes up a string

    // string contains double quotes " "
    // char contains single quotes ' '

    int length = s.size();
    // there is also another function s.length() which does the same thing
    
    cout << "1st char of the string is: " << s[0] << '\n';
    // this will print the first character of the string
    cout << "2nd char of the string is: " << s[1] << '\n';
    // this will print the second character of the string

    cout << "Last 2nd char of the string is: " << s[length-2] << '\n';
    // here length-1 is used bcs indexing starts from 0
    // so if the length of the string is 8 then the last character will be at index 7 
    // (Like divyansh) last char is h which is at index 7
    // remember this point that indexing starts from 0 in C++ (and most programming languages)

    // ------------------------------------------------------------------------------------
    // another way to get the last character of the string is using the back() function
    cout << "Last char of the string is: " << s.back() << '\n';
    // here back() is a function which returns the last character of the string
    // but it is prefered to use s[length-1] bcs it is more intuitive and easy to understand
    // ------------------------------------------------------------------------------------

    s[length-1] = 'Z';
    // character contains single quotes ' '
    // here we are changing the last character of the string to 'A'
    cout << "String after changing last char to Z is: " << s << '\n';
    cout << "Last char of the sting now is: " << s[length-1] << '\n';
    // printing the modified string
    cout << "Length of the string is: " << length << '\n';
    cout << "Size of the string is: " << s.size() << '\n';
    // both are similar functions to get the length of the string

    // the difference between size() and length() is that size() returns the number of characters in the string
    // whereas length() returns the number of characters in the string excluding the null character
    // but in C++ both are same and can be used interchangeably
    
    return 0;
}