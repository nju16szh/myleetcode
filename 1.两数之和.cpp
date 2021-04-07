/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> maps;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int findx = target - nums[i];
            if (maps.find(findx) != maps.end())
            {
                res.push_back(i);
                res.push_back(maps[findx]);
                return res;
            }
            maps[nums[i]] = i;
        }
        return res;
    }
};
// @lc code=end
