#include <bits/stdc++.h>
using namespace std;
int sumlessthantarget(vector<int>nums,int sum){
int n=nums.size();
sort(nums.begin(),nums.end());
int count=0;
for(int i=0;i<n-2;i++){
    int left=i+1;
    int right=n-1;
    while(left<right){
        int currsum=nums[i]+nums[left]+nums[right];
        if(currsum<sum){
            count+=(right-left);
            left++;
        }else{
            right--;
        }
    }
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
    int count=sumlessthantarget(arr,target);
    cout<<"the number of sub arr whose sum is less than "<< target<<"is :"<<count<<endl;
    return 0;
}