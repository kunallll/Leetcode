#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
};

TreeNode* createNode(int data) {
    TreeNode* node = new TreeNode();
    node->val = data;
    node->left = node->right = NULL;

    return node;
}


TreeNode* insertInTree(TreeNode* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
    }
    else {
        if (root->val > data) {
            root->left = insertInTree(root->left, data);
        }
        else {
            root->right = insertInTree(root->right, data);
        }
    }
    return root;
}

void inorder(TreeNode* root) {
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);

    cout << "Check";
}

int main() {
    TreeNode *root = nullptr;
    int keys[] = { 15, 10, 20, 8, 12, 16, 25 };
 
    for (int key: keys) {
        root = insertInTree(root, key);
    }

    inorder(root);

    return 0;
}