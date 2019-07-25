#include<iostream>
#include<string>

using namespace std;

/*
 * @Notice
 *     ����Ӧ�����ַ������ȷ�������ۣ�
 *			a. L(needle) = 0
 *			b. L(needle) != 0
 *				b-1. L(hay) < L(needle)
 *				b-2. L(hay) >= L(needle)
 *					b-1-1. L(needle) = 1,��for(needle)�Ͳ���Ҫ��
 *					b-1-1. L(needle) > 1,����ҪforǶ��
 *						��Ƕ�ױȶԹ����У�һ������L(hay) < L(needle)�����������ֹ֮ͣ��ıȶԣ����ٺ�ʱ
 *		CopyRight 2019/07/25 ydq
*/
class Solution {
public:
	int strStr(string haystack, string needle) {
		//�ж��Ӵ�needle�Ƿ�Ϊ��
		if (needle.length() == 0)
		{
			return 0;
		}

		//��ʼ����λ��
		bool flag = false;

		if (haystack.length() < needle.length())//��1��haystack�ĳ��� < needle�ĳ���
		{
			return -1;
		}

		for (int i = 0; i < haystack.length(); i++) //��2��haystack�ĳ��� >= needle�ĳ���
		{
			if (haystack.length() - i < needle.length())  //��ֹ�ȶԣ����ٺ�ʱ
			{
				return -1;
			}
			if (haystack[i] == needle[0])
			{
				if (needle.length() > 1) //��needle���ȴ���1
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