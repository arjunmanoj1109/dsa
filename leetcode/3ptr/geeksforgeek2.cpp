#include <bits/stdc++.h>
using namespace std;
void segregate(int arr[],int len){
    int left=0;
    int right=len-1;
    while(left<right){
        while (arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if (left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[]={0,1,1,1,0,0,0,1};
    int len= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    segregate(arr,len);
    return 0;
}