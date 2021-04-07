/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int len1 = 0;
        int len2 = 0;
        ListNode *res = new ListNode(0);
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *pres = res;
        ListNode *p1tmp = l1;
        ListNode *p2tmp = l2;
        for (; p1tmp->next != NULL; p1tmp = p1tmp->next)
            len1++;
        for (; p2tmp->next != NULL; p2tmp = p2tmp->next)
            len2++;
        if (len1 > len2)
            for (int i = 0; i < len1 - len2; i++)
            {
                ListNode *tmp = new ListNode(0);
                p2tmp->next = tmp;
                p2tmp = p2tmp->next;
            }
        else if (len2 > len1)
            for (int i = 0; i < len2 - len1; i++)
            {
                ListNode *tmp = new ListNode(0);
                p1tmp->next = tmp;
                p1tmp = p1tmp->next;
            }
        int CF = 0;
        while (p1->next != NULL && p2->next != NULL)
        {
            int sum = p1->val + p2->val + CF;
            if (sum >= 10)
                CF = 1;
            else
                CF = 0;
            pres->val = sum % 10;
            ListNode *tmp = new ListNode(0);
            pres->next = tmp;
            pres = pres->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        int sum = p1->val + p2->val + CF;
        if (sum >= 10)
        {
            pres->val = sum % 10;
            ListNode *tmp = new ListNode(1);
            pres->next = tmp;
            pres = pres->next;
        }
        else
            pres->val = sum;
        return res;
    }
};
// @lc code=end
