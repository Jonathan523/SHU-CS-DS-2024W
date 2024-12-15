
#include <cstring>  // 用于字符串操作
#include <iostream>

void DeleteString(char* str, int s, int m, int t)
{  // m表示起始位置，t表示删除长度
    // 检查违法输入
    if (m >= s || t >= (s - m)) {
        std::cout << "Invalid input: m or t is out of range." << std::endl;
        return;
    }

    char* result = str + s;  // 结果存储到第 s 单元以后的单元
    int j = 0;

    // 将第 1 到第 (m-1) 个字符复制到结果
    for (int i = 0; i < m - 1; i++) {
        result[j++] = str[i];
    }

    // 跳过第 m 到第 (m + t - 1) 个字符追加复制到结果中
    for (int i = m + t - 1; i < s; i++) {
        result[j++] = str[i];
    }

    // 添加字符串结束符
    result[j] = '\0';

    // 输出结果
    std::cout << "Original string: " << str << std::endl;
    std::cout << "Modified string stored after index " << s << ": " << result
              << std::endl;
}

int main()
{

    char str[200];
#ifdef DS_DEBUG
    std::cout << "Enter your string (length<200)" << std::endl;
#endif
    std::cin >> str;
    int s = strlen(str);

    int m, t;
#ifdef DS_DFBUG
    std::cout
        << "Enter the starting position (m, 1-based index): ";  // 删除子串的起始位置
#endif
    std::cin >> m;
#ifdef DE_DFBUG
    std::cout
        << "Enter the length of the substring to delete (t): ";  // 删除子串的长度
#endif
    std::cin >> t;

    DeleteString(str, s, m, t);

    return 0;
}