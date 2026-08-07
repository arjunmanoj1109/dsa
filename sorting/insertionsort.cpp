#include <bits/stdc++.h>
using namespace std;

void insertionsort(int a[],int len);

int main() {

    int a[]={9,8,7,6,5,4,3,2,1};
    int len= sizeof(a)/sizeof(a[0]);

    cout<<"before sorting: ";

    for (int i=0 ; i<len ;i++) {
        cout<<a[i]<<"  ";
    }cout<<endl;

    insertionsort(a,len);


    return 0;
}

void insertionsort(int a[],int len){
    for( int i=1 ; i<len ; i++){
        int key= a[i];
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
     cout<<"after sorting:";

    for (int i=0 ; i<len ;i++) {
        cout<<a[i]<<"  ";
    }cout<<endl;
}