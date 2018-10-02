/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string str;
    string revstr;

    // string input
    cin >> str;

    revstr = str;

    reverse(revstr.begin(), revstr.end());

    for(int i = 0; i < str.length(); ++i) {

        if(str.at(i) != revstr.at(i)) {
            cout << "NO";
            return 0;
        }

    }
        cout << "YES";

        return 0;
}
