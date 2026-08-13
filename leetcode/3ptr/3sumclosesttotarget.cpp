#include <bits/stdc++.h>
using namespace std;
int three_sum(vector<int> nums,int target) {
    int len = nums.size();
    sort(nums.begin(), nums.end());
    int closestsum=nums[0]+nums[1]+nums[2];
    for (int i = 0; i < len - 2; i++) {
        int left = i + 1;
        int right = len - 1;
        while (left < right) {
            int currentsum = nums[i] + nums[left] + nums[right];
            if (currentsum == target) {
                return currentsum;
            }
            if (abs(currentsum - target) < abs(closestsum - target)) {
                    closestsum = currentsum;
                }
            if(currentsum<target){
                left++;
            }else{
                right--;
            }
        }
    }
    return closestsum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = three_sum(arr,target);
    cout<<"result : "<<result;

    return 0;
}
