/*
You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.
*/

#include <iostream>

using namespace std;

int main() {

    string str;

    // get the string
    cin >> str;

    // toggle the string
    for(int i = 0; i < str.length(); ++i) {

        if(str[i] >= 65 && str[i] <= 90) {
            // uppercase

            // convert to lowercase
            str[i] = (char) str[i] + 32;

        } else {
            // lowercase

            // convert to uppercase
            str[i] = (char) str[i] - 32;
        }
    }

    cout << str;

    return 0;
}
