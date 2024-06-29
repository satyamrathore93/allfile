#include <iostream>
using namespace std;

int countZerosInFactorial(int n) {
    int count = 0;
    for (int i = 5; i<=n; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int zeros = countZerosInFactorial(n);
    cout << "Number of zeros in " << n << "! = " << zeros << endl;
    return 0;
}
