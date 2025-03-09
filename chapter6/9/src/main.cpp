#include <iostream>
#include <queue>

// 定义二叉树节点结构体
struct TreeNode {
    int val; 
    TreeNode* left; 
    TreeNode* right; 
    TreeNode(int x) : val(x), left(NULL), right(NULL) {} 
};

TreeNode* buildTree() {
    int rootVal;
    std::cout << "请输入根节点的值：";
    while (!(std::cin >> rootVal)) {
        std::cin.clear(); // 清除错误标志
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入直到下一个换行符
        std::cout << "无效输入，请输入一个整数：";
    }
    if (rootVal == -1) { 
        return NULL;
    }
    TreeNode* root = new TreeNode(rootVal); // 创建根节点
    std::cout << "请输入节点 " << rootVal << " 的左子节点值（输入-1表示无子节点）：";
    while (!(cin >> rootVal)) {
        std::cin.clear(); // 清除错误标志
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入直到下一个换行符
        std::cout << "无效输入，请输入一个整数：";
    }
    root->left = buildTree(); // 递归构建左子树
    cout << "请输入节点 " << root->val << " 的右子节点值（输入-1表示无子节点）：";
    while (!(cin >> rootVal)) {
        std::cin.clear(); // 清除错误标志
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入直到下一个换行符
        std::cout << "无效输入，请输入一个整数：";
    }
    root->right = buildTree(); // 递归构建右子树
    return root;
}

// 函数：计算二叉树的最大宽度
int maxWidth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    int maxWidth = 0;
    queue<TreeNode*> q; 
    q.push(root); 
    while (!q.empty()) {
        int levelSize = q.size(); 
        maxWidth = max(maxWidth, levelSize); 
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front(); // 取出队首节点
            q.pop();
            if (node->left !=NULL) {
                q.push(node->left); // 左子节点入队
            }
            if (node->right !=NULL) {
                q.push(node->right); // 右子节点入队
            }
        }
    }
    return maxWidth;
}

int main() {
    std::cout << "构建二叉树：" << std::endl;
    TreeNode* root = buildTree(); // 构建二叉树
    int max1 = maxWidth(root); // 计算最大宽度
    std::cout << "二叉树的最大宽度为：" << max1 << std::endl;
    return 0;
}

