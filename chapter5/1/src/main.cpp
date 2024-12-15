#include <iostream>
#include <string>
std::string findLongestCommonSubString(const std::string& s1,
                                       const std::string& s2)
{
    int dp[s1.size() + 1][s2.size() + 1], maxLength = 0, endIndex = 0;
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
                if (dp[i + 1][j + 1] > maxLength) {
                    maxLength = dp[i + 1][j + 1];
                    endIndex = i;
                }
            } else {
                dp[i + 1][j + 1] = 0;
            }
        }
    }
    return s1.substr(endIndex - maxLength + 1, maxLength);
}

int main()
{
    std::string s1, s2, result;
#ifdef DS_DEBUG
    std::cout << "Enter the first string: ";
#endif
    std::cin >> s1;
#ifdef DS_DEBUG
    std::cout << "Enter the second string: ";
#endif
    std::cin >> s2;
    result = findLongestCommonSubString(s1, s2);
    if (result.empty()) {
        std::cout << "No Longest Common Sub String found for \"" << s1
                  << "\" & \"" << s2 << "\".\n";
    } else {
        std::cout << "The Longest Common Sub String of \"" << s1 << "\" & \""
                  << s2 << "\" is: \"" << result << "\".\n";
    }
    return 0;
}