#include <bits/stdc++.h>
using namespace std;
int productlessthank(vector<int> nums,int k ){
    int n= nums.size();
    int left=0;
    int count=0;
    int product=1;
    for(int right=0; right<n ; right++){
        product *=nums[right];
        while (product>=k){
            product/=nums[left];
            left++;
        }
        count+=(right-left+1);
    }
    return count;
}

int main() {
int n;
    cout<<"enter size";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cout<<"enter element "<< i<<" : ";
        cin>>arr[i];
    }cout<<endl;
    cout<<"the intialized arr:";
    for(int i=0; i<n;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
    cout<<"enter target:";
    int target;
    cin>>target;
    int count=productlessthank(arr,target);
    cout<<"the number of sub arr whose multiple is less than "<< target<<"is :"<<count<<endl;
    return 0;
    

    return 0;
}