/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=startF
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        set<char> c;
        int res = 0;
        int pos = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i != 0)
                c.erase(s[i - 1]);
            while (pos < s.size() && c.count(s[pos])== 0)
            {
                c.insert(s[pos]);
                pos++;
            }
            res = max(res, pos - i);
        }
        return res;
    }
};
// @lc code=end
