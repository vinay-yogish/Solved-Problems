#include <iostream>

using namespace std;

int main() {

    int l, r, k, count = 0;

    // get inputs
    cin >> l >> r >> k;

    // calculate the divisors

    for(int i = l; i <= r; i++) {

        if ((i % k) == 0)
            count++;
    }

    // print result
    cout << count;

    return 0;
}
