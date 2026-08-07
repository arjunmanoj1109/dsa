#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter no of rows;";
    cin>>n;

    for (int i=0 ;i<n;i++){
        for (int j=0; j< n-i-1; j++){
            cout<<" ";
        }
        for (int z=0;z<2*i-1;z++){
            cout<<"*";
        }cout<<endl;
    }


    

    return 0;
}