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
        for (int i = 0; i < s.size(); i++)
            c.insert(s[i]);
        return c.size();
    }
};
// @lc code=end
