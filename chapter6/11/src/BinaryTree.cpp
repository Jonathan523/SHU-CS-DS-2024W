#include "BinaryTree.hpp"
#include <iostream>
#include <stack>

std::vector<int> BinaryTree::inorderTraversal()
{
    std::vector<int> result;
    std::stack<TreeNode*> nodeStack;
    TreeNode* currentNode = root;

    while (!nodeStack.empty() || currentNode != 0) {
        while (currentNode != 0) {
            nodeStack.push(currentNode);      // 当前节点入栈
            currentNode = currentNode->left;  // 移动到左子节点
        }

        currentNode = nodeStack.top();
        nodeStack.pop();
        result.push_back(currentNode->value);  // 相当于 cout

        // 转向右子树
        currentNode = currentNode->right;
    }

    return result;  // 返回最终的遍历结果
}

BinaryTree::~BinaryTree() { destroyTree(root); }

void BinaryTree::destroyTree(TreeNode* node)
{
    if (node != 0) {
        if (node->left != 0) {
            destroyTree(node->left);
        }
        if (node->right != 0) {
            destroyTree(node->right);
        }
        delete node;
    }
}