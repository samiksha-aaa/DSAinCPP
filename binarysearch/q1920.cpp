#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = buildArray(nums);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}