#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter no:";
    cin>>n;
    for (int i=n;i>=0;i--){
        for(int j=0; j<n-i;j++){
            cout<<" ";
        }
        for (int z=0;z<2*i-1;z++){
            cout<<"*";
        }cout<<endl;
    }
    

    return 0;
}