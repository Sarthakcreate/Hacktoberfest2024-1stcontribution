#include <iostream>
#include <queue>
using namespace std;

// Defining a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to perform Level Order Traversal
void levelOrderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        cout << node->val << " ";
        // Enqueue left child
        if (node->left != nullptr)
            q.push(node->left);
        // Enqueue right child
        if (node->right != nullptr)
            q.push(node->right);
    }
}

// Function to create a simple binary tree
TreeNode* createSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = createSampleTree();
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    return 0;
}
