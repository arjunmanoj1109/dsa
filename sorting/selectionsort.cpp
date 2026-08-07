#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int size){
    for (int i=0; i<size ; i++){
        int min= i;
        for(int j=i+1; j<size ; j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }

        int temp = arr[min];
        arr[min]= arr[i];
        arr[i] = temp;
    }

    cout<<"After sorting:" ;
    for (int i=0; i<size; i++){
        cout <<arr[i]<< " ";
    }cout <<endl;

}




int main() {
    int arr[] ={ 5,6,7,9,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout <<"before sorting: ";
    for (int i=0; i<n ;i++){
        cout <<arr[i]<< " ";
    }cout <<endl;

    sort( arr,n);



    

    return 0;
}