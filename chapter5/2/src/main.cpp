
#include <cstring>  // 用于字符串操作
#include <iostream>

void DeleteString(char* str, int s, int m, int t)
{  // m表示起始位置，t表示删除长度
    // 检查违法输入
    if (m >= s || t > (s - m)) {
        std::cout << "Invalid input: m or t is out of range." << '\n';
        return;
    }
    char *delete_str=new char[s*2] ;
    strcpy( delete_str, str);
    std::cout << "Original string: " << str << '\n';

    
    char* p = delete_str + m;
    char* q = delete_str + m + t;
    *p = '\0';
    strcat(delete_str, q);

    // 将删除后的结果复制到第 s 单元以后的部分
    char* result = str + s;
    strcpy(result, delete_str);

    
    std::cout << "Modified string: " << str << '\n';
}

int main()
{

    char str[200];
#ifdef DS_DEBUG
    std::cout << "Enter your string (length<200)" << '\n';
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