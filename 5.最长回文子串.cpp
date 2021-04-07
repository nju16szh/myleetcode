/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.size() == 1)
            return s;
        string t = s;
        reverse(t.begin(), t.end());
        int maxlength = 0;
        int start = 0;
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < t.size(); j++)
            {
                if (s[i] == t[j])
                {
                    int m = i;
                    int n = j;
                    while (m < s.size() && n < t.size() && s[m] == t[n])
                    {
                        m++;
                        n++;
                    }
                    int length = m - i;
                    if (length == s.size())
                        return s;
                    if (m + j == s.size() && length > maxlength)
                    {
                        maxlength = length;
                        start = i;
                    }
                }
            }
        }
        res = s.substr(start, maxlength);
        return res;
    }
};
// @lc code=end
