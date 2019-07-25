#include<iostream>
#include<string>

using namespace std;

/*
 * @Notice
 *     首先应根据字符串长度分情况讨论：
 *			a. L(needle) = 0
 *			b. L(needle) != 0
 *				b-1. L(hay) < L(needle)
 *				b-2. L(hay) >= L(needle)
 *					b-1-1. L(needle) = 1,则for(needle)就不需要了
 *					b-1-1. L(needle) > 1,则需要for嵌套
 *						在嵌套比对过程中，一旦出现L(hay) < L(needle)的情况，立即停止之后的比对，减少耗时
 *		CopyRight 2019/07/25 ydq
*/
class Solution {
public:
	int strStr(string haystack, string needle) {
		//判断子串needle是否为空
		if (needle.length() == 0)
		{
			return 0;
		}

		//开始查找位置
		bool flag = false;

		if (haystack.length() < needle.length())//【1】haystack的长度 < needle的长度
		{
			return -1;
		}

		for (int i = 0; i < haystack.length(); i++) //【2】haystack的长度 >= needle的长度
		{
			if (haystack.length() - i < needle.length())  //终止比对，减少耗时
			{
				return -1;
			}
			if (haystack[i] == needle[0])
			{
				if (needle.length() > 1) //且needle长度大于1
				{
					for (int j = 1; j < needle.length(); j++)
					{
						if (needle[j] == haystack[i + j])
						{
							flag = true;
						}
						else
						{
							flag = false;
							break;
						}
					}
					if (flag)
					{
						return i;
					}
				}
				else
				{
					return 0;
				}
				
			}
		}
		return -1;
	}
};

int main()
{
	Solution s;
	cout << s.strStr("hhhh", "hhhh") << endl;
	return 0;
}