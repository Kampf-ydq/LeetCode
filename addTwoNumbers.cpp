/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

#include<iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *result = new ListNode(0);
		ListNode *res = result;
		while (l1 != NULL && l2 != NULL)
		{
			//更新val值
			res->val = res->val + l1->val + l2->val;
			l1 = l1->next;
			l2 = l2->next;
			//满10进1，新增节点
			if (res->val > 9)
			{
				res->val = res->val - 10;
				res->next = new ListNode(1); //有进位
				res = res->next;
			}
			else
			{

				//某一链表是否到达链尾
				if (l1 != NULL || l2 != NULL) {
					//添加下一个节点并指向它
					res->next = new ListNode(0);
					res = res->next;
				}
			}
		}

		if (l1 == NULL)
		{
			while (l2 != NULL)
			{
				res->val = res->val + l2->val;
				l2 = l2->next;
				//满10进1，新增节点
				if (res->val > 9)
				{
					res->val = res->val - 10;
					res->next = new ListNode(1); //有进位
					res = res->next;
				}
				else
				{
					if (l2 != NULL) {
						//添加下一个节点并指向它
						res->next = new ListNode(0);
						res = res->next;
					}
				}
			}
		}
		else
		{
			while (l1 != NULL)
			{
				res->val = res->val + l1->val;
				l1 = l1->next;
				//满10进1，新增节点
				if (res->val > 9)
				{
					res->val = res->val - 10;
					res->next = new ListNode(1); //有进位
					res = res->next;
				}
				else
				{
					if (l1 != NULL) {
						//添加下一个节点并指向它
						res->next = new ListNode(0);
						res = res->next;
					}
				}
			}
		}

		return result;

	}
};