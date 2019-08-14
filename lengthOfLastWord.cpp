#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int flag = 0;
		//特殊情况
		if (s == "")
		{
			return 0;
		}
		//从最后开始计数
		int len = s.length();
		int count = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if (s[i] == ' ' && flag == 0)
			{

			}
			else
			{
				flag = 1;
				if (s[i] != ' ')
				{
					count++;
				}
				else
				{
					break;
				}
			}
		}
		return count;
	}
};

int main()
{
	Solution s;
	cout << s.lengthOfLastWord("hel world ") << endl;
	return 0;
}