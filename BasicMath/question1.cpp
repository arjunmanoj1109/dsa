#include <bits/stdc++.h>
using namespace std;

int countdigits(int n){
    if (n==0){
        return 0;
    }    
    else{
        return log10(n)+1;
    }
}
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int  numberofdigits = countdigits(n);
    cout<<"number of digits:"<<numberofdigits<<endl;

    return 0;
}