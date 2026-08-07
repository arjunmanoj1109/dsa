#include <iostream>
#include <vector>

using namespace std;

// 1. Definition of twosum placed BEFORE main()
vector<int> twosum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            return {left + 1, right + 1};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {};
}

// 2. Your main function
int main() {
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cout << "enter " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "enter target: ";
    int target;
    cin >> target;

    vector<int> result = twosum(arr, target);

    if (!result.empty()) {
        cout << "The output is found at indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found matching the target." << endl;
    }

    return 0;
}