
#include <cstring>  // 用于字符串操作
#include <iostream>

void DeleteString(char* str, int s, int m, int t)
{  // m表示起始位置，t表示删除长度
    // 检查违法输入
    if (m >= s || t >= (s - m)) {
        std::cout << "Invalid input: m or t is out of range." << std::endl;
        return;
    }

    std::cout << "Original string: " << str <<std:: endl;

    for (int i = m - 1; i < s - t; ++i) {
        str[i] = str[i + t]; // 将子串后面的字符往前移动
    }
    str[s - t] = '\0'; 

    // 将删除后的结果复制到第 s 单元以后的部分
    char* result = str + s; // 指向数组第 s 单元的位置
    strcpy(result, str);    // 复制删除后的字符串到目标位置

    std::cout << "Modified string: " << str << std::endl;
    std::cout << "Result stored after index " << s << ": " << result <<std:: endl;
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