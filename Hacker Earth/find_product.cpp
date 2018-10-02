/*
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10 ** 7 + 7.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    long int result = 1L;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];


     for(int i : arr) {
        result = (result * i) % (long int)((pow(10, 9) +7));
     }

    cout << result;


    return 0;
}
