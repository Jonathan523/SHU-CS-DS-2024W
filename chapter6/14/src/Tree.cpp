#include"TreeNode.hpp"
char readInput()
{
    char element;
    std::cin >> element;
    return element;
}

TreeNode* buildTree()
{
    std::cout << "请输入二叉树的根结点字符元素（空结点请输入#）：\n";

    char rootVal = readInput();
    if (rootVal == '#') {
        return nullptr;
    }

    TreeNode* root = new TreeNode(rootVal);
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        std::cout << "请输入 " << current->data << " 的左子结点（空结点请输入#）：";
        int leftVal = readInput();
        if (leftVal != '#') {
            current->lchild = new TreeNode(leftVal);
            q.push(current->lchild);
        }

        std::cout << "请输入 " << current->data << " 的右子结点（空结点请输入#）：";
        int rightVal = readInput();
        if (rightVal != '#') {
            current->rchild = new TreeNode(rightVal);
            q.push(current->rchild);
        }
    }

    return root;
}

int CountLeaf(TreeNode* root)
{
    if (root == NULL) {
        return 0;
    }

    if (root->lchild == NULL && root->rchild==NULL) {
        return 1;
    }

    return CountLeaf(root->lchild) + CountLeaf(root->rchild);
}
