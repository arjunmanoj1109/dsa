#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> three_sum(vector<int> nums) {
    vector<vector<int>> ans;
    int len = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < len - 2; i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = len - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

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

    vector<vector<int>> result = three_sum(arr);
    cout << "Triplets: " << endl;
    for (auto triplet : result) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }

    return 0;
}
