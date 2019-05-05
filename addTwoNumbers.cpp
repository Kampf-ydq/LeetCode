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
			//����valֵ
			res->val = res->val + l1->val + l2->val;
			l1 = l1->next;
			l2 = l2->next;
			//��10��1�������ڵ�
			if (res->val > 9)
			{
				res->val = res->val - 10;
				res->next = new ListNode(1); //�н�λ
				res = res->next;
			}
			else
			{

				//ĳһ�����Ƿ񵽴���β
				if (l1 != NULL || l2 != NULL) {
					//�����һ���ڵ㲢ָ����
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
				//��10��1�������ڵ�
				if (res->val > 9)
				{
					res->val = res->val - 10;
					res->next = new ListNode(1); //�н�λ
					res = res->next;
				}
				else
				{
					if (l2 != NULL) {
						//�����һ���ڵ㲢ָ����
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
				//��10��1�������ڵ�
				if (res->val > 9)
				{
					res->val = res->val - 10;
					res->next = new ListNode(1); //�н�λ
					res = res->next;
				}
				else
				{
					if (l1 != NULL) {
						//�����һ���ڵ㲢ָ����
						res->next = new ListNode(0);
						res = res->next;
					}
				}
			}
		}

		return result;

	}
};