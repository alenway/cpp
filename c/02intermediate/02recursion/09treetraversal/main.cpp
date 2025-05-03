struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int treeHeight(TreeNode* root) {
    if (!root) return 0;
    return 1 + std::max(treeHeight(root->left), treeHeight(root->right));
}
