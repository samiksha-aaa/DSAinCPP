#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++) {

        auto it = find(nums2.begin(), nums2.end(), nums1[i]);

        if (it != nums2.end()) {
            ans.push_back(nums1[i]);
            nums2.erase(it);    
        }
    }

    return ans;
}

int main() {

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);

    cout << "Enter first array: ";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);

    cout << "Enter second array: ";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    vector<int> ans = intersect(nums1, nums2);

    cout << "Intersection: ";

    for (int x : ans)
        cout << x << " ";

    return 0;
}