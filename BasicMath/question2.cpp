#include <bits/stdc++.h>
using namespace std;
int reverse_number(int n){
    int rev = 0;
    while (n > 0){
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    return rev;
}
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int  reversedigits = reverse_number(n);
    cout<<"reverse of number:"<<reversedigits<<endl;
    

    return 0;
}