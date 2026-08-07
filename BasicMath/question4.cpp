#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    // Find the smaller of the two numbers to limit our loop
    int smallest = min(a, b);
    
    // Count downwards from the smallest number to find the HIGHEST common factor
    for (int i = smallest; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }   
    
    // If no common divisor > 1 is found, the GCD is 1
    return 1;
}

int main() {
    int n, m;
    cout << "enter no 1: ";
    cin >> n;
    cout << "enter no 2: ";
    cin >> m;

    // Call the function and print the result
    cout << "GCD of " << n << " and " << m << " is: " << gcd(n, m) << endl;

    return 0;
}
