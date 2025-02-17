#pragma once

#include <vector>

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(0), right(0) {}
};

class BinaryTree
{
public:
    BinaryTree(TreeNode* root) : root(root) {}
    std::vector<int> inorderTraversal();
    void destroyTree(TreeNode* node);
    ~BinaryTree();

private:
    TreeNode* root;
};