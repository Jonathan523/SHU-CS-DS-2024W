#pragma once
#include <cstddef>
#include <iostream>

struct TreeNode
{
    char data;
    TreeNode* lchild;
    TreeNode* rchild;

    TreeNode(const char& r) : data(r), lchild(NULL), rchild(NULL) {}
};

char readInput();
TreeNode* buildTree();
int CountLeaf(TreeNode* root);



