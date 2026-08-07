#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
    for (int  i=0 ; i<n ; i++){
        for (int j=0; j< n-1 ; j++) {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"after bubble sort:";
     for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main() {

    int a[]= {9,8,7,6,5,5,4,3,1,2};

    int size= sizeof(a)/sizeof(a[0]);
    
    cout<<"before bubble sort:";
    for(int i=0; i<size ; i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    bubblesort(a,size);

    return 0;
}