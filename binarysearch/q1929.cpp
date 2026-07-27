#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
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

    vector<int> ans = getConcatenation(nums);

    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}