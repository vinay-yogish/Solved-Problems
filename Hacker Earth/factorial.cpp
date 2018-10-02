#include <iostream>

using namespace std;

int main() {

    int n, fact = 1;

    //get input
    cin >> n;

    // calculate factorial
    for(int i = 2; i <= n; ++i)
        fact *= i;

    // print the result
    cout << fact;

    return 0;
}
