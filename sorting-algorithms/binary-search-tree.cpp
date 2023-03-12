#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
private:
    TreeNode* root;

    TreeNode* insertNode(TreeNode* root, int val) {
        if (root == NULL) {
            return new TreeNode(val);
        }
        if (val < root->val) {
            root->left = insertNode(root->left, val);
        }
        else {
            root->right = insertNode(root->right, val);
        }
        return root;
    }

    TreeNode* searchNode(TreeNode* root, int val) {
        if (root == NULL || root->val == val) {
            return root;
        }
        if (val < root->val) {
            return searchNode(root->left, val);
        }
        else {
            return searchNode(root->right, val);
        }
    }

public:
    BST() {
        root = NULL;
    }

    void insert(int val) {
        root = insertNode(root, val);
    }

    bool search(int val) {
        TreeNode* result = searchNode(root, val);
        return result != NULL;
    }
};

int main() {
    BST tree;
    tree.insert(5);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);

    cout << tree.search(7) << endl; // 1 (true)
    cout << tree.search(3) << endl; // 0 (false)

    return 0;
}
