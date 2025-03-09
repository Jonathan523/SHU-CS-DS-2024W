#include "BinaryTree.hpp"
#include <iostream>

int main()
{
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    BinaryTree btree(root);

    std::vector<int> result = btree.inorderTraversal();
    std::cout << "二叉树为：" << std::endl;
    std::cout << "      1" << std::endl;
    std::cout << "     / \\" << std::endl;
    std::cout << "    2   3" << std::endl;
    std::cout << "   / \\" << std::endl;
    std::cout << "  4   5" << std::endl;

    std::cout << "中序遍历结果: ";
    for (std::size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}