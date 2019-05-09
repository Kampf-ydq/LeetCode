#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string longest = "";
		int minLen,l;	
		bool flag = true;
		
		//1.输入字符串为空
		if (strs.size() == 0)
		{
			return longest;
		}

		minLen = strs[0].size();

		//2.找出最短字符串的长度
		for (int i = 1; i < strs.size(); i++)
		{
			l = strs[i].size();
			minLen = (l < minLen) ? l : minLen;
		}

		//3.匹配最长串
		for (int j = 0; j < minLen; j++)
		{
			for (int i = 0; i < strs.size() - 1;)
			{
				if (strs[i][j] == strs[i + 1][j])
				{
					i++;
				}
				else
				{
					//找到了不相等的字符，停止这一层查找
					flag = false;
					break;
				}
			}
			if (flag) {
				longest += strs[0][j];
			}
			else
			{
				break;
			}
				
		}
		return longest;
	}
};
