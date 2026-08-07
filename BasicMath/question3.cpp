#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(int n){
    int rev = 0;
    int x = n;
    while (n > 0){
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    return x == rev;
}
int main() {
    int n;
    cout << "enter n:";
    cin >> n;

    if (is_palindrome(n)){
        cout << n << " is a palindrome" << endl;
    } else {
        cout << n << " is not a palindrome" << endl;
    }

    return 0;
}