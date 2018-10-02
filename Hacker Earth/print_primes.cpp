#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main() {

    int n;

    cin >> n;

    cout << isPrime(n) << endl;

    for(int i = 1; i < n; i++) {

       if( isPrime(i) )
            cout << i << " ";
    }


    return 0;
}

bool isPrime(int n) {

    int limit = sqrt(n);
    if( n == 1 )
        return false;

    for(int i = 2; i <= limit; i++) {
        if( (n % i) == 0)
            return false;
    }

    return true;
}
