#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

TreeNode* build(vector<int> &nums, int left, int right) {
    if (left > right)
        return NULL;

    int mid = (left + right) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    root->left = build(nums, left, mid - 1);
    root->right = build(nums, mid + 1, right);

    return root;
}

void preorder(TreeNode* root) {
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    TreeNode* root = build(nums, 0, n - 1);

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}