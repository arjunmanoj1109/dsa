#include <bits/stdc++.h>
using namespace std;
vector<int> sortedsquares(const vector<int>& nums){
    int n= nums.size();
    vector <int> ans(n);
    int left =0;
    int right = n-1;
    for (int k=n-1;k>=0;k--){
        if (abs(nums[left]) > abs(nums[right])){
            ans[k]=nums[left]*nums[left];
            left++;
        }else{
           ans[k]=nums[right]*nums[right];
           right--; 
        }
    }
    return ans;
}

int main() {
    vector<int> arr={-4,-3,-2,-1,0,1,2,3,4};
    cout<<"before square-sorting:";
    int len= arr.size();
    for(int i=0; i<len;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    vector<int> newarr =sortedsquares(arr);
    cout<<"after square-sorting:";
    for(int i=0; i<len;i++){
        cout<<newarr[i]<<" ";
    }cout<<endl;
    return 0;
}